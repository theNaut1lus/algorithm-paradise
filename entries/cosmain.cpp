#include<iostream>
#include<math.h>
using namespace std;
main()
{
    float x,n,i,j,k,t=0,flag;
    cout<<"enter the value of x";
    cin>>x;
    cout<<"enter the number of terms";
    cin>>n;
    x=x*3.14/180;
    for(i=1;i<=n;i++)
    {
        flag=1;
        for(j=2*i;j>=1;j--)
        {
            flag=flag*j;
        }
        t=(pow((-1),i)*pow(x,2*i))/flag + t;
    }
    k=1+t;
    cout<<"value of cos series is :"<<k;
}
