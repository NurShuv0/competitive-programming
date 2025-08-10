#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <vector>
using namespace std;

int main()
{
    int U, S, Q;
    cin >> U >> S >> Q;

    vector<int> user_network(U + 1, 0);
    unordered_map<int, set<int>> network_users;

    for (int i = 0; i < Q; ++i)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "CONNECT")
        {
            int u, s;
            cin >> u >> s;
            if (user_network[u] != 0)
            {
                int old_net = user_network[u];
                network_users[old_net].erase(u);
            }
            user_network[u] = s;
            network_users[s].insert(u);
        }
        else if (cmd == "DISCONNECT")
        {
            int u;
            cin >> u;
            int net = user_network[u];
            if (net != 0)
            {
                network_users[net].erase(u);
                user_network[u] = 0;
            }
        }
        else if (cmd == "QUERY")
        {
            int u;
            cin >> u;
            int net = user_network[u];
            if (net == 0)
            {
                cout << "NONE\n";
            }
            else
            {
                for (int user : network_users[net])
                {
                    cout << user << " ";
                }
                cout << "\n";
            }
        }
    }

    return 0;
}
