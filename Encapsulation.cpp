#include<iostream>
using namespace std;

class Encapsulation
{
    private:
    int x;

    public:

    void set(int a)
    {
        x=a;

    }

    int get()
    {
        return x;
    }
};

int main()
{
    Encapsulation obj;
    obj.set(5);
    cout<<obj.get();
    return 0;
}

// As we have seen in above example, access specifiers plays an important role in implementing encapsulation in C++. The process of implementing encapsulation can be sub-divided into two steps:

// 1. The data members should be labeled as private using the private access specifiers
// 2. The member function which manipulates the data members should be labeled as public using the public access specifier