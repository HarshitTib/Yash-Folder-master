#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int i;
    int sum = 0;
    cout << "Enter the number" << endl;
    for(i=0; i<5; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<5; i++)
    {
        sum = sum + a[i];
    }
    cout << "Sum of all the number is " << sum << endl;
}