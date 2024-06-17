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
    for(i=4; i>=0; i--)
    {
        cout << a[i] << endl;
    }
}