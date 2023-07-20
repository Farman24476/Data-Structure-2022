#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Sort the array in ascending order
    sort(a, a + n);

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n - 1;

        // Binary search
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = true;
                break;
            }
            else if (a[mid] < x)
            {
                l = mid + 1; // Move to the right half
            }
            else
            {
                r = mid - 1; // Move to the left half
            }
        }

        if (flag == true)
            cout << "Found" << endl;
        else
            cout << "Not found" << endl;
    }

    return 0;
}
