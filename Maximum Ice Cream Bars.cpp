#include <bits/stdc++.h>
using namespace std;

// Problem link : https://leetcode.com/problems/maximum-ice-cream-bars/description/

class Solution
{
public:
    int maxIceCream(vector<int> &costs, int coins)
    {
        int ans = 0;
        sort(costs.begin(), costs.end());

        for (int i = 0; i < costs.size(); i++)
        {
            if (costs[i] <= coins)
            {
                ans++;
                coins -= costs[i];
            }
        }

        return ans;
    }
};