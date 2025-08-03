class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int> ans;
      int n = nums.size();
      int maxi = INT_MIN;
      for(int i=n-1; i>=0; i--){
        if(nums[i] >= maxi){
            ans.push_back(nums[i]);
        maxi = max(maxi, nums[i]);
        }
      }
      reverse(ans.begin(), ans.end());
      return ans;
    }
};

// Input: nums = [1, 2, 5, 3, 1, 2]

// Output: [5, 3, 2]

// Explanation: 2 is the rightmost element, 3 is the largest element in the index range [3, 5], 5 is the largest element in the index range [2, 5]