class Solution {
public:
    bool validPalindrome(string s) {
int i = 0;
int j = s.size()-1;

while (i < j) {

    if (s[i] != s[j]) {  
        bool testA = isPalRange(s, i+1, j);  
        bool testB = isPalRange(s, i, j-1);  
        if (testA || testB) return true;  
        else return false;  
    } 
    else
    {j--;i++;} 
}  
return true;
}

    bool isPalRange(string& s, int a, int b) {
              int i = a;
              int j = b;
              while (i < j) {
                  if (s[i] == s[j]){
                     i++; j--;
                  
                   } 
                  
                  else return false;
                } 

      return true;
     }

     };