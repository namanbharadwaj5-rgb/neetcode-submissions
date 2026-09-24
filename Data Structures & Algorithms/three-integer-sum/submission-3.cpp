class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        

        sort(nums.begin(), nums.end());

        int x = 0;
        int y = nums.size() - 1;
        vector<int>triplet;
        vector<vector<int>>result;
        for(int z = 0 ; z < nums.size() ; z++){
            x=z+1;
            y=nums.size() - 1;

            if(z > 0 && nums[z] == nums[z-1]) continue;

            while(x < y){

                if (-nums[z] == nums[x] + nums[y] && y != z){
                    triplet.push_back(nums[z]);
                    triplet.push_back(nums[x]);
                    triplet.push_back(nums[y]);
                    result.push_back(triplet);
                    triplet.clear();

                    x++;
                    y--;
                    while (x < y && nums[x] == nums[x-1]) x++;
                    while (x < y && nums[y] == nums[y+1]) y--;
                }
                else if(-nums[z] > nums[x] + nums[y]){

                    x++;
                }
                else{

                    y--;
                }
            
            }
        }
        return result;
    }
};
