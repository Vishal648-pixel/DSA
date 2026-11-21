class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int low =0;//first index se start karenge
        int high=nums.size()-1;//last index se start karenge 
        while(low<=high){ //jab low and high ek dusre ko cross karenge tab tak
            if (nums[low]==val){ //agar low ki value val se equal hai to 
                nums[low]=nums[high];//last element ko first us element par layenge
                high--;//last element ko array ki window se hata rahe hai 
            }
            else{
                low++;
            }
        }
        return high+1;//kyuki hame actual size batana hai aur array 0 se start hota hai 
    }
};