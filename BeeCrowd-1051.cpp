#include <bits/stdc++.h>
using namespace std;

int main(){

    double sal,a,b,c;

    cin >> sal;
    a=(sal - 2000.00)*0.08;
    b= ((sal - 3000.00)*0.18 + 1000.00*0.08);
    c= ((sal - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08);

    cout<<fixed<<setprecision(2);
    if(sal <= 2000.00){
           cout << "Isento"<<endl;
    }else if (sal >= 2000.01 && sal <= 3000.00){
          cout<<"R$ "<<a<<endl;
    }else if (sal >= 3000.01 && sal <= 4500.00){
          cout<<"R$ "<< b<<endl;
    }else if (sal >= 4500.01){
          cout<<"R$ "<< c<<endl;
    }
    return 0;
}
