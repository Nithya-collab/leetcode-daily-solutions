class Solution {
public:
    int compareVersion(string version1, string version2) {
       int i=0,j=0;
       int n=version1.size(),m=version2.size();
       while(i<n||j<m){
          int a=0,b=0;
          while(i<n && version1[i]!='.'){
            a=a*10+(version1[i]-'0');
             ++i;
          }

          while(j<m && version2[j]!='.'){
            b=b*10+(version2[j]-'0');
            ++j;
          }

           if(a>b) return 1;
           if(b>a) return -1;
           ++j;
           ++i;
       }
       return 0;
    }
};