#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
 char s[10001];
 int i, total;
 while(gets(s)) {
  for(i = 0; s[i]; i++) {
   if(s[i] == '"') {
    total++;
    if(total%2==0) {
    cout<<"``";
    } else
     cout<<"''";
   } else
    cout<<s[i];
  }
  cout<<endl;
 }
    return 0;
}