#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n1, n2, n3, n4, n5;
    cin>>n1>>n2>>n3>>n4>>n5;
    cout<<fixed<<setprecision(1);
    double sum1=(n1*2)+(n2*3)+(n3*4)+(n4*1);
    double avg1=sum1/(2+3+4+1);
    cout<<"Media: "<<avg1<<endl;
    if(avg1>=7)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if(avg1<5)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    else if(avg1>=5 && avg1<=6.9){

    cout<<"Aluno em exame."<<endl;

    cout<<"Nota do exame: "<<n5<<endl;
    double avg2=(avg1+n5)/2;
    if(avg2>=5.0){
        cout<<"Aluno aprovado."<<endl;
    }
    else if(avg2<=4.9){
        cout<<"Aluno reprovado."<<endl;
    }

    cout<<"Media final: "<<avg2<<endl;
    }

    return 0;
}
