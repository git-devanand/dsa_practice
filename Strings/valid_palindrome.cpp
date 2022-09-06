#include<bits/stdc++.h>

using namespace std;

class Solution {
private:
    bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
            return true;
        else
            return false;
    }
    
    char toLowerCase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
            return ch;
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

public:
    bool isPalindrome(string s) {
        string temp = "";
        
        // remove unwanted character
        for (int j=0; j<s.length(); j++){
            if(valid(s[j]))
                temp.push_back(s[j]);  
        }
        
        // to lower case
        for(int j=0; j<temp.length(); j++)
            temp[j] = toLowerCase(temp[j]);
        
        
        int i=0;
        int e=temp.length()-1;
        while(i<=e){
            if(temp[i]!=temp[e])
                return false;
            else{
                i++;
                e--;
            }
        }
        return true;
    }
};

int main()
{
    // string s = "A man, a plan, a canal: Panama";
    string s = "race a car";
    Solution validPal;
    cout<<validPal.isPalindrome(s)<<"\n";
}