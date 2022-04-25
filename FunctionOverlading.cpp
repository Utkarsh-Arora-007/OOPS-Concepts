// In C++ polymorphism is mainly divided into two types:

// Compile time Polymorphism
// Runtime Polymorphism

//Function Overloading

#include <bits/stdc++.h>

using namespace std;
class Geeks{

    public:
    void func(int x)
    {
        cout<<"value of x is "<<x<<endl;
    }

    void func(double x)
    {
        cout<<"value of x is "<<x<<endl;
    }

    void func(int x, int y)
    {

        cout<<"value of x and y is "<<x<<", "<<y<<endl; 

    }
};

int main(){

    Geeks obj1;

    //Which function is called will depend on the parameters passed
    // The First 'func' is called

    obj1.func(7);
    //The Second 'func' is called
    obj1.func(9.132);
    //The third 'func' is called

    obj1.func(85,64);
    return 0;

}
