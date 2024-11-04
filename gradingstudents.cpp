#include<bits/stdc++.h>
using namespace std;

int gradingStudents (int grades[], int size)
{
    for (int i=0;i<size;i++)
    {   
        if (grades[i]<38)
        cout << grades [i] << "\n";
        else if (grades[i]>=38)
        {
        if (grades[i]%5==3 || grades[i]%5==4)
        {
        grades[i] = (grades[i]/5) *5+5;
        cout << grades[i] << "\n";
        }
        else 
        cout << grades [i] << "\n";
        }
       
    }
    return 0;
}



int main()
{
        int n;
        cin >> n;
        int grades[n];
        for (int j=0;j<n;j++)
        cin >> grades[j];
        gradingStudents(grades,n);
        return 0;
}

