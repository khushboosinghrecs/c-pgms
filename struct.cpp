#include <bits/stdc++.h>
using namespace std;
struct sortt
{
    int i;
    pair<int, int> d;
    sortt(int ic, pair<int, int> dc)
    {
        i = ic;
        d = dc;
    }
    sortt()
    {
    }

    inline bool operator<(const sortt &o) const
    {
        return (this->d < o.d);
    }
};

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<sortt> arr(n);
        for (int i = 0; i < n; i++)
        {
            int s, e;
            cin >> s >> e;
            arr[i].i = i;
            arr[i].d = {s, e};
        }
        sort(arr.begin(), arr.end());

        int jack, cim;
        jack = cim = 0;
        string result;
        result.resize(n);
        int impossible = 0;
        for (int i = 0; i < n; i++)
        {
            if (jack <= arr[i].d.first)
            {
                jack = arr[i].d.second;
                result[arr[i].i] = 'J';
            }
            else if (cim <= arr[i].d.first)
            {
                cim = arr[i].d.second;
                result[arr[i].i] = 'C';
            }
            else
            {
                impossible = 1;
                break;
            }
        }

        if (impossible == 1)
        {
            cout << "Case #" << i + 1 << ": "
                 << "IMPOSSIBLE" << '\n';
        }
        else
        {
            cout << "Case #" << i + 1 << ": " << result << '\n';
        }
    }
    return 0;
}
