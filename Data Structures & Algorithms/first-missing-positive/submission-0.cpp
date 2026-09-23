class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        unordered_set<int> numidx;
        int n = nums.size();

        for( int i = 0; i < n; i++)
        {

             numidx.insert(nums[i]);
     }

     for( int i = 1; i <= n + 1; i++) {
    
             

        if(!numidx.count(i))return i ;
        
     }
     return 0;
     }


};
