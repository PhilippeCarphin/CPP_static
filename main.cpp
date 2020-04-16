// https://stackoverflow.com/questions/17566575/how-to-initialize-a-static-const-float-in-a-c-class-in-visual-studio

#include <iostream>
#include "mylib.hpp"

int main(int argc, char **argv)
{
    std::cout << "(static const)             MyLib::pi = " << MyLib::pi << std::endl;
    MyLib my_lib;
    std::cout << "(in-class initialized)      my_lib.e = " << my_lib.e << std::endl;
    std::cout << "(constructor initialized) my_lib.tau = " << my_lib.tau << std::endl;
}