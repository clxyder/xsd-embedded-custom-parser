#! /bin/bash

##########################
#  Runs conan commands
##########################
# $1 conan command e.g. install
# $2 install location
# $3 build instructions
# $4 cmake buildType
# $5 cmake buildKit

conan="$HOME/.local/bin/conan"

build_kit=($5); build_triple=${build_kit[2]}
build_type=$4;  build_type=${build_type,,}

conan_profile="profile-$build_type-$build_triple"

echo "${conan} $1 $2 $3 -pr ${conan_profile}"

${conan} $1 $2 $3 -pr ${conan_profile}
