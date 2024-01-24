//  In this program i make an interest calculating system 
//  In this program i dynamically initialize the objects.

#include<iostream>
using namespace std;
class interest {
    private:
        int investment, years;
        float interestrate, total_amount, profit;
    public:
        interest () {}
        interest(int investment_t,int years_t,int interestrate_t)
        {
            investment = investment_t;
            years = years_t;
            interestrate = float(interestrate_t)/100;
            for(int i=0;i<years_t;i++)
            {
                total_amount = (investment_t * interestrate) + investment_t;
                investment_t = total_amount;
            }
            profit = total_amount - investment;
        }
        interest(int investment_t,int years_t,float interestrate_t)
        {
            investment = investment_t;
            years = years_t;
            interestrate = interestrate_t;
            for(int i=0;i<years_t;i++)
            {
                total_amount = (investment_t * interestrate) + investment_t;
                investment_t = total_amount;
            }
            profit = total_amount - investment;
        }

        void printdata()
        {
            cout<<"Investement is : "<<investment<<endl;
            cout<<"Years are : "<<years<<endl;
            cout<<"Interest Rate is : "<<interestrate<<endl;
            cout<<"Total amount is : "<<total_amount<<endl;
            cout<<"Profit is : "<<profit<<endl<<endl;
        }   
};
int main()
{
    interest obj1,obj2,obj3;
    float R;
    int i,y,r;

    cout<<"Enter the value of investement , years and interest rate respectively : ";
    cin>>i>>y>>r;
    obj1 = interest(i,y,r);

    cout<<"Enter the value of investement , years and interest rate respectively : ";
    cin>>i>>y>>R;
    obj2 = interest(i,y,R);

    obj1.printdata();
    obj2.printdata();
    obj3.printdata(); // print garbage value
    
    return 0;
}