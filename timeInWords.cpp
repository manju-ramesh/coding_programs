#include <bits/stdc++.h>

using namespace std;
string to_words(int a){
    string t;
switch(a){
    case 1: t="one"; break;
    case 2: t="two"; break;
    case 3: t="three"; break;
    case 4: t="four"; break;
    case 5: t="five"; break;
    case 6: t="six"; break;
    case 7: t="seven"; break;
    case 8: t="eight"; break;
    case 9: t="nine"; break;
    case 10: t="ten"; break;
    case 11: t="eleven"; break;
    case 12: t="twelve"; break;
    case 13: t="thirteen"; break;
    case 14: t="fourteen"; break;
    case 15: t="quarter"; break;
    case 16: t="sixteen"; break;
    case 17: t="seventeen"; break;
    case 18: t="eighteen"; break;
    case 19: t="ninteen"; break;
    case 20: t="twenty"; break;
    case 21: t="twenty one"; break;
    case 22: t="twenty two"; break;
    case 23: t="twenty three"; break;
    case 24: t="twenty four"; break;
    case 25: t="twenty five"; break;
    case 26: t="twenty six"; break;
    case 27: t="twenty seven"; break;
    case 28: t="twenty eight"; break;
    case 29: t="twenty nine"; break;
    case 30: t="half"; break;
}
    return t;
}
// Complete the timeInWords function below.
string timeInWords(int h, int m) {
string time;
if (m>30){
    if (h==12)
        h=1;
    else
        h++;
}
if (m==0){
    time = to_words(h) + " o' clock";
}
else if (m==1)
    time = "one minute past " + to_words(h);
else if (m==15)
    time = "quarter past " + to_words(h);
else if (m==30)
    time = "half past " + to_words(h);
else if (m<30)
    time = to_words(m) + " minutes past " + to_words(h);
else if (m==45)
    time = "quarter to " + to_words(h);
else 
    time= to_words(60-m)+ " minutes to " + to_words(h);
    
return time;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
