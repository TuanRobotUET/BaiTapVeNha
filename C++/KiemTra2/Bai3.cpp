#include <bits/stdc++.h>

string string_normalization(string s){
    string tmp="";
    string word;
    stringstream ss(s);
    while(ss>>word){
        word[0]=toupper(word[0]);
        for(size_t i=1;i<word.length();i++){
            word[i]=tolower(word[i]);
        }
        tmp=tmp+word+" ";
    }
    return tmp;
}