#include<iostream>
#include<cstring>
using namespace std;
int i;
struct node{
	char data;
	node *lchild;
	node *rchild;
	
};
string s;
void create(node * & root){
	if(s[--i]=='.') root=NULL;
	else{
		root=new node;
		root->data=s[i];
		create(root->rchild);
		create(root->lchild);
		
	}
} 
void inorder(node *root){
	if(root==NULL) return;
	cout<<root->data ;
	inorder(root->lchild);
	inorder(root->rchild);
}
int depth(node *root){
	int dep1,dep2,dep=0;
	if(!root) dep=0;
	else{
		dep1=depth(root->lchild);
		dep2=depth(root->rchild);
		dep=(dep1>dep2?dep1:dep2);
	}
	return dep;
}
int main(){
	cin>>s;
	i=s.length();
	node *bt=new node;
	create(bt);
	inorder(bt);
	//cout<<endl<<depth(bt);
	return 0;
}
