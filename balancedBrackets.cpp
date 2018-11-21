#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char> c;
    for (int i=0;i<s.size();i++){
        switch(s[i]){
            case '{' :
            case '(' :
            case '[' :
                c.push(s[i]); break;
            case '}' : 
                if (!c.empty() && c.top()=='{')
                    c.pop();
                else return "NO";
                break;
            case ')' : 
                if (!c.empty() && c.top()=='(')
                    c.pop();
                else return "NO";
                break;
            case ']' : 
                if (!c.empty() && c.top()=='[')
                    c.pop();
                else return "NO";
                break;

        }
    }
    return c.empty() ? "YES" : "NO";

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
