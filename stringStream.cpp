class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int currLen = 0, maxLen = INT_MIN, n = sentences.size();
        string word;
        for(int i = 0; i < n; i++){
            stringstream st(sentences[i]);
            while(st >> word){
                currLen += 1;
            }
            maxLen = max(maxLen, currLen);
            currLen = 0;
        }
        return maxLen;
    }
};
