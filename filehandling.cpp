#include <iostream>
using namespace std;

class demo
{
    public:
    virtual void display()
    {
        cout << "Base class" << endl;
    }
};

class derived : public demo
{
    public:
    void display() override // Using override for clarity
    {
        cout << "Derived class" << endl;
    }
};

int main()
{
    demo* ptr; // Pointer of type demo
    derived d; // Create an object of derived class
    ptr = &d;  // Point to the derived class object

    ptr->display(); // Call the display function

    return 0;
}