#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int k=s.size(); int c=0; long tot;
    int m = n%k; int a=0;
    for (int i=0;i<k;i++){
        if (s[i]=='a'){
            c++;
            if (i<m){
                a++;
            }
        }
    }
    tot = (n/k) * c;
    tot+=a;
   
return tot;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
