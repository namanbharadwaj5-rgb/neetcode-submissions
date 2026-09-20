class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        
        if (nums.size() == 0) return 0;
    if (nums.size() == 1) {
        if (nums[0] == val) return 0;
        else return 1;
    }
        int i = 0;
        int j = 1;
        
        while (j < nums.size()) {
            bool erased = false;

            if (nums[j] == val) {
                swap(nums[i], nums[j]);
            }

            while (i < nums.size() && nums[i] == val) {
                nums.erase(nums.begin() + i);
                erased=true;
            }

            if(!erased){
            j++;
            }
        }
        return nums.size();
    }
};