class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int size=arr.size();
        int start=0;
        int end=size-1;
        while(start<end){
            int current_element=arr[start]+arr[end];
            if (current_element==target){
                return {start+1,end+1};
            }
            else if(current_element > target){
                end--;
            }
            else if (current_element < target){
                start++;
            }
        }return{};
    }
};