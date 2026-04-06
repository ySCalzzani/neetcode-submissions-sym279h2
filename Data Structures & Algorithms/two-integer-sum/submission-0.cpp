class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, std::vector<int>> hash_res;

        for(int i = 0; i < (nums.size() - 1); i ++){
            for(int j = (nums.size()- 1); j > i; j--){
                hash_res[nums[i] + nums[j]].push_back(i);
                hash_res[nums[i] + nums[j]].push_back(j);
            }
        }

        return hash_res[target];
        
    }
};
