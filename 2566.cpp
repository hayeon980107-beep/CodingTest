#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int result= 0, ri = 0, rj = 0;
    for (int i = 0; i < 9;i++) {
        for (int j = 0; j < 9;j++) {
            int n;
            cin >> n;
            if(n > result) {
                result = n;
                ri = i;
                rj = j;
            }
        }
    }

    cout << result << "\n"
         << ri + 1 << " " << rj + 1 << "\n";
}