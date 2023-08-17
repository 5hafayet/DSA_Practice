class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int start, end, size = nums.size();
        vector<vector<int>> ans;

        for (int i = 0; i < size - 2; ++i) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue; // Skip duplicate elements
            }

            start = i + 1;
            end = size - 1;
            
            while (start < end) {
                int sum = nums[i] + nums[start] + nums[end];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[start], nums[end]});
                    
                    while (start < end && nums[start] == nums[start + 1]) {
                        ++start; // Skip duplicate elements
                    }
                    while (start < end && nums[end] == nums[end - 1]) {
                        --end; // Skip duplicate elements
                    }
                    
                    ++start;
                    --end;
                } else if (sum < 0) {
                    ++start;
                } else {
                    --end;
                }
            }
        }
        
        return ans;
    }
};
