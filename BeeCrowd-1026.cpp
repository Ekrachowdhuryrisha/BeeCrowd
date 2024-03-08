#include<bits/stdc++.h>
using namespace std;
int main()
{

    unsigned long long int a,b;

    while(cin>>a>>b)
    {
        unsigned long long int sum = a^b;
        cout<<sum<<endl;
    }
    return 0;
}
