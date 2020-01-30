#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string a,string b);

bool checkAnagram(string a, string b){
    
int count[256]={0};

for(int i=0;i<a.length() && b.length();i++){
    
    count[a[i]]++;
    count[b[i]]--;
    }
if(a.length() != b.length()){
    return false;
}
for(int i=0;i<256;i++){
    if(count[i]){
        return false;
    }
}
return true;
}

int main(){
    string a = "cavt";
    string b = "acvt";
    
    if(checkAnagram(a,b)){
        cout<<"strings are Anagram"<<endl;
    }
    else{
        cout<<"strings are not Anagram"<<endl;
    }
}