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
class stacc {
    public:
    node *top=NULL;
    bool isempty() {
        return top==NULL;
    }
    void push(int d) {
        node *temp = new node(d);
        temp->next=top;
        top=temp;
    }
    void pop() {
        node *temp = top;
        top = top->next;
        delete temp;
    }
    void display() {
        node *temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    speed
    F();
    stacc s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.display();
    s.pop();
    s.display();

}
