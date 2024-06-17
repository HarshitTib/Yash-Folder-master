#include <iostream>
using namespace std;
void prime_number(int n) // function definition
{
    int i;
    int c = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }
    if (c == 2)
    {
        cout << "The given number " << n << " is a prime number" << endl;
    }
    else
    {
        cout << "Not a prime number" << endl;
    }
}
void perfect_number(int a)
{
    int i;
    int sum = 0;
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sum += i;
        }
    }
    if (sum == a)
    {
        cout << a << " is a perfect number" << endl;
    }
    else
    {
        cout << a << " is not a perfect number" << endl;
    }
}
int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    prime_number(n);
    perfect_number(n);
}
