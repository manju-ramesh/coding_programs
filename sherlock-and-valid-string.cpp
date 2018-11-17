#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    vector<int> a; int i;
    a.resize(26);
        for (i=0;i<26;i++){
        a[i]=0;
    }
    
    for (i=0;i<s.size();i++){
        cout<< s[i] << s[i]-97;
        a[s[i]-97]++;
    }
    bool chg=false;
    a.erase(std::remove(begin(a), end(a), 0), end(a));
    sort(a.begin(),a.end());
    int l=a.size();
    if (a[0]==a[l-1])
        return "YES";
    int c1=count(a.begin(),a.end(),a[0]);
    int c2=count(a.begin(),a.end(),a[l-1]);

    if (c1+c2<l)
        return "NO";
    if ((c1==1)&&a[0]==1)
        return "YES";
    if ((c2==1)&&(a[l-1]==a[0]+1))
        return "YES";
    

    return "NO";

    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
