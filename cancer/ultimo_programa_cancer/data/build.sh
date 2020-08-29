for f in *; do
    if [ -d "$f" ]; then
        echo "$f"
        pushd "$f"
        make -f ../Makefile run
        popd
    fi
done