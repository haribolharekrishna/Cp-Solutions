#include<iostream>
using namespace std;
int main()
{
	int i,n,l,k,j,t;
	cin>>t;
	char old[100][5];
	char newph[50][5];
	while(t--)
	{
		cin>>n>>k;int res[n];
		for(i=0;i<n;i++)res[i]=0;
		for(i=0;i<n;i++)
		cin>>old[i];
		while(k--)
		{
			cin>>l;
			for(i=0;i<l;i++)
			cin>>newph[i];
			for(i=0;i<n;i++)
			{
				for(j=0;j<l;j++)
				if(old[i]==newph[j]){
				res[i]=1;
				break;}
			}
		}
		for(i=0;i<n;i++){
		if(res[i]==1)
		cout<<"YES ";
		else if(res[i]==0)
		cout<<"NO ";}
		cout<<endl;
			}
			return 0;
}
