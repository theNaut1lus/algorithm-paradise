#include<iostream>
using namespace std;
main()
{
    long int m, h, t, x, s;
    cout<<"Enter the time in seconds: ";
    cin>>t;
    h=t/3600;
    x=t%3600;
    m=x/60;
    s=x%60;
    cout<<"\nTime in hours, minutes ans seconds is "<<h<<"hours "<<m<<"mins "<<s<<"sec"<<"\n";
    return(0);
}
