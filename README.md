# Initialization of class variable (static member variable)

Non-integral constants cannot be initialized inside the class as is recommended by /Core Guideline C.48/ "Prefer in-class initializers ...".

This https://stackoverflow.com/a/370311/5795941 suggests that although GCC allows such initialisations, it is not required by the C++ standard.

My understanding is that in-class initialisers are seen by the compiler and transformed into something else under the hood.  Because integral types are simpler, the compiler can do this under-the-hood stuff with them but for floats, it doesn't want to do it.

So with floats, you have to initialize the variable like any other global variable (a static member variable is a global variable that belongs to the class namespace) in the translation unit (the cpp file).

# Building and running

## Configuration

```
cd ${source_dir}
mkdir build
cd build
cmake ..
```

## Building

```
cd ${source_dir}/build
make
```

## Testing

```
cd ${source_dir}/build
make check
```
