#include <iostream>
#include <fstream>
#include <ctime>
//cannot use target linking because of templates.
#include "src/BinTree.cpp"

using namespace std;

const int N = 10; //500000000
int COUNT = 0;

int main() {
    BinTree<int> tree;
    clock_t start = clock();
    ifstream f_input("input.txt", ios::binary|ios::in);
    int x;
    for (int i = 0; i < N; i++) {
        f_input.read((char*)&x, sizeof(x));
        tree.add(x);
    }
    f_input.close();
    for (int i = 0; i < N; i++) {
        COUNT += tree.search(i) == nullptr ? 0 : 1;
    }
    clock_t end = clock();
    double elapsed_secs = double(end - start) / CLOCKS_PER_SEC;
    cout<<"Ellapsed seconds:"<<elapsed_secs<<endl;
    cout<<COUNT<<"/"<<N<<endl;
    return 0;
}
