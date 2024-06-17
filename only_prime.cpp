#include<iostream>
using namespace std;
int main() {
    int i, a[5], f = 0, k;
    cout << "Enter five number " << endl;
    for (i=0; i<5; i++)
    {
        cin >> a[i];
    }
    cout << "Prime numbers are: " << endl;
    for (i=0; i<5; i++) {
        for (k=1; k<=a[i]; k++) {
            if(a[i]%k == 0) {
                f++;
            }
        }
        if(f == 2) {
            cout << a[i] << endl;
        }
        f = 0;
    }

}