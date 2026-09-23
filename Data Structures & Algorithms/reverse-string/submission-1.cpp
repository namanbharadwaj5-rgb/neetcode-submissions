class Solution {
public:
    void reverseString(vector<char>& s) {
        

        char temp;
        int i = 0;
        int j = size(s) - 1;
        while ( i < j){

            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};