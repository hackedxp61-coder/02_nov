#include<iostream>
using namespace std;
// node structure
struct node {
    int data ;
    node* next;
};
//insert at head
void insert athead (node*&head, int value) {
    node* newnode = new node();
    newnode->data =value;
    newnode->next =head;
    head = newnode;
}
void insertattail(node*&head,int value) {
    node* newnode = newnode();
    newnode->data =value;
    newnode->next =nullptr;
    if (head == nullptr) {
        head =newnode;
        return ;
    }
    node* temp =head;
    while (temp-> next!=nullptr) {
        temp =temp->next;
    }
    temp->next= newnode;
}
//display linked list
void display(node* head) {
    node* temp = head;
    while (temp!=nullptr) {
        cout << temp->data <<"-> ";
        temp = temp->next;
    }
    cout << "NULL" <<endl;
}
//delete a node by value
void deletenode (node*&head,int value) {
    if (head ==nullptr) {
        cout << "list is empty!" <<endl;
        return ;
    }
    //if first nod contains the value
    if (head->data==value) {
        node* temp = head;
        head = head-> next;
        delete temp;
        return ;
    }
}
node* temp =head;
while (temp->next != nullptr&&
temp->next->data !=value) {
    temp =temp->next;
}
if (temp->next == nullptr) {
    cout<< "value not found!" <<endl;
    return ;
}
{
node* nodetodelete = temp->next;
temp->next = nodetodelete->next;
delete nodetodelete;
}
//count nodes
int countnodes(node*head) {
    int count =0;
    node* temp =head;
    while (temp !=nullptr) {
        count++;
        temp =temp->next;
    }
    return count;
}
//main function
int main () {
node* head =nullptr;\
insertattail(head,10);
insertattail|(head,20);
insertattail(head,30);
cout << "original link list:";
display(head);
insertattail(head,5);
cout <<"after insert at head: ";
display(head);
insertattail(head,40);
cout << "after insert al tail: ";
display (head);
deletenode (head,20);
cout << "after deletion: ";
display(head);
cout <<"total nodes: "
<<countnodes(head) <<endl;
return 0;
}