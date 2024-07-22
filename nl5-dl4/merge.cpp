#include<bits/stdc++.h>
#define ll long long
using namespace std ;
string n,m,d="",ans;
int main ()
{
    freopen("merge.inp","r",stdin);
    freopen("merge.out","w",stdout);
    cin>>n>>m;
    ans = "";
    int a = 0;
    int b = 0;
    while(a < n.size() || b < m.size()){
        if (a >= n.size()){
            ans += m[b];
            b++;
        }
        else{
            if (b >= m.size()){
                ans += n[a];
                a++;
            }
            else{
                if (n[a] < m[b]){
                    ans += n[a];
                    a++;
                }
                else{
                    ans += m[b];
                    b++;
                }
            }
        }
    }
    cout<<ans<<'\n';
     a = 0,b = 0;ans = "";
    while(a < n.size() || b < m.size()){
        if (a >= n.size()){
            ans += m[b];
            b++;
        }
        else{
            if (b >= m.size()){
                ans += n[a];
                a++;
            }
            else{
                if (n[a] > m[b]){
                    ans += n[a];
                    a++;
                }
                else{
                    ans += m[b];
                    b++;
                }
            }
        }
    }
    cout<<ans;


    return 0;
}