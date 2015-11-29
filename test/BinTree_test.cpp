#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello

#include <boost/test/unit_test.hpp>
#include "../src/BinTree.cpp"

BOOST_AUTO_TEST_CASE(constructor_test) {
    BinTree<int> tree;
    BOOST_CHECK(tree.count() == 0);
}

BOOST_AUTO_TEST_CASE(add_test) {
    BinTree<int> tree;
    int test_set[] = {5, 12, 7, 3, 8, 15};
    for(int i=0; i<6; i++){
        tree.add(test_set[i]);
    }
    BOOST_CHECK(tree.count() == 6);
    BOOST_CHECK(tree.getHead().element==5);
    BOOST_CHECK(tree.getHead().left->element==3);
    BOOST_CHECK(tree.getHead().right->element==12);
    BOOST_CHECK(tree.getHead().right->left->element==7);
    BOOST_CHECK(tree.getHead().right->right->element==15);
    BOOST_CHECK(tree.getHead().right->left->right->element==8);
}

BOOST_AUTO_TEST_CASE(search_test_int) {
    BinTree<int> tree;
    int test_set[] = {5, 12, 7, 3, 8, 15};
    for(int i=0; i<6; i++){
        tree.add(test_set[i]);
    }
    BOOST_CHECK(tree.search(5)->element==5);
    BOOST_CHECK(tree.search(12)->element==12);
    BOOST_CHECK(tree.search(7)->element==7);
    BOOST_CHECK(tree.search(3)->element==3);
    BOOST_CHECK(tree.search(8)->element==8);
    BOOST_CHECK(tree.search(15)->element==15);
    BOOST_CHECK(tree.search(-1)== nullptr);
    BOOST_CHECK(tree.search(9)== nullptr);
    BOOST_CHECK(tree.search(4)== nullptr);
    BOOST_CHECK(tree.search(13)== nullptr);
}