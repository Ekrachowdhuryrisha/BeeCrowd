#include<bits/stdc++.h>
using namespace std;
int main()
{
	 float i,j;
	 int a,b;

	 for(i=0.0;i<2.1;i=i+0.2)
	 {
	 	for(j=1;j<=3.0;j++)
		{
			if(i>0 && i<1 || i>1 && i<2 )
			{
			    cout<<setprecision(1)<<fixed;
			    cout<<"I="<<i<<" J="<<i+j<<endl;
			}
			else
			{
				a=i;
				b=i+j;
				cout<<"I="<<a<<" J="<<b<<endl;
			}
		}
	 }
	 return 0;
}
