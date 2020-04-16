# Initialization of class variable (static member variable)

In the case of a `static float` member variable of a class, it seems we cannot follow CPP _Core Guideline C.48_ "Prefer in-class initializers ..." http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c48-prefer-in-class-initializers-to-member-initializers-in-constructors-for-constant-initializers (which doesn't really apply to static variables anyway).

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
