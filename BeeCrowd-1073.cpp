#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	for(i=2;i<=n;i+=2)
	{
		printf("%d^2 = %d\n",i,i*i);
	}
	return 0;
}
