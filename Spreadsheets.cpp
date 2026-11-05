#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int index=a.find('C');
        int flag=0;
        cout<<index;
        if(flag==1)
        {
            if(isdigit(a[index-1]))
            {
                int temp=0;
                for(int i=index-1;i>=1;i--)
                {

                        temp=temp*10+(a[i]-'0');
                }
                string ans=" ";
                while (temp > 0)
                {
                  temp--;
                  char letter ='A'+(temp % 26);
                  ans+=letter;
                  temp/=26;
                }
                reverse(ans.begin(),ans.end());
                cout<<ans;


            }
        }
    }
}
