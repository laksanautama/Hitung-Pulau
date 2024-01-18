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

int hitung_pulau(){

}

int main(){

return 0;
}
