class Solution {
public:
    string reverseWords(string s) {
       vector<string> str;
       string temp="";
       for(int i=0;i<s.size();++i){
           if(s[i] != ' ') temp+=s[i];
           else {
            //    temp+=' ';
              if(temp !="")
               str.push_back(temp);

               temp="";
           }

       }
    //    temp+=' ';
       str.push_back(temp);
       temp="";
       for(int i=str.size()-1;i>=0;--i){
            temp+=str[i]+' ';
       }
       if(temp[0] == ' ')
           temp.erase(0,1);
       temp.erase(temp.size()-1,1);
       return temp;

    }
};