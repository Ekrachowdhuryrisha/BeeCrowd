#include<bits/stdc++.h>
using namespace std;
int main()
{
    int time, speed;
    cin>>time>>speed;
    float fuel=(float)(time*speed)/12;
    cout<<fixed<<setprecision(3);
    cout<<fuel<<endl;
    return 0;
}

