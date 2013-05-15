#include<iostream>
#include<algorithm>
#include<string>
#include<stdio.h>
using namespace std;

int main(){
	string cur;
   	while (cin >> cur) {
   		if (cur == "#") break;
   		if (next_permutation(cur.begin(), cur.end())) {
   			printf("%s\n", cur.c_str());
   		}
   		else {
   			printf("No Successor\n");
   		}
   	}
   	return 0;
}