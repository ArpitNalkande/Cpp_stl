#include <bits/stdc++.h>
using namespace std;

int onlyOnes(vector<int> &nums)
{

    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }
    return -1;
}

int main()
{

    vector<int> nums = {2, 2, 1};
    //   int n = sizeof(nums)/sizeof(nums[0]);
    cout << onlyOnes(nums);
}