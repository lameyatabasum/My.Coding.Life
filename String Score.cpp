#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int score=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='V')
            score+=5;
        else if(s[i]=='W')
            score+=2;
        else if(s[i]=='X')
        {
            if(i+1<s.length())
              i++;
        }
        else if(s[i]=='Y')
        {
            if(i+1<s.length())
            {
            s.push_back(s[i+1]);
            i++;
            }
        }
        else if(s[i]=='Z')
        {
            if(i+1<s.length())
            {
            if(s[i+1]=='V')
                {
                i++;
                score/=5;
                }
            else if(s[i+1]=='W')
                {
                    i++;
                    score/=2;
                }
            }

        }
     //cout<<score<<endl;
    }
    cout<<score<<endl;


}
