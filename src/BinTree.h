#include <iostream>
using namespace std;
#ifndef LAB1_BINTREE_H
#define LAB1_BINTREE_

template<typename T>
class Node {
public:
    T element;
    Node *left = nullptr;
    Node *right = nullptr;

    Node(const T &e);

    Node(const Node<T> &node);

    ~Node();
};

template<typename T>
class BinTree {
private:
    Node<T> *head;
    size_t n;
public:
    BinTree();

    BinTree(BinTree<T> &bintree);

    ~BinTree<T>();

    int count();

    Node<T> getHead();

    void add(T &item);

    Node<T>* search(const T&);
};

#endif


