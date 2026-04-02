class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (const auto& s : strs) {
            std::string char_key(26, 0);

            // Crio a chave (1, 0, 0, 2, ...)
            for (char c : s){
                char_key[c - 'a']++;
            }

            res[char_key].push_back(s);

        }
        
        std::vector<std::vector<string>> response;
        for (auto const& [key, value] : res){
            response.push_back(value);
        }

        return response;
        
    }
};
