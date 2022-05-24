#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
node *reverse_ls(node *&head)
{
    node *prev, *curr, *nex;
    prev = NULL;
    curr = head;

    while (curr != NULL)
    {
        nex = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nex;
    }

    return prev;
}

void print_ls(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << (temp->data) << " ";
        temp=temp->next;
    }
    cout << endl;
}
int main()
{

    #ifndef ONLINE_JUDGE
          freopen("input.txt","r",stdin);
          freopen("output.txt","w",stdout);       
       #endif
    node *first = new node;
    node *second = new node;
    node *third = new node;
    node *four = new node;
    first->data = 3;
    second->data = 5;
    third->data = 7;
    four->data = 9;
    first->next = second;
    second->next = third;
    third->next = four;
    four->next = NULL;
    print_ls(first);
   
    node *rev = reverse_ls(first);
    print_ls(rev);
}