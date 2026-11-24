class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start =0;
        int end =nums.size()-1;
        while(start<=end){
            if (nums[start] % 2==0){
                start++;
            }
            else if(nums[end]%2==0){
            swap(nums[end],nums[start]);
            start++;
            end--;
            }
            else{
                end--;
            }
    }
    return nums;
    }

};