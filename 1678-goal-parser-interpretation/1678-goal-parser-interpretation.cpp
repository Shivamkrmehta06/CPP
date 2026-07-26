class Solution {
public:
    string interpret(string command) {
        unordered_map<string,string> ump;
        ump["G"] = "G";
        ump["()"] = "o";
        ump["(al)"] = "al";
        string ans = "";
        string s = "";
        for(int i=0;i<command.length();i++){
            s.push_back(command[i]);
            if (ump.find(s) != ump.end()) {
                ans += ump[s];
                s.clear();
            }
        }
        return ans;
    }
};