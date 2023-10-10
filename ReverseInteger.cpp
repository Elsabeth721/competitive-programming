class Solution {
public:
    int reverse(int x) {
        bool isXNegative=false;
        if(x<0){
            isXNegative=true;
            x=-x;
        }
        long reverse=0;
        while(x>0){
            reverse=reverse*10+x%10;
            x/=10;
        }
        if(reverse > INT_MAX){
            return 0;
        }
        if(isXNegative){
            return -reverse;
        }
        else{
            return  reverse;
        }
        
    }
};
