#include "../BinTree.h"

template<typename T>
BinTree<T>::BinTree() {
    n = 0;
}

template<typename T>
BinTree<T>::~BinTree() {
    if (n > 0)
        head->~Node();
}

template<typename T>
BinTree<T>::BinTree(BinTree<T> &bintree) {
    if (bintree.count() > 0) {
        head = new Node<T>(getHead());
    }
}

template<typename T>
Node<T> BinTree<T>::getHead() {
    return *head;
}

template<typename T>
int BinTree<T>::count() {
    return n;
}

template<typename T>
Node<T>::Node(const Node<T> &node) {
    element = node.element;
    if (node.left != nullptr)
        left = new Node<T>(*node.left);
    if (node.right != nullptr)
        right = new Node<T>(*node.right);
}

template<typename T>
Node<T>::~Node() {
    if (left != nullptr) {
        delete left;
    }
    if (right != nullptr) {
        delete right;
    }
}

template<typename T>
Node<T>::Node(const T &e) {
    element = e;
}

template class Node<int>;
template class BinTree<int>;