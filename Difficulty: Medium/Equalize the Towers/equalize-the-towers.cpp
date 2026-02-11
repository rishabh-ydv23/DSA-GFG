class Solution {
public:
    int minCost(vector<int>& heights, vector<int>& cost) {
        int n = heights.size();
        vector<pair<int,int>> v;

        for(int i = 0; i < n; i++) {
            v.push_back({heights[i], cost[i]});
        }

        sort(v.begin(), v.end());

        long long totalCost = 0;
        for(auto &p : v) totalCost += p.second;

        long long curr = 0;
        int target = 0;

        for(auto &p : v) {
            curr += p.second;
            if(curr * 2 >= totalCost) {
                target = p.first;
                break;
            }
        }

        long long ans = 0;
        for(auto &p : v) {
            ans += 1LL * abs(p.first - target) * p.second;
        }

        return ans;
    }
};
