class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int x = 0;
        
        if(tokens.size() == 1) return stoi(tokens[0]);

        for(int i = 0; i < tokens.size(); i++){
            if (tokens[i] == "+" or tokens[i] == "-" or tokens[i] == "*" or tokens[i] == "/"){
                if (tokens[i] == "+") {
                    x = stoi(tokens[i-2]) + stoi(tokens[i-1]);
                } else if (tokens[i] == "-") {
                    x = stoi(tokens[i-2]) - stoi(tokens[i-1]);
                } else if (tokens[i] == "*") {
                    x = stoi(tokens[i-2]) * stoi(tokens[i-1]);
                } else if (tokens[i] == "/") {
                    x = stoi(tokens[i-2]) / stoi(tokens[i-1]);
                }
                tokens[i-2] = to_string(x);
                tokens.erase(tokens.begin() + (i - 1), tokens.begin() + (i + 1));
                i -= 2;
            }
        }

        return x;
    }
};
