#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int A[n], B[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }

    int C[2 * n];

    for (int i = 0; i < n; i++)
    {
        cout << B[i];
    }

    int k = 0;
    for (int i = n; i < 2 * n; i++)
    {
        C[i] = A[k];
        k++;
    }

    for(int i = 0; i < 2 * n; i++)
    {
        cout << C[i] << " ";
    }
}