class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int left = 0, right = 0;
        int n = nums.size();
        long long sum = 0;
        int maxLen = 0;
        while(right < n){
            sum += nums[right];
            while(left <= right && sum > k){
                sum -= nums[left];
                left++;
            }
            if(sum == k){
                maxLen = max(maxLen, right-left+1);
            }
            right++;
        }
        return maxLen;
    }
};
