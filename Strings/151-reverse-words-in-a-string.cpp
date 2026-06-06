// LeetCode 151: Reverse Words in a String
// Approach: Created a array consisting of all words and then put those words in reverse order in a new string

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        while(ss >> word) words.push_back(word);

        s.clear();

        int n = words.size();
        for(int i = n-1; i >= 0; i--){
            s += words[i];
            if(i>0){
                s += " ";
            }
        }

        return s;
    }
};