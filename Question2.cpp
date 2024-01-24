// In this program i make 2 classes and swap the values of private
// variables of classes by using friend function concept.

#include <iostream>
using namespace std;
class two;
class one
{
private:
    int n1;

public:
    friend void swap(one &, two &);
    //    friend void swap(one &x, two &y);  // doing same working with this line

    void setdata(int a)
    {
        n1 = a;
    }
    void getdata()
    {
        cout << n1 << endl;
    }
};
class two
{
private:
    int n2;

public:
    friend void swap(one &, two &);
    //    friend void swap(one &x, two &y);  // doing same working with this line

    void setdata(int a)
    {
        n2 = a;
    }
    void getdata()
    {
        cout << n2 << endl;
    }
};
void swap(one &x, two &y)
{
    int t = x.n1;
    x.n1 = y.n2;
    y.n2 = t;
}

int main()
{
    one obj1;
    two obj2;

    obj1.setdata(10);
    obj2.setdata(20);

    cout << "First value : ";
    obj1.getdata();
    cout << "Second value : ";
    obj2.getdata();

    swap(obj1, obj2);

    cout << "First value : ";
    obj1.getdata();
    cout << "Second value : ";
    obj2.getdata();

    return 0;
}