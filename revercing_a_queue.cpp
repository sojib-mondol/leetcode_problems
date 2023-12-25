// https://www.codingninjas.com/studio/problems/reversing-queue_1170046?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
void reverse(queue<int> &q)
{
    // Write your code here.

    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}