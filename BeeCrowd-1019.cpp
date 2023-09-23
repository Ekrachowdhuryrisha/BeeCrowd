#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int hour= N/3600;
    int t= N%3600;
    int minute= t/60;
    int second=  t%60;

    cout<<hour<<":"<<minute<<":"<<second<<endl;

    return 0;
}

