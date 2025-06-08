// User function Template for C++
class Solution {
  public:

    // Function to search for a character in the string
    int searchCharacter(string &s, char ch) {
        // code here
        for(int i=0;i<s.length();i++){
            if(s[i]==ch){
                return i;
            }
        }
        return -1;
    }
};
