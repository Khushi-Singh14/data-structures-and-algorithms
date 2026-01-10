class Solution {
public:
    bool isVowel(char s){
        s=tolower(s);
        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u') return true;
        else return false;
    }
    string reverseVowels(string s) {
        int n=s.length()-1;
        int i=0;
        int j=n;
        while(i<j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
                i++; j--;
            } 
            else if(isVowel(s[i]) && !(isVowel(s[j]))) j--;
            else if(!(isVowel(s[i])) && isVowel(s[j])) i++;
            else{
                i++; j--;
            }
        }
        return s;
    }
};