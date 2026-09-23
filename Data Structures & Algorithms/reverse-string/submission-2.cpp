
class Solution {
public:
    void reverseString(vector<char>& s) {
        

        char temp;
        char i = 0;
        char j = size(s) - 1;
        while ( i < j){

            temp = s[i];
            s[i] = s[j];
            s[j] = temp;

            i++;
            j--;
        }
    }
};