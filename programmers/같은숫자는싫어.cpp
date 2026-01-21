#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    stack<int> st;
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    for (int i = 0; i < arr.size(); i++)
    {
        if (!st.empty())
        {
            int number = st.top();
            if (arr[i] != number)
            {
                st.push(arr[i]);
                answer.push_back(arr[i]);
            }
        }
        else
        {
            st.push(arr[i]);
            answer.push_back(arr[i]);
        }
    }

    return answer;
}