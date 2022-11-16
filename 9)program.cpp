#include<conio.h>
#include<iostream>
#include<set>

using namespace std;
int main()
{
    set<char>str;
    string d;
    getline(cin,d);
    for(int i=0;i<d.size();i++)
    {
        str.insert(d[i]);
    }
    cout<<"Th string converted into set"<<endl;
    for(set<char>::iterator t=str.begin();t!=str.end();t++)
    {
        cout<<*t;
    }

    getch();
    return 0;
}
