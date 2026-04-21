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
int *quee;
int sz;
int front=-1, rear=-1;
bool isfull() {
    return rear==sz-1;
}
bool isempty() {
    return (front==-1||front>rear);
}
void enquee(int x) {
    if (isfull()) {
        cout<<"Queue is full"<<endl;
        return;
    }
    if (isempty()) {
        front=0;
        quee[++rear]=x;
    }else {
        quee[++rear]=x;
    }
}
void dequuuu() {
    if (isempty()) {
        cout<<"Queue is empty"<<endl;
        return;
    }
    front++;
    if (front==rear) {

    }
}
void dis() {
    if (isempty()) {
        cout<<"Queue is empty"<<endl;
    }else {
        for (int i=front; i<=rear; i++) {
            cout<<quee[i]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    speed
    F();
    cin>>sz;
    quee=new int[sz];
    for (int i=0;i<sz;i++) {
        int x; cin>>x;
        enquee(x);
    }
    dis();
    dequuuu();
    dis();
}
