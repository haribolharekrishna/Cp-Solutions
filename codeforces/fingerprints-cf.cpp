#include <iostream>

using namespace std;

int fingerpr()
{
    int n,m,t,i,j;t=0;
    cin>>n>>m;
    int a[n],b[m];int c[10];
    for(i=0;i<n;i++)
        cin>>a[i];
        for(j=0;j<m;j++)
            cin>>b[j];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                if(a[i]==b[j])
                c[t++]=a[i];
        }
        for(i=0;i<t;i++)
            cout<<c[i]<<" ";
        return 0;
}
