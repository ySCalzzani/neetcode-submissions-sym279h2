class Solution {
public:
    vector<vector<int>> bucketSort(vector<int>& nums){
        unordered_map<int, int> counts;
        for (int n : nums) counts[n]++;

        vector<vector<int>> bucket(nums.size() + 1);
        
        for (auto const& [val, freq] : counts) {
            bucket[freq].push_back(val);
        }
        
        return bucket;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        vector<vector<int>> bucket;
        int interationK = 0;
        
        bucket = bucketSort(nums);

        for (int i = (bucket.size() - 1); i >= 0; i--){
            int bucketLen = bucket[i].size();

            for (int j = 0; j < bucketLen; j++){
                res.push_back(bucket[i][j]);
                interationK ++;

                if (interationK == k){
                    return res;
                }
            }
        }
        return res;
    }
};