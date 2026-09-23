class Solution {
public:
    bool isPalindrome(string s) {

        int i = 0;
        int j = s.size() - 1;
        while( i < j){

           while(i < s.size() && !isalpha(s[i]) && !isdigit(s[i])){
            i++;
            }
            
           while(j >= 0 && !isalpha(s[j]) && !isdigit(s[j])) j--;

            if(tolower(s[i]) == tolower(s[j])){
                i++;
                j--;
        }

        else if(tolower(s[i]) != tolower(s[j])) return 0;


       
        
    }
     return 1;
}
};
