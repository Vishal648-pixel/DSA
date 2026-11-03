class Solution {
 public:
 vector<int> twoSum(vector<int> &nums, int target) {
 unordered_map<int, int> numMap;
 for (int i = 0; i < nums.size(); i++) {
 int complement = target - nums[i];
 if (numMap.count(complement) > 0) {
 return {numMap[complement], i};
 }
 numMap[nums[i]] = i;
 }
 return {}; // Handle no solution as per problem's requirement
 }
};