class Solution {
public:
    int maxArea(vector<int>& heights) {

        int j = heights.size() - 1;
        int i = 0;
        int max_area = 0;
        int ar = 0;
         while(i < j){

            if(heights[i] < heights[j]){
               
               ar = (j - i) * heights[i];
               if(ar > max_area ){
                  max_area = ar;
               }

                 i++;
            }

            else{

                 ar = (j - i) * heights[j];
                 if(ar > max_area ){
                  max_area = ar;
               }

               j--;
            }

        
         }

         return max_area;
        
    }
};
