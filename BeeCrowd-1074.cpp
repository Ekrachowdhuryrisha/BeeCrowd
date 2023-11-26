#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,x;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>x;
        if(x==0)
            cout<<"NULL"<<endl;
        if(x%2==0 && x>0)
            cout<<"EVEN POSITIVE"<<endl;
        if(x%2==0 && x<0)
            cout<<"EVEN NEGATIVE"<<endl;
        if(x%2==1 && x>0)
            cout<<"ODD POSITIVE"<<endl;
        if(x%2==-1 && x<0)
            cout<<"ODD NEGATIVE"<<endl;
    }
    return 0;
}
