class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
       int left = 0, right = n-1;
       int sum = 0;
       sort(nums.begin(), nums.end());
       while(left < right){
        sum = nums[left] + nums[right];
        if(sum == target){
            return {left, right};
        }
        else if(sum < target){
            left++;
        }
        else{
            right--;
        }
       }
       return {-1, -1};
    

    }
};