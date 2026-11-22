class Solution {
public:
    int appendCharacters(string s, string t) {
        int sPtr=0 , tPtr=0;
        while(sPtr < s.size() && tPtr < t.size()) {
            if(s[sPtr]!=t[tPtr]){
                  sPtr++;
            }
            else {
                sPtr++;
                tPtr++;
            }
        }

        return t.size()-tPtr;
    }
};