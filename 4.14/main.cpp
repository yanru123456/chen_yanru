#include<iostream>
using namespace std;
class card
{
public:
    int Account;
    double beginning_balance;
    double total_charges;
    double total_credits;
    double credits_limit;
    void init(int A, double B, double C, double D, double E)
    {Account = A;
    beginning_balance = B;
    total_charges = C;
    total_credits = D;
    credits_limit = E;
    }

    double balance()

    {

        double new_balance = beginning_balance + total_charges - total_credits;
        return new_balance;
    }
};

int main()
{
    card AN;
    while(1)
    {
        double E, D, C, B;int A;
        cout<<"Enter account number:";
        cin>>A;
        cout<<"Enter beginning balance:";
        cin >>B;
        cout<<"Enter total charges:";
        cin >>C;
        cout<<"Enter total credits:";
        cin >>D ;
        cout<<"Enter credit limit:";
        cin >>E;

        AN.init(A, B, C, D, E);
        cout<<"Enter balance is :";
        cout<<AN.balance()<<endl;
        cout<<"Account:"<<"\t"<< AN.Account<<endl;
        cout<<"Credit limit:"<<"\t"<<AN.credits_limit<<endl;
        cout<<"Balance:"<<"\t"<<AN.balance()<<endl;
        if(AN.balance() > AN.credits_limit)
        {
            cout<<"Credit Limit Exceeded"<<endl<<endl<<endl;
        }
    }

while(1);
return 0;
}
