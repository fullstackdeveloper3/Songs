#include <iostream>
#include <iomanip>
using namespace std;

void a ();
void f();
void b();
void fb();

int main(void)
{
    char seven[7];
    for (int i = 0; i < 7; i++)
    {
        cout << "enter "<< char(65 + i) << " (on = 1)(off = 0): ";
        cin >> seven[i];
        while (seven[i] != '1' && int(seven[i]) != '0')
        {
            cout << "enter "<< char(65 + i) << " (on = 1)(off = 0)";
            cin >> seven[i];
        }
    }
    if(seven[0] == '1')
        a();

    if (seven[1] == '1' && seven[5] == '1')
        fb();
    else if (seven[1] == '1')
        b();
    else if (seven[5] == '1')
        f();
    else
        for (int i = 0; i< 3; i++)
            cout<<endl;
    if (seven[6] == '1')
        a();
    if (seven[2] == '1' && seven[4] == '1')
        fb();
    else if (seven[2] == '1')
        b();
    else if (seven[4] == '1')
        f();
    else
        for (int i = 0; i< 3; i++)
            cout<<endl;
    if (seven[3] == '1')
        a();
}

void a()
{
    cout<<" ";
    for (int i = 0; i< 6; i++)
        cout<<"# ";
    cout<<endl;
}
void f() 
{
    for (int i = 0; i< 3; i++)
    {
        cout<<"#";
        cout<<endl;
    }
}
void b()
{
    for (int i = 0; i< 3; i++)
    {
        cout<<"            #";
        cout<<endl;
    }
}
void fb()
{
    for (int i = 0; i< 3; i++)
    {
        cout<<"#           #";
        cout<<endl;
    } 
}