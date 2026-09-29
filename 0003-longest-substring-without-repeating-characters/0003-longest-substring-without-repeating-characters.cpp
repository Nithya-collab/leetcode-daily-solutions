class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left=0,right=0;
        int maxSeq=0;
        for(right=0;right<s.size();++right){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);
            maxSeq = max(maxSeq,right-left+1);
        }
        return maxSeq;
    }
};