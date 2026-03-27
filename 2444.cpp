#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int star = n - i;
            if (star == j)
            {
                for (int k = 0; k < (i + 1) * 2 - 1; k++)
                {
                    cout << "*";
                }
                break;
            }
            cout << " ";
        }
        cout << "\n";
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            int star = n - i;
            if (star == j)
            {
                for (int k = 0; k < (i + 1) * 2 - 1; k++)
                {
                    cout << "*";
                }
                break;
            }
            cout << " ";
        }
        cout << "\n";
    }
}