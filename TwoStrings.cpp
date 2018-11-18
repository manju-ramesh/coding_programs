#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
 map<char,int> map1;
 for (int i=0;i<s1.size();i++){
     map1[s1[i]]++;
 } 
    
     
    bool yes=0;
    for (int i=0;i<s2.size();i++){
     if (map1[s2[i]]>0){
         
         yes=1;
         break;
     }
 }
    
    if (yes)
        return "YES";
    else
        return "NO";
  


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
