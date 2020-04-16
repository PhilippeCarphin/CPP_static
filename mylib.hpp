// https://stackoverflow.com/questions/17566575/how-to-initialize-a-static-const-float-in-a-c-class-in-visual-studio
class MyLib
{
    public:
    static const float f;
    float g;
    float e = 2.71828; // Note: This produces a warning if we are not using C++11.
    MyLib();
};