#include <bits/stdc++.h>
using namespace std;

bool check_pangram(string s){
    int index;
    vector<bool>mark(26,false);
    for(int i=0;i<s.length();i++){
    
        if('A' <= s[i] && s[i]<='Z'){
            index = s[i]-'A';
            }
        else if('a'<=s[i] && s[i]<='z'){
            index = s[i]-'a';
         }
     mark[index] = true;
 }
    for(int i=0;i<26;i++){
        if(mark[i]==0){
                return false;
        }
}
   return true;
    
}
int main() {
   string str = "abCDEFGHijklmnopqrstuvwxyz";
   
   if(check_pangram(str)){
       cout<<"pangram"<<endl;
       }
   else{
       cout<<"Not pangram"<<endl;
       }

}
