// https://stackoverflow.com/questions/17566575/how-to-initialize-a-static-const-float-in-a-c-class-in-visual-studio
#include "mylib.hpp"

const float MyLib::f = 3.14159;

MyLib::MyLib()
:g(2*3.14156)
{}