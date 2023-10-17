//796. Rotate String
class Solution {
public:
    bool rotateString(string s, string goal) {
        int i=0;
        int n=s.size();
        while(i<n)
        {
            if(s == goal)
            {
                return true;
            }
            char left=s[0];
            s.erase(s.begin()+0);
            s.push_back(left);
            i++;
        } 
        return false;
    }
};
