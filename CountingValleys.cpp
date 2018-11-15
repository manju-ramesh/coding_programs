#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
 int len= s.size(); int v=0;
    int c=0;
 for (int i=0;i<len;i++){
        if (s[i]=='D') {
            c--;
        }
        else if (s[i]=='U'){
            c++;
        }
     cout<< "c " << c << " s "<< s[i] << " v " << v << endl;
        if ((c==0) && (i>0) ){
            if (s[i]=='U'){
                v++;
                cout<< " v changed " << v << " sprev and snow" << s[i-1] << s[i]<<endl;
            }
        }
 }
    return v;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
