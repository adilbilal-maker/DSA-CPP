class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> unMap;

        for(int i = 0; i< nums.size(); i++){
            int complement = target - nums[i];

            if(unMap.find(complement) != unMap.end()){
                return {unMap[complement], i};
            }

            unMap[nums[i]] = i;

        }
        return {};
    }
};