#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char> str;
    for(int i=0;i<s.size();i++) {
        if(s[i] == '(') str.push(')');
        else if(s[i] == '{') str.push('}');
        else if(s[i] == '[') str.push(']');
        else{
            if(str.empty() || s[i] != str.top()){
                return "NO";
            }
            else{
                str.pop();
            }
        }
    }
    if(str.empty()){
        return "YES";
    }
    else{
        return "NO";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
