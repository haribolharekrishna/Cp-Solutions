
#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
long long int a,b,n;int t,i,c;c=0;
cin>>t;
int res[t];
while(t--)
{
    cin>>a>>b>>n;
    if(a==b)
    res[c++]=0;
   else if(n%2==0)
    {
        if(abs(a)>abs(b))
            res[c++]=1;
        else
          res[c++]=2;
    }
    else{
        if(a>b)
         res[c++]=1;
    else
        res[c++]=2;
    }
}
for(i=0;i<t;i++)
    cout<<res[i]<<endl;
    return 0;
}
