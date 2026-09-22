class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> prefix;
        vector<int> suffix;
        vector<int> answers;
        prefix.resize(nums.size());
        suffix.resize(nums.size());
        answers.resize(nums.size());
        suffix[nums.size() - 1]=1;
        prefix[0]=1;

        
        for(int i = 1; i < nums.size(); i++){

               prefix[i] = prefix[i-1] * nums[i - 1];
        }

        for(int j = nums.size() - 2; j >= 0; j--){

               suffix[j] = suffix[j+1] * nums[j + 1];
               answers[j] = prefix[j] * suffix[j];

        }
         answers[ nums.size()-1 ] = prefix[ nums.size()-1 ] * suffix[ nums.size()-1];
        return answers;

        

    }
};
