
#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<vector>
using namespace std;
int num = 1,flag = 0;
struct node {
	char data;
	node* left;
	node* right;
};
node * build() {
	node* father = new node;
	cin >> father->data;
	if(father->data == '+' || father->data == '-') { //如果是+、-号，说明下面还有数据，就继续建树
		father->left = build();
		father->right = build();
	} else {
		father->left = NULL; //不是的话就停止
		father->right = NULL;
	}
	return father;
}
void print(node * father) {
	if(father == NULL) return; 
	print(father->left);
	print(father->right);
	if(flag == 1) {
		cout << " ";
	}
	cout << father->data;
	flag = 1;
	return;
}
int main() {
	int now = 0;
	node *head;
	head = build();
	print(head);
	return 0;
}
