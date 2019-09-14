#include<iostream>
using namespace std;
int main()
{
	int n,k,i,t,j,l,m,s,p,c;c=0;
	int arr[n],a[t];
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>n>>k;
		for(j=0;j<n;j++)
		cin>>arr[j];
		for(l=0;l<n-1;l++)
		{
			for(m=0;m<n-1-l;m++)
			{
				if (arr[m]>arr[m+1])
				{
					s=arr[m];
					arr[m]=arr[m+1];
					arr[m+1]=s;
				}
			}
		}
		a[c++]=arr[(n+k)/2];
	}
	for(p=0;p<t;p++)
	cout<<a[p]<<endl;
	return 0;
}
	

