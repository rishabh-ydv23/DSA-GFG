class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        int j=0;
        for(int i=0;i<s.length();i++){
            
            if(s[i]!=' '){
                s[j]=s[i];
                j++;
            }
            

            
        }
        s.resize(j);
        return s;
    }
};