#include <bits/stdc++.h>
using namespace std;
void set(string str);
void hash(string str);

int main() {
 
 string str="hello";
 
 set(str);
 cout<<"\n";
 hash(str);
}

void set(string str){

set<char> s;
 int i=0;
 while(str[i]){
     s.insert(str[i]);
     i++;
 }

for(auto itr : s){
    cout<<itr;
}
}

void hash(string str){
    
unordered_map<char,int>ma;
int i=0;

while(str[i]){
    if(ma[str[i]]==0){
        
        ma[str[i]]++;
    }
    i++;
}

for(auto itr : ma){
    cout<<itr.first;
}

}