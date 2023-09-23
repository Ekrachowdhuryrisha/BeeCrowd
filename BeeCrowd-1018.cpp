#include<bits/stdc++.h>
using namespace std;
int main()
{
    float N;
    cin>>N;
    int Hundred= N/100;
    int t=(int)N%100;
    int fifty= t/50;
    int r=t%50;
    int twenty=r/20;
    int s=r%20;
    int ten=s/10;
    int p= s%10;
    int five=p/5;
    int j =p%5;
    int two= j/2;
    int one=j%2;
    int a=one%1;


    cout<<"NOTAS:"<<endl;
    cout<<Hundred<<" nota(s) de R$ 100.00"<<endl;
    cout<<fifty<<" nota(s) de R$ 50.00"<<endl;
    cout<<twenty<<" nota(s) de R$ 20.00"<<endl;
    cout<<ten<<" nota(s) de R$ 10.00"<<endl;
    cout<<five<<" nota(s) de R$ 5.00"<<endl;
    cout<<two<<" nota(s) de R$ 2.00"<<endl;
    cout<<one<<" nota(s) de R$ 1.00"<<endl;

    return 0;
}
