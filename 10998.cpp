#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    string sr;
    cin >> s;

    sr = s;

    reverse(sr.begin(), sr.end());
    if (s == sr)
        cout << 1;
    else
        cout << 0;
}