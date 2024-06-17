#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int i;
    int so = 0, se = 0;
    int ce = 0, co = 0;
    cout << "Enter the number" << endl;
    for(i=0; i<5; i++)
    {
        cin >> a[i];
        if(a[i] % 2 == 0)
        {
            se += a[i];
            ce++;
        }
        else
        {
            so += a[i];
            co++;
        }
    }
    cout << "Sum of even number is " << se << endl;
    cout << "Sum of odd number is " << so << endl;
    cout << "Count of even number is " << ce << endl;
    cout << "Count of odd number is " << co << endl; 
}