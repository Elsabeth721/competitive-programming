#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
       string sLA="";
       for(char c: s){
           if(isalnum(c)){
               sLA+=tolower(c);
           }
       }
       string sR=sLA;
       reverse(sR.begin(), sR.end());

        return sLA==sR;
        }
    
};
