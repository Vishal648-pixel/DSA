class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size=nums.size();
        for(int& x:nums){
            x=x*x;
        }

        sort(nums.begin(),nums.end());
        return nums;
    }
};