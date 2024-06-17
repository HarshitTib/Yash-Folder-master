#include<iostream>
using namespace std;
int main() 
{
    int a[5];
    int i, sum = 0, bk, d;
    cout << "Enter five number" << endl;
    for (i=0; i<5; i++){
        cin >> a[i];
    }
    for(i=0; i<5; i++) {
        bk = a[i];
        while(a[i]!=0) {
            d = a[i] % 10;
            sum += d;
            a[i] = a[i] / 10;
        }
        cout << "Sum of the digit of " << bk << " is " << sum << endl;
        sum = 0;
    }
}

// 123

// 1 + 2 + 3