#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void interLeaveQueue(queue<int>& q)
{
    if (q.size() % 2 != 0)
        cout << "Input even integers." << endl;

    queue<int> temp;
    int halfSize = q.size() / 2;

    for (int i = 0; i < halfSize; i++) {
        temp.push(q.front());
        q.pop();
    }
    while (!temp.empty()) {
        q.push(temp.front());
        q.push(q.front());
        q.pop();
        temp.pop();
    }
}

// Driver program to test above function
int main()
{
    queue<int> q;
    q.push(4);
    q.push(7);
    q.push(11);
    q.push(20);
    q.push(5);
    q.push(9);
    interLeaveQueue(q);
    int length = q.size();
    for (int i = 0; i < length; i++) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
