#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "ENter the value for n: ";
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        if (n % i == 0)
        {
            if (n == i)
            {
                cout << "Prime number";
            }
            if (n == 0 || n == 1)
            {
                cout << "not prime";
                break;
            }
        }
    }
    return 0;
}