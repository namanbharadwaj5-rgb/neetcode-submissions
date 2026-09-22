class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        vector <int> solution;

        unordered_map <int, int> map;
        for(int num : nums){

            map[num]++;
        }

        for(auto&p : map){
            if(p.second > floor((nums.size()/3))){

                solution.push_back(p.first);

                
            }
        }


            return solution;
      
        
    }
};