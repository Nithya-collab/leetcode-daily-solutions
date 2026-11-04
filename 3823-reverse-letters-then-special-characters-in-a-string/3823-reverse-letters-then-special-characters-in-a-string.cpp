class Solution {
public:
    string reverseByType(string s) {
        string str="";
        string spl="";

        string result="";

// spliting
        for(char x : s){
               if(isalpha(x))  str+=x;
               else spl+=x;
        }
        // reverse seperatly
        int left=0,right=str.size()-1;

        while(left < right){
            swap(str[left],str[right]);
            left++;
            right--;  
        }

        left = 0 , right = spl.size()-1;

        while(left < right){
            swap(spl[left],spl[right]);
            left++;
            right--;  
        }

       int x=0 , y=0;
       for(int i=0;i<s.size();++i){
             if(isalpha(s[i])){
                result+=str[x];
                x++;
             }
             else {
                result+=spl[y];
                ++y;
             }
       }
        
        return result;
    }
};