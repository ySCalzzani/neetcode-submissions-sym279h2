class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hash_res;
        std::vector<int> res;

        for (int i = 0; i <= (nums.size() - 1); i ++){
            hash_res[nums[i]] = i;
        }

        for (int j = 0; j < nums.size(); j++) {
            int complemento = target - nums[j];

            if (hash_res.count(complemento) && hash_res[complemento] != j) {
                res.push_back(j);
                res.push_back(hash_res[complemento]);
                return res;
            }
        }
        return res;
        
    }
};
