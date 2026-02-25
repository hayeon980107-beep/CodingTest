/* day 01*/
// 문자열 출력하기
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    cin >> str;

    cout << str << "\n";
    return 0;
}

// a와 b 출력하기
#include <iostream>

using namespace std;

int main(void)
{
    int a;
    int b;
    cin >> a >> b;
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    return 0;
}

// 문자열 반복해서 출력하기
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    int n;
    cin >> str >> n;
    for (int i = 0; i < n; i++)
    {
        cout << str;
    }
    return 0;
}

// 대소문자 바꿔서 출력하기
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else
            str[i] -= 32;
    }

    cout << str;
    return 0;
}

// 특수문자 출력하기
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else
            str[i] -= 32;
    }

    cout << str;
    return 0;
}

/* day 02*/

// 덧셈식 출력하기
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else
            str[i] -= 32;
    }

    cout << str;
    return 0;
}

// 문자열 붙여서 출력하기
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str1, str2;
    cin >> str1 >> str2;
    cout << str1 << str2;
    return 0;
}

// 문자열 돌리기
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << "\n";
    }
    return 0;
}

// 홀 짝 구분하기
#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << " is even";
    }
    else
    {
        cout << n << " is odd";
    }
    return 0;
}

// 문자열 겹쳐쓰기
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s)
{
    string answer = "";

    answer = my_string.replace(s, overwrite_string.size(), overwrite_string);

    return answer;
}