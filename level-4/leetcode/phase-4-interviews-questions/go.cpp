#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> all;
    map<vector<int>, bool> tk;
    void rec(int idx, int cur_sum, vector<int> cur_v, vector<int> &candidates, int target)
    {

        if (cur_sum == target)
        {
            vector<int> cc = cur_v;
            sort(cc.begin(), cc.end());
            if (tk[cc] == 1)
                return;
            tk[cc] = 1;
            all.push_back(cc);
            return;
        }
        if (idx >= candidates.size())
            return;
        if (cur_sum + candidates[idx] <= target)
        {
            cur_sum += candidates[idx];
            cur_v.push_back(candidates[idx]);
            rec(idx + 1, cur_sum, cur_v, candidates, target);
            cur_sum -= candidates[idx];
            cur_v.pop_back();
        }
        rec(idx + 1, cur_sum, cur_v, candidates, target);
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<int> v;
        rec(0, 0, v, candidates, target);
        for (auto i : all)
        {
            for (auto j : i)
                cout << j << " ";
            cout << endl;
        }
        return all;
    }
};
int main()
{
    vector<int> vec = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    Solution S;
    S.combinationSum2(vec, 27);
}