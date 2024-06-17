#include<iostream>
using namespace std;
int main() {
    int i, a[5], s1 = 0, s2 = 0;
    cout << "Enter the number" << endl;
    for(i = 0; i<5; i++) {
        cin >> a[i];
        if(a[i] > 0) {
            s1 += a[i];
        }
        else {
            s2 += a[i];
        }
    }
    cout << "Sum of positive number : " << s1 << endl;
    cout << "Sum of neggative number : " << s2;
}