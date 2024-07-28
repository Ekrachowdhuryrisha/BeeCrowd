#include<bits/stdc++.h>
using namespace std;
int main(){
int h1,m1,h2,m2;
while(true){
    cin>>h1>>m1>>h2>>m2;
    if(h1==0 && m1==0 && h2==0 && m2==0)break;

    if(h1==0){
        h1=24*60+m1;
    }
    else{
    h1=h1*60+m1;
    }

    if(h2==0){
        h2=24*60+m2;
    }
    else{
    h2=h2*60+m2;
    }

    if(h1>h2){
        cout<<24*60 - (h1-h2)<<endl;
    }
    else cout<< h2-h1<<endl;
}

}
