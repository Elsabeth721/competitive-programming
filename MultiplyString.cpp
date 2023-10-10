class Solution {
public:
    string multiply(string num1, string num2) {
      int x=stoi(num1);
	    int y=stoi(num2);
	    int result=x * y;
     	string resultP=to_string(result);
     	return resultP;
    }
};
