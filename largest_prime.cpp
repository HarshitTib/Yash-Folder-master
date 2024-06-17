#include<iostream>
using namespace std;
int main() {
    int i, a[5], f = 0, k, l = 0;
    int count = 0;
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
            if(a[i] > l) {
                l = a[i];
                count = 1;
            }
        }
        f = 0;
    }
    if(count == 0) {
        cout << "No prime number available" << endl;
    }
    else {
        cout << "Largest prime number " << l << endl;
    }

}