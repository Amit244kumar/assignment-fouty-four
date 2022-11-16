#include<iostream>
#include<conio.h>
#include<set>

using namespace std;
int main()
{
    int f,d=0;
    set<int>s;
    cout<<"Enter 5 elements in set"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        s.insert(f);
    }
    cout<<"Enter a element to be searched : ";
    cin>>f;
    for(set<int>::iterator t=s.begin();t!=s.end();t++)
    {
        if(f==*t)
            d=1;
    }
    if(d)
    {
        cout<<"The element is exit in set ";
    }
    else
    {
         cout<<"The element is not exit in set ";
    }

    getch();
    return 0;
}
