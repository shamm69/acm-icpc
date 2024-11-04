#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(int candles[],int size)
{
    int max = candles[0];
    int c=0;
    for(int i =0;i<size;i++)
    {
        if(candles[i]> max)
        max = candles[i];
    }
    for (int j=0;j<size;j++)
    {
        if(max==candles[j])
        c++;
    }
    return c;
}

int main()
{
    int n;
    cin >>n;
    int candles[n];
    for(int k=0;k<n;k++)
    cin >> candles[k];
    int r = birthdayCakeCandles(candles,n);
    cout << r;
    return 0;
}
