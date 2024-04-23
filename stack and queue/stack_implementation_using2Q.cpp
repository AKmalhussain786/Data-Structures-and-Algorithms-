// 2 queue approach
#include <bits/stdc++.h>
using namespace std;
class Stack
{
    queue<int> q1;
    queue<int> q2;

public:
    void push(int x)
    {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
       while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();
       }
    }
    int pop() {
         q1.pop();
       
    }
   int top() {
        int first=q1.front();
        return first;
    }
    void display() {
       int n=q1.size();
       while(n--){
        cout<<q1.front()<<" ";
        q1.pop();
       }
    }
};

int main()
{
    Stack s1;
   s1.push(3);
   s1.push(4);
   s1.push(2);
   s1.push(1);
   s1.display();

    return 0;
}