// In this program i make an examples of cosntructor, default constructor,
// copy constructor and destructor

#include <iostream>
using namespace std;
class student
{
private:
    string name;

public:
    student() { cout << "DC" << endl; } // default constructor
    student(string n);                  // parameterized constructor
    student(student &obj);              // copy constructor
    ~student() { cout << "D" << endl; } // destructor

    void print()
    {
        cout << name << endl;
    }
};
student ::student(string n)
{
    cout << "PC" << endl;
    name = n;
}
student ::student(student &obj)
{
    cout << "CC" << endl;
    name = obj.name;
}
int main()
{
    student c;
    student a("hamza");
    student b("tayyab");
    c = a;         // default copy constructor called
    student d = b; // copy constructor called
    student e(b);  // copy constructor called

    a.print();
    b.print();
    c.print();
    d.print();
    e.print();

    return 0;
}