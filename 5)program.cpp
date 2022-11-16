#include<conio.h>
#include<iostream>
#include<set>

using namespace std;

int main()
{
    int f;
    set<int>s;
    cout<<"Enter 5 elements in set"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        s.insert(f);
    }

    cout<<"The set elements "<<endl;
    for(set<int>::iterator t=s.begin();t!=s.end();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 0;
}
