# README

Build the rust cdynlib

`cargo build`

## C

Compile the C code

```sh
gcc -L./target/debug call_rust.c -lrustffi -o call_rust.o
```

Executing the compiled binary

```sh
LD_LIBRARY_PATH=./target/debug ./call_rust.o
```

## C++

Build the header files for the library
```sh
cbindgen --output my_header.h
```

Compile the C++ code

```sh
g++ -L./target/debug -lrustffi call_rust.cpp my_header.h -o call_rust_cpp.o
```

Executing the compiled binary

```sh
LD_LIBRARY_PATH=./target/debug ./call_rust_cpp.o
```

## Problems

undefined reference to 'hello_from_rust'

solution: https://stackoverflow.com/a/61718084
