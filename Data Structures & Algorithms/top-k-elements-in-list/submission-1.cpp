class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        std::unordered_map<int, int> map; 
        
            for(int num : nums)
            {
                 
               map[num]++;

            }
                vector<int> result;

                for(int count = 1; count <= k; count++){

                    int maxFreq = -1;
                    int maxkey = -1;
                    for(auto& p : map){
                        if(p.second > maxFreq){
                            
                            maxFreq = p.second;
                            maxkey = p.first;

                        }
                    }

                    result.push_back(maxkey);
                    map.erase(maxkey);
                }

                return result;

        }

}; 
    
