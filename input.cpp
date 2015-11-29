#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;

const int N =  10;
int main(){
int a;
srand(time(NULL));
ofstream f_input(
"input.txt",
std::ios::out | std::ios::binary | std::ios::app );
for (int i=0; i<N; i++){
	a = rand()%N;
	f_input.write((char*)&a, sizeof(int));
}
f_input.close();
return 0;
}
