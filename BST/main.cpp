#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define speed ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void F() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
}
class nodet{
public:
    int data;
    nodet *left,*right;
    nodet(int x) {
        data=x;
        left=right=NULL;
    }
};
class node {
    public:
    int data;
    node *next;
    node(int x) {
        data=x;
        next=NULL;
    }
};
class bst {
    public:
    nodet* root;
    bst() {
        root=NULL;
    }
    nodet * inser(nodet *r,int x) {
        if(root==NULL) {
            return new nodet(x);
        }
        if (x>root->data) r->right=inser(r->right,x);
        if (x<root->data) r->left=inser(r->left,x);
    }
    void insertt(int x) {
        root=inser(root,x);
    }
    void preorder(nodet*r) {
        if(r==NULL) {
            return;
        }
        cout<<r->data<<" ";
        preorder(r->left);
        preorder(r->right);
    }
};
class stacc {
    public:
    node*top;
    stacc() {
        top=NULL;
    }
    bool isempty() {
        return top==NULL;
    }
    void push(int x) {
        node* newnode=new node(x);
        newnode->next=top;
        top=newnode;
    }
    int pop() {
        if(isempty())return -1;
        int x=top->data;
        node* temp=top;
        top=top->next;
        delete temp;
        return x;
    }
    stacc rever(stacc& s) {
        stacc temp;
        while(!isempty()) {
            temp.push(s.pop());
        }
        return temp;
    }
    void revv (stacc& s,stacc &s2) {
        int x=s.pop();
        if (x==-1)return;
        s2.push(x);
        revv(s,s2);
    }
    void display() {
        node* temp=top;
        while(temp!=NULL) {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main() {
    speed
    F();
    stacc s,m;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s=s.rever(s);
    s.display();
    m.push(1);
    m.push(2);
    m.push(3);
    m.display();
    stacc x;
    m.revv(m,x);
    m=x;
    m.display();

}
