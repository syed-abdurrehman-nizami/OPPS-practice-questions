// In this program i make class of shop and make 3 objects of shop class and
// take items detail from user and print it on user choice.

#include <iostream>
using namespace std;
class shop
{
private:
    string name[1000];
    int price[1000];
    int count;

public:
    void counter(void) { count = 0; }
    void setitem(void);
    void display(void);
};
void shop ::setitem(void)
{
    cout << "Enter name of item : ";
    cin >> name[count];
    cout << "Enter price of item : ";
    cin >> price[count];
    cout << endl;
    count++;
}
void shop ::display(void)
{
    for (int i = 0; i < count; i++)
    {
        cout << "Name of item is : " << name[i] << " and price is : " << price[i] << endl;
    }
}
int main()
{
    shop punjab_store;
    shop ideal_store;
    shop subhan_store;
    int n;

    punjab_store.counter();
    cout << "Enter how many items you want to store in punjab store : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        punjab_store.setitem();
    }

    ideal_store.counter();
    cout << "Enter how many items you want to store in ideal store : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ideal_store.setitem();
    }

    subhan_store.counter();
    cout << "Enter how many items you want to store in subhan store : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        subhan_store.setitem();
    }

A:
    string choice;
    cout << endl
         << "Enter which store you want to display : ";
    cin >> choice;

    if (choice == "punjab")
    {
        punjab_store.display();
    }
    else if (choice == "ideal")
    {
        ideal_store.display();
    }
    else if (choice == "subhan")
    {
        subhan_store.display();
    }
    else
    {
        cout << "Invalaid store." << endl;
        goto A;
    }
    goto A;

    return 0;
}