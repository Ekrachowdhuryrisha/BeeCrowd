#include<bits/stdc++.h>
using namespace std;


int main () {

  int n, x, y, i;
  float r = 0;
  cin>>n;


  for (i = 0; i < n; i++)
  {
cin>>x>>y;
    if (y == 0)
    {

    cout<<"divisao impossivel"<<endl;

    }
    else
    {

      r = (x*1.0)/(y);
      printf("%.1f\n", r);

    }
  }
}
