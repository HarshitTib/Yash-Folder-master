#include<iostream>
using namespace std;
int main() {
    int i, a[5], f = 0, k, sum =0;
    cout << "Enter five number " << endl;
    for (i=0; i<5; i++)
    {
        cin >> a[i];
    }
    cout << "Perfect number : " << endl;
    for (i=0; i<5; i++) {
        for (k = 1; k<a[i]; k++) {
            if(a[i] % k == 0) {
                sum += k;
            }
        }
        if(sum == a[i]) {
            cout << a[i] << endl;
        }
        sum = 0;
    }
}