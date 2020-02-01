#include <bits/stdc++.h>
using namespace std;
void set(string str);
void hash(string str);

int main() {
 
 string str="hello";
 
 set(str);
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
    
map<char,int>ma;

int i=0;

}