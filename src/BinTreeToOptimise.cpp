#include "../BinTree.h"

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
Node<T> *BinTree<T>::search(const T &elem) {
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

template class Node<int>;
template class BinTree<int>;