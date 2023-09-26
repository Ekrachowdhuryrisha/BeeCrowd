#include<bits/stdc++.h>
using namespace std;
int main()
{

    double a, b, c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(1);
    if(a+b>c && b+c>a && a+c>b)
    {
        double   perimetre = a+b+c;
        cout<<"Perimetro = "<<perimetre<<endl;
    }
    else
    {

        double area= ((a+b)*c)/2;
        cout<<"Area = "<<area<<endl;
    }

    return 0;
}
