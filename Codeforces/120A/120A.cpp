#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a=1,b;
    string s,s1;
    ifstream fi;
    ofstream fo;
    fi.open("input.txt");
    fo.open("output.txt");
    getline(fi,s);
    getline(fi,s1);
    a=stoi(s1);
    if(s=="front") b=1;
    else b=2;
    if(a & b) fo<<"L";
    else fo<<"R";
    fi.close();
    fo.close();
    return 0;
}
