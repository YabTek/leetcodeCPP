class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        n = nums.size();
        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (arr[i] + arr[j] == target)
                return {i,j};
            }
        }
    }
    return {-1,-1};
    }
};