# include<iostream>
using namespace std;
int main()
{
	long double s,avg,sum;
	int n,k,i,j;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n;i++)
	sum=sum+arr[i];
	avg=sum/(n);
	for(i=0;i<=(n-k);i++)
	{
		s=0.0;
		for(j=i;j<(i+3);j++)
		s=s+arr[j];
		s=s/(k);
		if(s>avg)
		avg=s;

	}
	cout<<avg;
	return 0;
}
