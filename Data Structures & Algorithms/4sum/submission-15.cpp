class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<int> quad;
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());
        if (nums.size() < 4) return result;

        for (int i = 0; i < nums.size() - 3; i++) {

            while ( i > 0 && i < nums.size() &&
                nums[i] == nums[i - 1]) {
                i++;
            }

            for (int j = i + 1; j < nums.size() - 2; j++) {

                int k = j + 1;
                int l = nums.size() - 1;

                 while (j>i+1 && j < nums.size() - 2 &&
                     nums[j]==nums[j-1] && j < nums.size() - 2){
                    j++;
                }
                      
                      k = j+1;
                      l = nums.size() - 1;
                

                while (k < l) {

                    if ((long long) nums[i] + nums[j] + nums[k] + nums[l] == (long long) target) {

                        quad.push_back(nums[i]);
                        quad.push_back(nums[j]);
                        quad.push_back(nums[k]);
                        quad.push_back(nums[l]);

                        result.push_back(quad);

                        quad.clear();

                        k++;
                        l--;
                        while (k < l && nums[k] == nums[k-1]) k++;
                        while (k < l && nums[l] == nums[l+1]) l--;
                    }

                    else if (nums[i] + nums[j] > target - (nums[k] + nums[l]))
                        l--;
                    else
                        k++;
                }


            }

            
        }

        return result;
    }
};