#include <bits/stdc++.h>

using namespace std;

int compareTriplets ( int a[], int b[])
{
    int al=0,bo=0;
    for (int x=0;x<3;x++)
    {
        if (a[x]> b[x])
        al++;
        else if(a[x]<b[x])
        bo++;
    }
    cout << al << " " << bo;
    return 0;
}

int main (){
    int a[3],b[3];
    cin >> a[0] >> a[1]>>a[2];
    cin >> b[0]>> b[1]>>b[2];
    compareTriplets(a,b);
    return 0;
}
