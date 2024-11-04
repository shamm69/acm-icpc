#include <bits/stdc++.h>
using namespace std;

int staircase ( int n)
{
     for(int i=n; i>0;i--){
        for(int j=0;j<i-1;++j)
        {
            cout << " ";
        }
        for(int k=i-1;k<n;k++){
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}

int main (){
    int n;
    cin >> n;
    staircase(n);
    return 0;
}
