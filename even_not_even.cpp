#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int i;
    int flag = 0;
    cout << "Enter the number" << endl;
    for(i=0; i<5; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<5; i++)
    {
        if(a[i] % 2 != 0)
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        cout << "All number are not even" << endl;
    }
    else
    {
        cout << "All number are even" << endl;
    }
        
}

// 5 5 5 5 5

// a[0]