#include <bits/stdc++.h>
using namespace std;

int main()
 {
    int n,m;
    cin >>n >> m;

    set<string>p,e;
    for (int i = 0; i < n; i++)
        {
        string s;
        cin >> s;
        p.insert(s);
    }
    for (int i = 0; i < m; i++)
        {
        string s;
        cin >> s;
        e.insert(s);
    }

    int c=0;
    for (auto &x : p) {
        if(e.count(x))
            c++;
    }

    int pm=n-c;
    int em=m-c;

    if (c%2==1)
        pm++;

    if(pm>em)
        cout << "YES"<<endl;
    else
     cout << "NO"<<endl;

    return 0;
}
