class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        int start=0;
        for(int end=0;end<size;end++){
            if(nums[end]!=0){
                swap(nums[start],nums[end]);
                start++;
            }
        }
        }
};