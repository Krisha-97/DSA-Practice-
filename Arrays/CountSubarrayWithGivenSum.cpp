class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
        unordered_map<int, int> mpp;
        mpp[0] =1;
        int p_sum = 0, cnt = 0;
        int n= nums.size();
        for(int i=0; i<n; i++){
            p_sum += nums[i];
            int remove = p_sum - k;
            cnt += mpp[remove];
            mpp[p_sum] +=1;
        }
        return cnt;
    }
};

// Input: nums = [1, 1, 1], k = 2

// Output: 2

// Explanation: In the given array [1, 1, 1], there are two subarrays that sum up to 2: [1, 1] and [1, 1]. Hence, the output is 2.

