class Solution{
public:
    int upperBound(vector<int> &nums, int x){
          int n = nums.size();
        int low = 0, high = n-1;
        int ans = n;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] > x){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
<<<<<<< HEAD
};
=======
};
>>>>>>> e8c500e (BS 1D Array Problem 3)
