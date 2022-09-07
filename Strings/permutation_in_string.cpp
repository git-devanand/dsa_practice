#include<bits/stdc++.h>

using namespace std;

bool checkEqual()

bool checkInclusion(string s1, string s2){
    // character count array
    int count1[26] = {0};
    for(int i=0; i<s1.length(); i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // traverse s2 string in window of size s1 length and compare
    int i=0;
    int windowSize = s1.length();
    int count2[26] = {0};
    while(i < windowSize){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if(checkEqual(count1, count2))
        return true;
    return false;
}

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout<<checkInclusion(s1, s2)<<"\n";
}