#! /bin/bash

workspace_dir=$(readlink -f ${0})
for _ in {1,2,3}; do
  workspace_dir=$(dirname ${workspace_dir})
done

xsdbin_x86_paths=$(find ${workspace_dir} -name xsdbin -path '*cmake*x86*')

readarray -t xsdbin_x86_paths_array <<< "${xsdbin_x86_paths}"

for xsdbin in "${xsdbin_x86_paths_array[@]}"; do
  suffix="-schema-32"
  if [[ "${xsdbin}" == *"x86_64"* ]]; then
    suffix="-schema-64"
  fi
  cmd="${xsdbin} --hxx-suffix ${suffix}.hxx --cxx-suffix ${suffix}.cxx --output-dir ${workspace_dir}/include ${workspace_dir}/library.xsd"
  echo ${cmd}
  $(${cmd})
done

mv ${workspace_dir}/include/*-schema*.cxx ${workspace_dir}/src
