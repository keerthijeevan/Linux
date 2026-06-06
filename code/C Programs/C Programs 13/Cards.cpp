#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> players;

    for (int i = 1; i <= n; i++)
    {
        int value;
        cin >> value;

        players.push_back({value, i});
    }

    sort(players.begin(), players.end());

    vector<pair<int, int>> answer;

    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        answer.push_back(
            {players[left].second, players[right].second}
        );

        left++;
        right--;
    }

    for (auto &p : answer)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
