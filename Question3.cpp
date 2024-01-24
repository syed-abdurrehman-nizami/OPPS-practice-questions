// In this program i make two classes and in each class there are
// two numbers (x and y cordinates) and i can find the distance
// between two points by distance formula.

#include <iostream>
using namespace std;
class CY;
class CX
{
private:
    int x1, y1;

public:
    friend int find_distance(CX, CY);
    CX(int, int);

    void printdata()
    {
        cout << "(" << x1 << "," << y1 << ")" << endl;
    }
};

class CY
{
private:
    int x2, y2;

public:
    friend int find_distance(CX, CY);
    CY(int, int);

    void printdata()
    {
        cout << "(" << x2 << "," << y2 << ")" << endl;
    }
};

CX ::CX(int a, int b)
{
    x1 = a;
    y1 = b;
}
CY ::CY(int a, int b)
{
    x2 = a;
    y2 = b;
}

int find_distance(CX o1, CY o2)
{
    int n1 = (o2.x2 - o1.x1), n2 = (o2.y2 - o1.y1);
    return (n1 * n1 + n2 * n2);
}

int main()
{
    CX a = CX(5, 6);
    CY b(10, 12); // line number 37 and 36 are two different syntax of
                  // initializing the objects but same working.

    cout << "First points : ";
    a.printdata();
    cout << "Second points : ";
    b.printdata();

    cout << "The distance between two points is : " << find_distance(a, b);

    return 0;
}