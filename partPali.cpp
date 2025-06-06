#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool isPalindrom(string s,int start,int end){
    while(start<=end){
        if(s[start++]!=s[end--]){
            return false;
        }
    }
    return true;
}
void f(int index,string s,vector<string>&path,vector<vector<string>>&ans){
    if(index==s.size()){
        ans.push_back(path);
        return;
    }
    for(int i=index;i<s.size();i++){
        if(isPalindrom(s,index,i)){
            path.push_back(s.substr(index,i-index+1));
            f(i+1,s,path,ans);
            path.pop_back();
        }
        
    }
}
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>path;
        f(0,s,path,ans);
        return ans;
    }
};