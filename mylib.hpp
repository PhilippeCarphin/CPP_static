// https://stackoverflow.com/questions/17566575/how-to-initialize-a-static-const-float-in-a-c-class-in-visual-studio
class MyLib
{
    public:
    static const float pi;
    float tau;
    float e = 2.71828;
    // Note: This produces a warning if we are not using C++11.
    // In file included from /Users/pcarphin/Documents/GitHub/CPP_static/main.cpp:4:
    // /Users/pcarphin/Documents/GitHub/CPP_static/mylib.hpp:7:13: warning: in-class initialization of non-static data member is a C++11 extension
    //       [-Wc++11-extensions]
    //     float e = 2.71828; // Note: This produces a warning if we are not using C++11.
    //             ^
    MyLib();
};