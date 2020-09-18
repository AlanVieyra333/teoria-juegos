#!/bin/bash

folder_sim="CM_IS_simulation"
folder_statistics="util"
levels=('fuerte' 'medio' 'debil')

for is_level in ${levels[@]}; do
  for cancer_level in ${levels[@]}; do
    pushd $folder_sim
    make strength=$is_level"-"$cancer_level
    popd

    ./util/statistics.py $is_level"-"$cancer_level
  done
done
