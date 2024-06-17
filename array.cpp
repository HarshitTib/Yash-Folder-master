#include<iostream>
using namespace std;
int main()
{
                // 0, 1, 2, 3,  4
    int a[5] = {2, 4, 6, 10, 13};
    a[2] = 8;
    cout << a[2] << endl;
    cout << a[4] << endl; // Array index out of bound
    

}