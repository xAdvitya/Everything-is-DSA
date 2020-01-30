#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string a,string b);

bool checkAnagram(string a, string b){
    bool isAnagram=false;
    std::vector<bool>visited(a.length(),false);
    
    if(a.length() == b.length()){
        
        for(int i=0;i<a.length();i++){
            for(int j=0;j<b.length();j++){
                if(a[i] == b[j] && visited[j]==0){
                    visited[j] = true;
                    isAnagram=true;
                    break;
                    }
            }
            if(!isAnagram){
                break;
            }
        }
    }
    else{
        return false;
    }
    
    if(isAnagram){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string a = "caat";
    string b = "act";
    
    if(checkAnagram(a,b)){
        cout<<"strings are Anagram"<<endl;
    }
    else{
        cout<<"strings are not Anagram"<<endl;
    }
}
