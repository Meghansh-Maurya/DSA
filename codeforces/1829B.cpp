// https://codeforces.com/problemset/problem/1829/B

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int num;

        int max_z = 0;

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> num;

            if (num == 0)
            {
                count++;
                max_z = max(max_z, count);
            }
            else
                count = 0;
        }

        cout << max_z << endl;
    }

    return 0;
}