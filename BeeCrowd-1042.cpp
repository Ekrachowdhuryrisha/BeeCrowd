#include<bits/stdc++.h>
using namespace std;
int main(){
signed int x,y,z,temp;
    int A[3];

    cin >> x >> y >> z;
    A[0] = x;
    A[1] = y;
    A[2] = z;

    for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                    if(A[i] < A[j]){
                            temp = A[j];
                            A[j] = A[i];
                            A[i] = temp;
                    }
            }
    }

    cout << A[0] << endl << A[1] << endl << A[2] << endl << endl;
    cout << x << endl << y << endl << z << endl;
return 0;
}
