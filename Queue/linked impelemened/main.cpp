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
class quee {
    public:
    node *front, *rear;
    quee() {
        front = rear = NULL;
    }
    bool isEmpty() {
        return front == NULL;
    }
    void enquee(int val) {
        node *newnode = new node(val);
        if (isEmpty()) {
            front = rear = newnode;
            return;
        }
        rear->next = newnode;
        rear = newnode;
    }
    int Dequeue ()
    {
        int d=0;
        if (isEmpty())
            cout<< "the queue is empty \n";
        else if (front==rear)
        {
            d=front->data;
            delete front;
            front=rear=NULL;
        }
        else
        {
            node *temp=front;
            front=front->next;
            d=temp->data;
            delete temp;
        }
        return d;
    }
    int peak () {
        if (isEmpty()) {
            cout<< "the queue is empty \n";
            return -1;
        }else {
            return front->data;
        }
    }
    int getrear() {
        return rear->data;
    }
    void clearr() {
        while (!isEmpty()) {
            Dequeue();
        }
    }
    void dis () {
        node *temp=front;
        while (temp!=NULL) {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"\n";
    }
};

int main() {
    speed
    F();
    quee q;
    q.enquee(1);
    q.enquee(2);
    q.enquee(3);
    q.dis();
    cout<<q.getrear()<<endl;
    cout<<q.Dequeue()<<endl;
    cout<<q.peak()<<endl;
    q.dis();
    q.clearr();
    q.dis();

}
