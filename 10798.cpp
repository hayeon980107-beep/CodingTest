#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    char arr[5][16];

    int len[5];

    for (int i = 0; i < 5;i++) {
        fill(arr[i], arr[i] + 16, '\0');

        string str;
        cin >> str;
        len[i] = str.length();

        for (int j = 0; j < str.length();j++) {
            arr[i][j] = str[j];
        }
    }

    for (int j = 0; j < 16;j++) {
        for (int i = 0; i < 5;i++) {
            if(arr[i][j] == '\0') continue;
            cout << arr[i][j];
        }
    }
}