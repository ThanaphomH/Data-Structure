#include <iostream>

using namespace std;

struct node {
    int data;
    node* left;
    node* right;
};

int main() {
    node *n = new node();
    n->data = 10;

    node *t = new node();
    t->data = 20;

    node *i = n->left;
    n->left = t;

    cout << n->data << " " << n->left->data;

    return 0;
}