#include<iostream>
using namespace std;
int main() {
    int i, a[5], f = 0, k, sum =0;
    cout << "Enter five number " << endl;
    for (i=0; i<5; i++)
    {
        cin >> a[i];
    }

    for (i=0; i<5; i++) {
        cout << "Factor of " << a[i] << " are : " << endl;
        for (k = 1; k<=a[i] ; k++) {
            if(a[i] % k == 0) {
                cout << k << endl;
            }
        }
    }
}