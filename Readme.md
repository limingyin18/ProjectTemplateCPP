# Project Template C++

This is a C++ project template. It is meant to be used as a starting point for new projects.

- Build system: CMake
- Compiler: Clang
- Unit testing: Boost.Test
- Memory checking: Valgrind
- Documentation: Doxygen
- Version control: Git

## Structure

- build: Build directory
- src: Source code directory
- test : Unit tests directory
- thirdparty : Third party libraries
- CMakeLists.txt : CMake configuration file
- Doxyfile : Doxygen configuration file
- .gitignore : Git configuration file
- .gitmodules : Git configuration file
- .clang-format : Clang format configuration file
- .clang-tidy : Clang tidy configuration file
- Readme.md : Readme file

## Initialize

```bash
git clone --recurse-submodules [addr]
cd third_party/boost
./booststrap.sh --with-toolset=clang
./b2 toolset=clang cxxflags="-stdlib=libc++" linkflags="-stdlib=libc++"
```

## Build

```bash
mkdir build
cd build
cmake -G Ninja ..
ninja
```

After first build, create a soft link to 'compile_commands.json' in the root directory, so that clangd can find it.

```bash
ln -s compile_commands.json ../
```

## Test

Uncomment the following line in 'CMakeLists.txt' to enable unit tests.

```bash
# add_subdirectory(test)
```

## Memory check

```bash
valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./[executable]
```

## Documentation

```bash
mkdir doc
cd doc
doxygen ../Doxyfile
```

Generated documentation 'index.html' can be found in 'doc/html' directory
