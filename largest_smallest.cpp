#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int a[5];
    int i;
    int l = 0, s = INT_MAX;
    cout << s+1 << endl;
    cout << "Enter the number" << endl;
    for(i=0; i<5; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<5; i++)
    {
        if(a[i] > l)
        {
            l = a[i];
        }
        if(a[i] < s)
        {
            s = a[i];
        }
    }
    cout << "Largest number : " << l << endl;
    cout << "Smallest number: " << s << endl;
}