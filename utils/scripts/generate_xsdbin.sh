#! /bin/bash

workspace_dir=$(readlink -f ${0})
for _ in {1,2,3}; do
  workspace_dir=$(dirname ${workspace_dir})
done

xsdbin_x86_paths=$(find ${workspace_dir} -name xsdbin -path cmake*x86)
