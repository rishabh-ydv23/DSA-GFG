class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        int length=s.length();
        int i=0,j=length-1;
        
        while(i<j){
            
            
            while(i<j && !isalnum(s[i])) i++;
            
            while(i<j && !isalnum(s[j])) j--;
            
                if(tolower(s[i])!=tolower(s[j])){
                    return false;
                }

            i++;
            j--;
        }
        return true;
    }
};