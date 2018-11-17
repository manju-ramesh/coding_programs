#include <bits/stdc++.h>

using namespace std;
int dp[37];
void init(){
    for (int i=0;i<37;i++){
        dp[i]=-1;
    }
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
}

// Complete the stepPerms function below.
int stepPerms(int n) {
if ((n==1)||(n==0))
    return 1;
if (dp[n]!=-1)
    return dp[n];
else dp[n]=stepPerms(n-1)+stepPerms(n-2)+stepPerms(n-3);

    return dp[n];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    init();
    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int s_itr = 0; s_itr < s; s_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int res = stepPerms(n);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}
