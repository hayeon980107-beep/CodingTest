#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}

bool cmp2(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays)
{
    vector<int> answer;

    map<string, int> songCnt;
    map<string, vector<pair<int, int>>> song; // classic, 1, 500 / 장르, 고유번호, 플레이수
    vector<pair<string, int>> order;

    for (int i = 0; i < genres.size(); i++)
    {
        if (songCnt.find(genres[i]) != songCnt.end())
        {
            songCnt[genres[i]] += plays[i];
        }
        else
        {
            songCnt[genres[i]] = plays[i];
        }

        song[genres[i]].push_back({i, plays[i]});
        sort(song[genres[i]].begin(), song[genres[i]].end(), cmp);
    }

    for (const auto &iter : songCnt)
    {
        order.push_back({iter.first, iter.second});
    }

    sort(order.begin(), order.end(), cmp2);

    for (auto x : order)
    {
        answer.push_back(song[x.first][0].first);
        if (song[x.first].size() >= 2)
        {
            answer.push_back(song[x.first][1].first);
        }
    }

    return answer;
}
