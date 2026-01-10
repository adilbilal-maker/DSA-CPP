class Solution {
public:
    bool isValid(string s) {
        stack<char> openBr;

        for(char c:s){
            if(c == '(' || c == '{' || c == '['){
                openBr.push(c);
            }
            else{
                if(openBr.empty()){
                    return false;
                }
                char top = openBr.top();

                if(c == ')' && top == '(' ||
                    c == '}' && top == '{' ||
                    c == ']' && top == '['){

                    openBr.pop();
                
                }
                else{
                    return false;            
                }
            }
        }
        return openBr.empty();
    }
};