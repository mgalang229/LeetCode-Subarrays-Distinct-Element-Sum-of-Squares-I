class Solution {
public:
    int sumCounts(vector<int>& nums) {        
        int ans = 0, n = nums.size();
        set<int> s;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                for (int k = i; k <= j; k++) {
                    s.insert(nums[k]);
                }
                ans += s.size() * s.size();
                s.clear();
            }
        }
        return ans;
    }
};
