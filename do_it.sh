ROOT_DIR=$(dirname $0)

pushd "${ROOT_DIR}"/lib
make clean
make
popd

pushd "${ROOT_DIR}"/app
make clean
make
make run_v2
make run_v1
popd
