#include <bits/stdc++.h>
using namespace std;

int simpleArraySum(int ar[], int size)
{
    int sum = 0;
    for (int i=0;i<size;i++)
    {
      sum = sum + ar[i];
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int j=0;j<n;j++)
    {
        cin >> ar[j];
    }
    int s = simpleArraySum(ar,n);
    cout << s;
    return 0;
}
