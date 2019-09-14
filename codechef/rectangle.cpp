#include<iostream>
using namespace std;
int main()
{
	int t,n,i,j,k,l,a,b,c,d;
	k=0;
    cin>>t;
    if((t<1)||(t>1000))
    return 0;
	n=t*4;
	int arr[n];
	int res[t];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		if((arr[i]<1)||(arr[i]>10000))
		return 0;
		
	}
	for(j=0;j<n;j=j+4)
	{
		a=arr[j];b=arr[j+1];c=arr[j+2];d=arr[j+3];
		if(a==b)
		{
			if(c==d)
			res[k++]=1;
			else
			res[k++]=0;
			
		}
		else
		{
			if((c==a)||(c==b))
			{
				if((d!=c)&&((d==a)||(d==b)))
				res[k++]=1;
				else
				res[k++]=0;
			
			}
				else
				res[k++]=0;
					}		}

    for(l=0;l<t;l++)
	{
		if(res[l]==1)
		cout<<"YES"<<endl;
		else if(res[l]==0)
		cout<<"NO"<<endl;
		
						}					
	}
