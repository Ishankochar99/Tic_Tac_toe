#include<iostream>
using namespace std;
    char mat[3][3]={'1','2','3','4','5','6','7','8','9'};
    char Person='x';
void input()
{
    int n;
    cout<<"Enter field or number by "<<Person<<endl;
    cin>>n;
    if(n==1)
    {
        if(mat[0][0]=='x'||mat[0][0]=='0')
        {
            cout<<"Wrong choice.\n";
            input();
        }
        else
            mat[0][0]=Person;
    }
    else if(n==2)
    {
        if(mat[0][1]=='x'||mat[0][1]=='0')
        {
            cout<<"Wrong Choice.\n";
            input();
        }
        else
            mat[0][1]=Person;}

    else if(n==3)
    {
        if(mat[0][2]=='x'||mat[0][2]=='0')
        {
            cout<<"Wrong choice.\n";
            input();
        }
        else
            mat[0][2]=Person;
    }
    else if(n==4)
    {
        if(mat[1][0]=='x'||mat[1][0]=='0')
        {
            cout<<"Wrong choice.\n";
            input();
        }
        else
            mat[1][0]=Person;
    }
    else if(n==5)
    {
        if(mat[1][1]=='x'||mat[1][1]=='0')
        {
            cout<<"Wrong choice. \n";
            input();
        }
        else
            mat[1][1]=Person;
    }
    else if(n==6)
    {
        if(mat[1][2]=='x'||mat[1][2]=='0')
        {
            cout<<"Wrong choice. \n";
            input();
        }
        else
            mat[1][2]=Person;
    }
    else if(n==7)
    {
        if(mat[2][0]=='x'||mat[2][0]=='0')
        {
            cout<<"Wrong choice. \n";
            input();
        }
        else
            mat[2][0]=Person;
    }
    else if(n==8)
    {
        if(mat[2][1]=='x'||mat[2][1]=='0')
        {
            cout<<"Wrong choice. \n";
            input();
        }
        else
            mat[2][1]=Person;
    }
    else if(n==9)
    {
        if(mat[2][2]=='x'||mat[2][2]=='0')
        {
            cout<<"Wrong choice. \n";
            input();
        }
        else
            mat[2][2]=Person;
    }

if(n==0 || n>9 || n<0) //edge case
{
    cout<<"Wrong choice.\n";
    input();
}
}
void Person_toggle()
{
    if(Person=='x')
        Person='0';
    else
        Person='x';
}
char Win()
{
    if(mat[0][0]=='0'&&mat[0][1]=='0'&&mat[0][2]=='0')
        return '0';
    else if(mat[1][0]=='0'&&mat[1][1]=='0'&&mat[1][2]=='0')
        return'0';
    else if(mat[2][0]=='0'&&mat[2][1]=='0'&&mat[2][2]=='0')
        return'0';
    else if(mat[0][0]=='0'&&mat[1][0]=='0'&&mat[2][0]=='0')
        return'0';
    else if(mat[0][1]=='0'&&mat[1][1]=='0'&&mat[2][1]=='0')
        return'0';
    else if(mat[0][2]=='0'&&mat[1][2]=='0'&&mat[2][2]=='0')
        return'0';
    else if(mat[0][0]=='0'&&mat[1][1]=='0'&&mat[2][2]=='0')
        return'0';
    else if(mat[0][2]=='0'&&mat[1][1]=='0'&&mat[2][0]=='0')
        return'0';

    if(mat[0][0]=='x'&&mat[0][1]=='x'&&mat[0][2]=='x')
        return 'x';
    else if(mat[1][0]=='x'&&mat[1][1]=='x'&&mat[1][2]=='x')
        return'x';
    else if(mat[2][0]=='x'&&mat[2][1]=='x'&&mat[2][2]=='x')
        return'x';
    else if(mat[0][0]=='x'&&mat[1][0]=='x'&&mat[2][0]=='x')
        return'x';
    else if(mat[0][1]=='x'&&mat[1][1]=='x'&&mat[2][1]=='x')
        return'x';
    else if(mat[0][2]=='x'&&mat[1][2]=='x'&&mat[2][2]=='x')
        return'x';
    else if(mat[0][0]=='x'&&mat[1][1]=='x'&&mat[2][2]=='x')
        return'x';
    else if(mat[0][2]=='x'&&mat[1][1]=='x'&&mat[2][0]=='x')
        return'x';

return'?';
}

void draw()
{
    for(int i=0;i<3;i++)
        {
        for(int j=0;j<3;j++)
            cout<<mat[i][j]<<"	";
        cout<<endl;
        }
}
int main()
{
    int p=0;
    draw();
    cout<<"first Person has 'x' and second Person'0'"<<endl;
    while(1)
    {
        input();
        p++;
        draw();
        if(p>=5)
        {
            if(Win()=='x')
            {
                cout<<"x wins this game! game over";
                break;
            }
        if(Win()=='0')
        {
            cout<<" 0 wins this game! game over";
            break;
        }
        if(Win()=='?' && p==9)
        {
            cout<<"Game draw! game over";
            break;
        }
    }
Person_toggle();
 }
}
