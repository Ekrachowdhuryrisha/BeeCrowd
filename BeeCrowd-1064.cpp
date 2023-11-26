#include<bits/stdc++.h>
using namespace std;
main()
{
	float n;
	int i, po = 0;
	float sum = 0;

	for(i = 1; i <= 6; i++){
		cin>>n;

		if(n>0){
			sum = sum + n;
			po = po + 1;
		}
	}
	cout<<po<<" valores positivos"<<endl;
	cout<<setprecision(2)<<sum/po<<endl;

}

