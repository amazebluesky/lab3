#include<iostream>
#include"laba.h"
#include<fstream>
using namespace std;
int main(){
	laba laba1;
	ifstream fin("file.in");
	int c[9];
	int c1[9];
	for (int i=0;i<9;i++){
		fin>>c[i];
	}
	fin.close();
	laba1.sort(c);
	return 0;
}
