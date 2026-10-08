class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int size=nums.size();
        int sum=0;
        for (int i=0;i<k;i++){
            sum+=nums[i];
        }double ans=sum;
        for(int i=k;i<size;i++){
            sum=(sum-nums[i-k])+nums[i];
            ans=max(ans,(double)sum);
        }return ans/k;
    }
};