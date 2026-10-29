class Solution {
public:
    int arrangeCoins(int n) {

        int low = 0;
        int high = n;
        int ans = 0; 
        while(low <= high){

            long long mid = low + (high - low)/2;
            long long cost = (mid * (mid+1))/2;
            if ( cost <= n ){   
                ans = (int)mid;        
                low = mid + 1;
            }
            else{
                high = mid - 1; 
            }
        }
        return ans;
    }
};