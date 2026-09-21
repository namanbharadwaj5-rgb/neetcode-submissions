class Solution {
public:

    string encode(vector<string>& strs) {

        string result;
        for( string str : strs ){
                
                int s = str.size();
                result  += to_string(s) + '#' + str; 

        }

        return result;

    }

    vector<string> decode(string s) {

        int i = 0;
    vector<string> result;

    while (i < s.size()) {
        int hashPos = s.find('#', i);
        int len = stoi(s.substr(i, hashPos - i));
        string str = s.substr(hashPos + 1, len);
        result.push_back(str);
        i = hashPos + 1 + len;
    }

    return result;

    }
};
