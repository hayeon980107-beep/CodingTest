#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = false;
    stack<char> st;
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        if (s[i] == ')')
        {
            if (st.empty())
            {
                st.push(s[i]);
                break;
            }
            st.pop();
        }
    }

    if (st.size() == 0)
        answer = true;

    return answer;
}