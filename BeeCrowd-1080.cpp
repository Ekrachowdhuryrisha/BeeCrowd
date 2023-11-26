#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j=0,loc=0,n;
	for(i=1;i<=100;i++)
	{
		cin>>n;
		if(n>j)
		{
			j=n;
			loc=i;
		}
	}
	cout<<j<<endl<<loc<<endl;

	return 0;
}

