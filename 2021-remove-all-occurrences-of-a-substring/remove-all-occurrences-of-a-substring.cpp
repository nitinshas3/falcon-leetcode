class Solution {
public:
    string removeOccurrences(string s, string part) {
        int t = s.size();
        while(t--) {
            int x = s.find(part);
            if (x == std::string::npos) {
                break; 
            }
            int y = part.size();
            s.erase(x, y);
        }
        return s;
    }
};
