class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        vector<int> str1(26, 0);
        vector<int> str2(26, 0);

        if(s1.size() > s2.size())return false;
        
        for(int i = 0; i < s1.size(); i++){
            str1[s1[i] - 'a']++;
            str2[s2[i] - 'a']++;
        }

        int i = 0;

        if (str1 == str2) return true;   

        for(int j = s1.size() ; j < s2.size(); j++ ){
           
           
            
            str2[s2[i] - 'a']--;
            str2[s2[j] - 'a']++;
            i++;
            
             if (str1 == str2) return true;   

        }
        return false;
        
        
    }
};
