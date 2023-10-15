//20. Valid Parentheses
class Solution {
public:
    bool isValid(string s) {
                if(s.length() <= 1){
            return false;
        }
        // Create unordered map
        unordered_map<char, char> um;
        stack<char> charStack;
        um.insert({'}', '{'});
        um.insert({')', '('});
        um.insert({']', '['});

        // If the first parntheses is a closing bracket
        if (um.count(s[0]))
        {
            return false;
        }
        // loop trough the strink if it's not a closing brack
        // then place it inside the stack
        for (int i = 0; i < s.length(); i++)
        {
            if(!um.count(s[i])){
                charStack.push(s[i]);
            }
            else if(!charStack.empty() && charStack.top() == um[s[i]]){
                charStack.pop();
            }
            else{
                return false;
            }
        
        }


        if (!charStack.empty())
            return false;
        return true;
    }
};
