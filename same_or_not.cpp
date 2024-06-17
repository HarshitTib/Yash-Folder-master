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
        if(a[0] != a[i])
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        cout << "All number are not same" << endl;
    }
    else
    {
        cout << "All number are same" << endl;
    }
        
}

// 5 5 5 5 5

// a[0]