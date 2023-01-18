#include<bits/stdc++.h>
using namespace std;

class person
{
private:
    string name;
    int id;
    int age;
    string subject;

public:
    void set_information(string s, int id, int ag)
    {
        name = s;
        id = id;
        age = ag;
    }

    void print()
    {
        cout<<name<< " "<<id<< " " <<age<< " \n";
    }
};

int main()
{
    person p;
    p.set_information("Jobayed", 2035, 22);
    p.print();
}
