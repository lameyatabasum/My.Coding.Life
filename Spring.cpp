#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define vi vector<long long>
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
int main()
{
    fast
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,m;
        cin>>a>>b>>c>>m;
        ll l_ab=lcm(a,b);
        ll l_bc=lcm(b,c);
        ll l_ca=lcm(c,a);
        ll l_t=lcm(a,l_bc);
        ll t_da=m/a;
        ll t_db=m/b;
        ll t_dc=m/c;
        ll left_da=t_da-(m/l_t)-((m/l_ab)-(m/l_t))-((m/l_ca)-(m/l_t));

        ll sum_a=((m/l_ab)-(m/l_t))*3 + ((m/l_ca)-(m/l_t))*3 + (m/l_t)*2 + left_da*6;

        ll left_db=t_db-(m/l_t)-((m/l_ab)-(m/l_t))-((m/l_bc)-(m/l_t));

        ll sum_b=((m/l_ab)-(m/l_t))*3 + ((m/l_bc)-(m/l_t))*3 + (m/l_t)*2 + left_db*6;

        ll left_dc=t_dc-(m/l_t)-((m/l_bc)-(m/l_t))-((m/l_ca)-(m/l_t));

        ll sum_c=((m/l_bc)-(m/l_t))*3 + ((m/l_ca)-(m/l_t))*3 + (m/l_t)*2 + left_dc*6;

        cout<<sum_a<<" "<<sum_b<<" "<<sum_c<<endl;

    }
}

