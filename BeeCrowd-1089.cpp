#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i, count;

    while(true)
    {
       cin>>n;
       if(n==0)break;

        int a[n];
        for( int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        count=0;
        for(int i=1; i<n-1; i++)
        {
            if(a[i]>a[i+1] && a[i]>a[i-1])
            {
                count++;
            }
            else if(a[i]<a[i+1] && a[i]<a[i-1])
            {
                count++;
            }
        }

        if(a[0]>a[1] && a[0]>a[n-1])
        {
            count++;
        }
        else if(a[0]<a[1] && a[0]<a[n-1])
        {
            count++;
        }


        if(a[n-1]>a[0] && a[n-1]>a[n-2])
        {
            count++;
        }
        else if(a[n-1]<a[0] && a[n-1]<a[n-2])
        {
            count++;
        }

        cout<<count<<endl;
    }

}
