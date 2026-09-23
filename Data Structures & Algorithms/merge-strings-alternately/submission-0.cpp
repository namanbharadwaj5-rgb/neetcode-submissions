class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        int k = 0;
        string merge (word1.size() + word2.size(), '\0'); 

        while ( i < word1.size() && j < word2.size()){

            merge[k] = word1[i];
            merge[k+1]= word2[j];
            i++;
            j++;
            k = k+2;
        }

        while ( i < word1.size())

        {

             merge[k] = word1[i];
             i++;
             k++;

        }
        while ( j < word2.size())
        {

             merge[k] = word2[j];
             j++;
             k++;

        }
        return merge;
        
    }
};