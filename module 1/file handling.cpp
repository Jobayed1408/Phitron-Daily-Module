//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream f1;
    f1.open("1.txt");
    //int x=9;
    f1<<"hello world\n";
    ofstream f2;
    f2.open("3.txt");
    f2<<"DMIOSNIOD SND\n";
    ifstream fs;
    fs.open("o.txt");
    int x;
    double y;
    fs>>x>>y;
    cout<<x<<" "<<y;

    f1.close();
    f2.close();
    fs.close();


}
