#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<bool>> grid(n, vector<bool>(m));

    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        grid[x-1][y-1] = true;
    }

    int count = 0;

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < m-1; j++) {
            bool safe = true;
            for (int x = i; x <= i+1; x++) {
                for (int y = j; y <= j+1; y++) {
                    if (grid[x][y]) {
                        safe = false;
                        break;
                    }
                }
                if (!safe) {
                    break;
                }
            }
            if (safe) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
