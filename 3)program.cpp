#include<conio.h>
#include<iostream>
#include<set>

using namespace std;

int main()
{
    int f;
    set<int>s1;
    set<int>::iterator t;
    cout<<"Enter 5 elements in "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        s1.insert(f);
    }
    cout<<"The elements of set"<<endl;
    for(t=s1.begin();t!=s1.end();t++)
    {
        cout<<*t<<" ";
    }
    cout<<endl<<"Enter element to delete"<<endl;
    cin>>f;
    s1.erase(f);
    cout<<"The elements after deletion of set"<<endl;
    for(t=s1.begin();t!=s1.end();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 0;
}
