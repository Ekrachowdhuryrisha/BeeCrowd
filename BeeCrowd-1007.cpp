#include<bits/stdc++.h>
using namespace std;
int main ()
{
    char  A[100];
    cin>>A;

    double B,C;
    cin>>B>>C;

    double TOTAL=B+(C*15)/100;

    cout<<fixed<<setprecision(2);

    cout<<"TOTAL = R$ "<<TOTAL<<endl;

    return 0;
}
