// Last updated: 6/2/2026, 5:42:17 PM
class Solution {
public:
    string interpret(string command) {
        string result;
        int n = command.size();

        for (int i = 0; i < n; ) {
            if (command[i] == 'G') {
                result += 'G';
                i++;
            } else if (command[i] == '(' && command[i+1] == ')') {
                result += 'o';
                i += 2;
            } else {
                result += "al";
                i += 4;
            }
        }

        return result;
    }
};