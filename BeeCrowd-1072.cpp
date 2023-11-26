#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,input,in=0,out=0;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>input;

       if(input>=10 && input<=20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
    return 0;
}
