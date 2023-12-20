# Using This Repository

1. Clone
1. Run `do_it.sh` to see the example in action

Here's what it looks like on my machine:

```
$ bash do_it.sh 
~/gits/abi-break-example/lib ~/gits/abi-break-example
rm -rf ../out/*
mkdir -p ../out
g++ -Wall -fPIC -c -I./header_v1 -o ../out/source.o source.cpp
mkdir -p ../out/sysroot_v1
g++ -shared -o ../out/sysroot_v1/libabiexample.so ../out/source.o
mkdir -p ../out
g++ -Wall -fPIC -c -I./header_v2 -o ../out/source.o source.cpp
mkdir -p ../out/sysroot_v2
g++ -shared -o ../out/sysroot_v2/libabiexample.so ../out/source.o
~/gits/abi-break-example
~/gits/abi-break-example/app ~/gits/abi-break-example
rm -f app
Building with sysroot_v2
g++ -Wall -fPIC -o app app.cpp -I../lib/header_v2 -L../out/sysroot_v2 -labiexample
LD_LIBRARY_PATH=../out/sysroot_v2 ./app

Accessing abi_struct::a ...
          Directly: 99
Using lib accessor: 99
LD_LIBRARY_PATH=../out/sysroot_v1 ./app

Accessing abi_struct::a ...
          Directly: 99
Using lib accessor: 520525119
```
