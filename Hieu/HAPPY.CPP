#include <bits/stdc++.h>
using namespace std;

const int N = 503;
vector<int> adj[N];
bool used[N];
vector<vector<int>> answer;
vector<int> comp;
int P[502], res = 0;

void SangNT(int N){
    int i, j;
    memset(P,0,sizeof(P));
    P[0] = 1; P[1] = 1;
    int can2 = (int)sqrt(N);
    for (i=2; i <= can2; i++){
        if (P[i]==0){
            for (j=2; j*i <= N; j ++)
                P[j*i] = 1;
        }
    }
}

void dfs(int u) {
    used[u] = true;
    comp.push_back(u);
    for (int v : adj[u]) {
        if (!used[v]) {
            dfs(v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("HAPPY.INP","r",stdin);
    freopen("HAPPY.OUT","w",stdout);
    int n, m;
    cin >> n >> m;

    SangNT(n);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        --u, --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < n; i++) {
        used[i] = false;
    }
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            comp.clear();
            dfs(i);
            if (P[comp.size()] == 1)
                res += 1;
        }
    }
    cout << res;
    return 0;
}
