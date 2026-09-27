class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        vector<int> reserve;

        int n = nums.size();
        k = k % n;
        int j = n - 1;
        int count = 0;
        
       for(int z = 1; z <= k; z++){

            reserve.push_back(nums[j]);
            j--; 
            count = z - 1; 

        }

          reverse(reserve.begin(), reserve.end());
          count = n - k - 1;

        int i = nums.size() - 1;

        for(int x = 1; x <= n - k ; x++){
              
            nums[i] = nums[count];
            i--;
            count--;

        }

        for(int y = 0; y < reserve.size(); y++){

            nums[y] = reserve[y];
        }
    }
};