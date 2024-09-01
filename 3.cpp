#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    map<char, int> letterMap;
    for(char c = 'a'; c <= 'z'; ++c) {
        letterMap[c] = 0;
    }
    string slider = "";

    for (int i = 0; i<s.size(); i++){
        letterMap[s[i]]=i;
        if (letterMap[s[i]]!=0)
        slider = slider + s[i];
    }

}

int main(){
    string s = "pwwkew";
    int x = lengthOfLongestSubstring(s);
    cout << x << endl;
}