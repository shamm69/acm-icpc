#include <bits/stdc++.h>
using namespace std;
int miniMaxSum ( int arr[5])
{   
     long sum1 =0,min,max[5];
    for (int x=0;x<5;x++)
    {
    sum1 = sum1 + arr[x];
    }
    for (int i=0;i<5;i++)
    {   
        long min1 =0,max1=0;
        for (int j=0;j<5;j++)
        {
         min1 = min1+ arr[j];
         max1 = max1 + arr[j];
        }
        min = min1 - arr[i];
        max[i] = max1 - arr[i];
        if (min < sum1 )
        sum1 = min;
    }
    long max2 = max[0];
    for (int k =0 ; k<5;k++)
    {
        if (max[k]>max2)
        max2 = max[k];
    }
    cout << sum1 << " " << max2;
    return 0;
    }

int main ()
{   
    int arr[5];
    for (int x=0;x<5;x++)
    {
    cin >> arr[x];
    }
    miniMaxSum(arr);
    return 0;
}
