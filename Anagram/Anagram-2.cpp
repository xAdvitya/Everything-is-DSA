#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string a,string b);

bool checkAnagram(string a, string b){
    
int count1[256]={0};
int count2[256]={0};

for(int i=0;i<a.length() && b.length();i++){
    
    count1[a[i]]++;
    count2[b[i]]++;
}
if(a.length() != b.length()){
    return false;
}
for(int i=0;i<256;i++){
    if(count1[i] != count2[i]){
        return false;
    }
}
return true;
}

int main(){
    string a = "cat";
    string b = "act";
    
    if(checkAnagram(a,b)){
        cout<<"strings are Anagram"<<endl;
    }
    else{
        cout<<"strings are not Anagram"<<endl;
    }
}