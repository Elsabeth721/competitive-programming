class Solution {
public:
    vector<string> fizzBuzz(int n) {
       vector<string>sol;
       for(int i=1;i<=n;i++) 
        {
           string la;
           if (i%3==0 && i%5==0){
               sol.push_back("FizzBuzz");
           }
           else if (i%5==0){
               sol.push_back("Buzz");
           }
           else if (i%3==0){
               sol.push_back("Fizz");
           }
           else{
               string la=to_string(i);
               sol.push_back(la);
           }

       }
       return sol; 
    }
};
