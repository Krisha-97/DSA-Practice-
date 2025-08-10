class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;

            for(int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j-1]) continue;

                int left = j + 1, right = n - 1;

                while (left < right) {
                    long long sum = 1LL * nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum == target) {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left+1]) left++;
                        while (left < right && nums[right] == nums[right-1]) right--;
                        left++;
                        right--;
                    }
                    else if (sum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }

        return res;
    }
};
// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,0,1],[-2,0,0,2],[-1,0,0,1]]
// Explanation: The distinct quadruplets that sum up to 0 are:
// 1. [-2,-1,0,1]
// 2. [-2,0,0,2]
// 3. [-1,0,0,1]