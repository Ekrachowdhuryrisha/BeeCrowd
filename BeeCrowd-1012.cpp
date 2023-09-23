#include<bits/stdc++.h>
using namespace std;
int main(){
double A,B,C;
cin>>A>>B>>C;
double TRIANGULO =(A*C)/2;
double CIRCULO = 3.14159*(C*C);
double TRAPEZIO = ((A+B)/2)*C;
double QUADRADO = (B*B);
double RETANGULO = A*B;
cout<<setprecision(3)<<fixed;
cout<<"TRIANGULO: "<<TRIANGULO<<endl<<"CIRCULO: "<<CIRCULO<<endl<<"TRAPEZIO: "<<TRAPEZIO<<endl<<"QUADRADO: "<<QUADRADO<<endl<<"RETANGULO: "<<RETANGULO<<endl;
return 0;
}
