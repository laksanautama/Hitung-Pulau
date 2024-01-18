#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

//---dilarang menambah kode di atas batas ini-----

const int MAX_SIZE = 100;

int grid[MAX_SIZE][MAX_SIZE];
int m, n;

void dfs(int i, int j) {
    if (i < 0 || i >= m || j < 0 || j >= n || grid[i][j] == 0) {
        return;
    }

    grid[i][j] = 0; // Tandai sel saat ini sebagai telah dikunjungi

    // Jelajahi tetangga dalam keempat arah
    dfs(i + 1, j);
    dfs(i - 1, j);
    dfs(i, j + 1);
    dfs(i, j - 1);
}

int hitung_pulau() {
    int jumlah_pulau = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                ++jumlah_pulau;
                dfs(i, j);
            }
        }
    }

    return jumlah_pulau;
}


int main(){
    m = 4;
    n = 4;

    // Grid contoh
    int inputGrid[4][4] = {{0, 1, 0, 0}, {1, 1, 1, 1}, {0, 1, 0, 0}, {0, 1, 1, 0}};

    // Salin grid input ke variabel grid global
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            grid[i][j] = inputGrid[i][j];
        }
    }

    // Menampilkan grid awal
    cout << "Grid Awal:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    int jumlah_pulau = hitung_pulau();

    cout << "Jumlah Pulau = " << jumlah_pulau << endl;
return 0;
}
