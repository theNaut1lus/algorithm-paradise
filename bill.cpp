#include<iostream>
using namespace std;
int main()
{
    char a[30];
    float u, r, x;
    cout<<"Enter the name of the customer and the units consumed: ";
    cin>>a>>u;
    if(u<=100)
    {
        r=50+(u*0.60);
        cout<<"\nBill to the customer is "<<r<<"\n";
    }
    else if(u>100 && u<=300)
    {
        r=50+(100*0.60)+(u-100)*0.80;
        cout<<"\nBill to the customer is "<<r<<"\n";
    }
    else if(u>300)
    {
        r=50+(100*0.60)+(200*0.80)+((u-300)*0.90);
        cout<<"\nBill to the customer is "<<r<<"\n";
    }
    else(r>300);
    {
        r=50+(100*0.60)+(200*0.80)+((u-300)*0.90);
        x=r+((r*15.0)/100);
        cout<<"\nBill to the customer is "<<x<<"\n";
    }
    return(0);
}
