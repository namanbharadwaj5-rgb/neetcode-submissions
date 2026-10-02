class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_map<int, vector<int>> hash_map;
        for(int i = 0; i < nums.size(); i++){
            hash_map[nums[i]].push_back(i);
        }
          for(auto& p : hash_map){
            if(p.second.size() > 1){
                
                for (int j = 1; j < p.second.size(); j++){
                if(abs(p.second[j]-p.second[j-1]) <= k)return true;
                }
            }
          }

          return false;
        

        
    }
};