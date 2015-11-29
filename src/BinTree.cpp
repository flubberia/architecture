#include "BinTree.h"
template<typename T>
BinTree<T>::BinTree() {
    n = 0;
}

template<typename T>
void BinTree<T>::add(T &item) {
    if (n == 0) {
        head = new Node<T>(item);
    }
    else {
        Node<T> *node = head;
        while (true) {
            if (node->element >= item) {
                if (node->left == nullptr) {
                    node->left = new Node<T>(item);
                    break;
                } else {
                    node = node->left;
                }
            } else {
                if (node->right == nullptr) {
                    node->right = new Node<T>(item);
                    break;
                } else {
                    node = node->right;
                }
            }
        }
    }
    n++;
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
Node<T>* BinTree<T>::search(const T& elem) {
    Node<T> *node = head;
    while (true) {
        if (node == nullptr)
            return nullptr;
        if (node->element == elem)
            return node;
        if (node->element < elem) {
            node = node->right;
        } else {
            node = node->left;
        }
    }
}

template<typename T>
Node<T>::Node(const Node<T>& node) {
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
