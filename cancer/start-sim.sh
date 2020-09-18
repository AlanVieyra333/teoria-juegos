#!/bin/bash

dir_sim="CM_IS_simulation"
dir_data="$dir_sim/data"
dir_statistics="util"
levels=('fuerte' 'medio' 'debil')

pushd $dir_data
make
popd

for is_level in ${levels[@]}; do
  for cancer_level in ${levels[@]}; do
    pushd $dir_sim
    make strength=$is_level"-"$cancer_level
    popd

    ./util/statistics.py $is_level"-"$cancer_level
  done
done
