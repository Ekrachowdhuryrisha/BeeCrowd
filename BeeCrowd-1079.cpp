#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	float i,a,b,c,average;
	cin>>test;
	for(i=1;i<=test;i++)
	{
		cin>>a>>b>>c;
		average=(a*2.0+b*3.0+c*5.0)/10;
		cout<<setprecision(1)<<fixed;
		cout<<average<<endl;
	}

	return 0;
}
