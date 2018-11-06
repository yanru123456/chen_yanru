#include<iostream>
using namespace std;
class salesman
{
public:
    double base_pay = 200;
    double wages;
    double selling_profit(double n)
    {
        double A = n * 0.09;
        wages = base_pay + A;
        return wages;
    }
};
int main()
{
    while(1)
    {
        double reward;
        cout<<"Enter sales in dollars (-1 to end):";
        cin>>reward;
        if(reward != -1)
        {
            salesman AN;
            AN.selling_profit(reward);

            cout<<"Salary is: $"<<AN.wages<<endl;
        }
    }
    while(1);
    return 0;
}
