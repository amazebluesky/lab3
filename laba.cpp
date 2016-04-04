#include<iostream>
#include<string>
#include"laba.h"
using namespace std;
void laba::sort(int c[9]){
	vector<int> v(9);
int insert,moveitem;
for (int i=0;i<9;i++){
	v.at(i)=c[i];
	}
for(int i=0;i<9;i++){
	insert=v.at(i);
	moveitem=i;
	while((moveitem>0)&&(v.at(moveitem-1)>insert)){
		v.at(moveitem)=v.at(moveitem-1);
		--moveitem;
	}
	v.at(moveitem)=insert;
}
	int w =v.at(8)+v.at(7)+v.at(6)+v.at(5)+v.at(4);
	cout<<w<<endl;
	}
