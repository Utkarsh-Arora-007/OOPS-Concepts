#include <iostream>
using namespace std;
  
class implementAbstraction
{
    private:
        int a, b;
  
    public:
      
        // method to set values of 
        // private members
        void set(int x, int y)
        {
            a = x;
            b = y;
        }
          
        void display()
        {
            cout<<"a = " <<a << endl;
            cout<<"b = " << b << endl;
        }
};
  
int main() 
{
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}


// Advantages of Data Abstraction:

// Helps the user to avoid writing the low level code
// Avoids code duplication and increases reusability.
// Can change internal implementation of class independently without affecting the user.
// Helps to increase security of an application or program as only important details are provided to the user.