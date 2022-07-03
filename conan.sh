#! /bin/bash

conan="$HOME/.local/bin/conan"

build_triple=($5);  build_triple=${build_triple[2]}
build_type=$4;      build_type=${build_type,,}

conan_profile="default"

if [ "$build_triple" == "arm-none-eabi" ]; then
  conan_profile="profile-$build_type-$build_triple"
fi

${conan} $1 $2 $3 -pr ${conan_profile}
