#include<iostream>
using namespace std;
int main()
{
	int y,a,b,c;c=0;
	cin>>y;
	for(b=1;b<=700;b++)
	{
		for(a=1;a^2<=(y-b);a++)
		c++;
		
	}
	cout<<c;
	return 0;

	}
