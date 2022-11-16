#include<conio.h>
#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int>s;
    int f;
    cout<<"Enter 1 if you want to insert elements in set if not enter 0"<<endl;
    cin>>f;
    if(f)
    {
        cout<<"Enter 5 elements "<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>f;
            s.insert(f);
        }
    }
    else{
        if(s.empty())
        {
            cout<<"The set is empty"<<endl;
            cout<<"Enter 5 elements in set"<<endl;
            for(int i=0;i<5;i++)
            {
                cin>>f;
                s.insert(f);
            }
        }
    }
    for(set<int>::iterator t=s.begin();t!=s.end();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 0;
}
