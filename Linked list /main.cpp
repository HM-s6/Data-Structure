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
class node {
    public:
    int data;
    node *next;
    node(int d) {
        data = d;
        next = NULL;
    }
};
class linked {
    public:
    node *head=NULL;
    bool isempty() {
        return head==NULL;
    }
    void insertbig(int d) {
        node *newnode=new node(d);
        newnode->next=head;
        head=newnode;
    }
    void insertlast(int d) {
        node *temp=head;
        node *newnode=new node(d);
        while(temp->next!=NULL) {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    void insertpos(int id,int val) {
        if (isempty()||id==1) {
            insertbig(val);
            return;
        }
        node *temp=head;
        int cnt=1;
        while(temp!=NULL&&cnt<id-1) {
            temp=temp->next;
            cnt++;
        }
        node *newnode=new node(val);
        newnode->next=temp->next;
        temp->next=newnode;
    }
    void delfir() {
        node *temp=head;
        head=head->next;
        delete temp;
    }
    void dellas() {
        node *temp=head;
        while(temp->next->next!=NULL) {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    void delinpos(int id) {
        if (id == 1) {
            delfir();
            return;
        }
        node *temp=head;
        int cnt=1;
        while(temp->next!=NULL&&cnt<id-1) {
            temp=temp->next;
            cnt++;
        }
        node *p=temp->next;
        temp->next=temp->next->next;
        delete p;
    }
    bool search(int val) {
        node *temp=head;
        while (temp!=NULL) {
            if (temp->data==val) {
                cout<<"FOUND"<<endl;
                return 1;
            }
            temp=temp->next;
        }
        cout<<"NOT FOUND"<<endl;
        return 0;
    }
    void dis() {
        node *temp=head;
        while(temp!=NULL) {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

};
int main() {
    speed
    F();
 linked l1;
    l1.insertbig(10);
    l1.insertlast(20);
    l1.insertpos(1,30);
    l1.insertpos(2,40);
    l1.delinpos(3);
    l1.search(10);
    l1.dis();
}
