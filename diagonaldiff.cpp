#include <bits/stdc++.h>
//#define max 100
using namespace std;
int diagonalDifference(int arr[][100], int n)
{
    int sum1=0,sum2=0;
    for (int i=0; i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j)
            sum1 = sum1 + arr[i][j];
        }
        sum2 = sum2 + arr[i][n-(i+1)];
    }
    cout << abs(sum1-sum2);
    return 0;
}

int main (){
    int n;
    cin >>n;
    int arr[n][100];
    for ( int x=0;x<n;x++)
    {
        for (int y=0;y<n;y++)
        {
            cin >> arr[x][y];
        }
    }
    diagonalDifference(arr,n);
    return 0;
}
