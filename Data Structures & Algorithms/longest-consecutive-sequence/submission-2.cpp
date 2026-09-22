class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> solution;
        int maxLength = 0;
        for(int num : nums){

            solution.insert(num);
        }
        for(int num : nums){

                   if(solution.count(num) && !solution.count(num-1)){

                    int length = 1;
                    int current = num+1;

                    while( solution.count(current) ){

                        current++;
                        length++;
                        
                    }   

                    if(length > maxLength) maxLength = length;  

                   }
        }

        return maxLength;
    }
};
