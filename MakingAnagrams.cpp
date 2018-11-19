#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
map<char,int> map1;
map<char,int> map2;
 for(int i=0;i<a.size();i++){
     map1[a[i]]++;
 }
     for(int i=0;i<b.size();i++){
     map2[b[i]]++;
 }
    int c=0;
    map<char,int> :: iterator it;
    int diff;
    for (it=map1.begin();it!=map1.end();it++){
            diff= map2[it->first] - it->second;
        if (diff<0){
            c-=diff;
            map2[it->first]-=diff;
        }
        else if (diff>0){
            c+=diff;
            map2[it->first]-=diff;
        }
    }
    for (it=map2.begin();it!=map2.end();it++){
        c+=abs(map1[it->first] - it->second);
    }
return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
