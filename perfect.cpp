#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout << "Enter 5 numbers: ";
    int i, larg = 0, j;
    int sum = 0;
    for(i=0;i<5;i++)
    {
        cin >> a[i];
    }
    for(i=0; i<5; i++)
    {
        for(j=1; j<a[i]; j++) 
        {
            if(a[i] % j == 0)
            {
                sum += j;
            }
        }
        if(sum == a[i]) {
            if(a[i] > larg) 
            {
                larg = a[i];
            }
        }
        sum = 0;
    }
    if(larg == 0) 
    {
        cout << "No perfect number" << endl;
    }
    else
    {
        cout << "Largest perfect number = " << larg << endl;
    }
}