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
int *arr;
int top=-1;
void push(int val,int sz) {
    if (top==sz-1) {
        cout<<"array is full"<<endl;
        return;
    }else {
        arr[++top]=val;
    }
}
void pop() {
    if (top==-1) {
        cout<<"array is empty"<<endl;
        return;
    }else {
        top--;
    }
}
int peak() {
    if (top==-1) {
        cout<<"array is empty"<<endl;
        return -1;
    }else {
        return arr[top];
    }
}
void dis() {
    if (top==-1) {
        cout<<"array is empty"<<endl;
        return;
    }else {
        for (int i=top;i>=0;i--) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    speed
    F();
    int n; cin>>n;
    arr=new int[n];
    for (int i=0;i<n;i++) {
       int x; cin>>x;
        push(x,n);
    }
    pop();
    cout<<peak()<<endl;
    dis();
    delete[] arr;

}
