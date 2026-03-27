#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int NM = 100;
int arr[NM][NM];
int arr2[NM][NM];

int main()
{
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N;i++ ){
        for (int j = 0; j < M;j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << arr[i][j] + arr2[i][j] << " ";
        }
        cout << "\n";
    }
}