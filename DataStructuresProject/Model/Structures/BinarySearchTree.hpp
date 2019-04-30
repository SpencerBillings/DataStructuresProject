//
//  BinarySearchTree.h
//  DataStructuresProject
//
//  Created by Billings, Spencer on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinarySearchTree_hpp
#define BinarySearchTree_hpp

#include "Tree.hpp"
#include <iostream>

using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
protected:
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    void burnTree(BinaryTreeNode<Type> * node);
    
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
    
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};

//MARK: Protected Methods
template <class Type>
bool BinarySearchTree<Type> :: isBalanced(BinaryTreeNode<Type> * current)
{
    int leftHeight = 0;
    int rightHeight = 0;
    
    if (current == nullptr)
    {
        return true;
    }
    
    leftHeight = calculateHeight(current->getLeftChild());
    rightHeight = calculateHeight(current->getRightChild());
    
    int heightDifference = abs(leftHeight - rightHeight);
    bool leftBalanced = isBalanced(current->getLeftChild());
    bool rightBalanced = isBalanced(current->getRightChild());
    
    if (heightDifference <= 1 && leftBalanced && rightBalanced)
    {
        return true;
    }
    
    return false;
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete(BinaryTreeNode<Type> * startNode, int index, int size)
{
    if (startNode == nullptr)
    {
        return true;
    }
    
    if (index >= size)
    {
        return false;
    }
    
    return (isComplete(startNode->getLeftChild(), 2 * index + 1, size) && isComplete(startNode->getRightChild(), 2 * index + 2, size));
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if (currentNode != nullptr)
    {
        inOrderTraversal(currentNode->getLeftChild());
        cout << currentNode->getData() << endl;
        inOrderTraversal(currentNode->getRightChild());
    }
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if (currentNode != nullptr)
    {
        cout << currentNode->getData() << endl;
        preOrderTraversal(currentNode->getLeftChild());
        preOrderTraversal(currentNode->getRightChild());
    }
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinaryTreeNode<Type> * currentNode)
{
    if (currentNode != nullptr)
    {
        postOrderTraversal(currentNode->getLeftChild());
        postOrderTraversal(currentNode->getRightChild());
        cout << currentNode->getData() << endl;
    }
}

template <class Type>
void BinarySearchTree<Type> :: burnTree(BinaryTreeNode<Type> * node)
{
    if(node != nullptr)
    {
        burnTree(node->getLeftChild());
        burnTree(node->getRightChild());
        delete node;
    }
}

template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getLeftMostChild(BinaryTreeNode<Type> * current)
{
    BinaryTreeNode<Type> * currentNode = current;
    BinaryTreeNode<Type> * previous = nullptr;
    
    while(currentNode != nullptr)
    {
        previous = currentNode;
        currentNode = currentNode->getLeftChild();
    }
    
    return previous;
}

template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type> :: getRightMostChild(BinaryTreeNode<Type> * current)
{
    BinaryTreeNode<Type> * currentNode = current;
    BinaryTreeNode<Type> * previous = nullptr;
    while(currentNode != nullptr)
    {
        previous = currentNode;
        currentNode = currentNode->getRightChild();
    }
    
    return previous;
}

template <class Type>
void BinarySearchTree<Type> :: removeNode(BinaryTreeNode<Type> * removeMe)
{
    BinaryTreeNode<Type> * current;
    BinaryTreeNode<Type> * previous;
    BinaryTreeNode<Type> * temp;
    
    previous = removeMe->getRoot();
    
    if(removeMe->getRightChild() == nullptr && removeMe->getLeftChild() == nullptr)
    {
        temp = removeMe;
        removeMe = nullptr;
        
        if(previous != nullptr && removeMe->getLeftChild() == nullptr)
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && removeMe->getData() > previous->getData())
        {
            previous->setRightChild(removeMe);
        }
        
        delete temp;
    }
    else if(removeMe->getRightChild() == nullptr)
    {
        temp = removeMe;
        removeMe = removeMe->getLeftChild();
        
        if(previous != nullptr && temp->getData() < previous->getData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && temp->getData() > previous->getData())
        {
            previous->setRightChild(removeMe);
        }
        
        removeMe->setRoot(previous);
        delete temp;
    }
    else if(removeMe->getLeftChild() == nullptr)
    {
        temp = removeMe;
        removeMe = removeMe->getRightChild();
        
        if(previous != nullptr && removeMe->getData() < previous->getData())
        {
            previous->setLeftChild(removeMe);
        }
        else if(previous != nullptr && removeMe->getData() > previous->getData())
        {
            previous->setRightChild(removeMe);
        }
        
        removeMe->setRoot(previous);
        delete temp;
    }
    else
    {
        current = getRightMostChild(removeMe->getLeftChild());
        previous = current->getRoot();
        removeMe->setData(current->getData());
        
        if(previous == nullptr)
        {
            removeMe->setLeftChild(current->getLeftChild());
        }
        else
        {
            previous->setRightChild(current->getLeftChild());
        }
        if(current->getLeftChild() != nullptr)
        {
            current->getLeftChild()->setRoot(removeMe);
        }
        
        delete current;
    }
    
    if(removeMe == nullptr || removeMe->getRoot() == nullptr)
    {
        this->root = removeMe;
    }
}

//MARK: Public Methods
template <class Type>
BinarySearchTree<Type> :: BinarySearchTree()
{
    this->root = nullptr;
}

template <class Type>
BinarySearchTree<Type> :: ~BinarySearchTree()
{
    burnTree(this->root);
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    inOrderTraversal(this->root);
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    preOrderTraversal(this->root);
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    postOrderTraversal(this->root);
}

template <class Type>
int BinarySearchTree<Type> :: getSize()
{
    int size = 0;
    
    size += calculateSize(this->root);
    
    return size;
}

template <class Type>
int BinarySearchTree<Type> :: calculateSize(BinaryTreeNode<Type> * current)
{
    if (current != nullptr)
    {
        return calculateSize(current->getLeftChild()) + calculateSize(current->getRightChild()) + 1;
    }
    return 0;
}

template <class Type>
int BinarySearchTree<Type> :: getHeight()
{
    return calculateHeight(this->root);
}

template <class Type>
int BinarySearchTree<Type> :: calculateHeight(BinaryTreeNode<Type> * current)
{
    if (current != nullptr)
    {
        return max(calculateHeight(current->getLeftChild()), calculateHeight(current->getRightChild())) + 1;
    }
    return 0;
}

template <class Type>
bool BinarySearchTree<Type> :: isComplete()
{
    int index = 0;
    int size = getSize();
    
    return isComplete(this->root, index, size);
}

template <class Type>
bool BinarySearchTree<Type> :: isBalanced()
{
    return isBalanced(this->root);
}

template <class Type>
bool BinarySearchTree<Type> :: contains(Type containsItem)
{
    BinaryTreeNode<Type> * current = this->root;
    if(current == nullptr)
    {
        return false;
    }
    else
    {
        while(current != nullptr)
        {
            if(containsItem == current->getData())
            {
                return true;
            }
            else if(containsItem < current->getData())
            {
                current = current->getLeftChild();
            }
            else
            {
                current = current->getRightChild();
            }
        }
        
        return false;
    }
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current == nullptr)
    {
        this->root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getData())
            {
                current = current->getLeftChild();
            }
            else if(itemToInsert > current->getData())
            {
                current = current->getRightChild();
            }
            else
            {
                cerr << "Item exists already - Exiting insert" << endl;
                delete insertMe;
                return;
            }
        }
        
        if(previous->getData() > itemToInsert)
        {
            previous->setLeftChild(insertMe);
        }
        else
        {
            previous->setRightChild(insertMe);
        }
        insertMe->setRoot(previous);
    }
}

template <class Type>
void BinarySearchTree<Type> :: remove(Type itemToRemove)
{
    if(this->root == nullptr)
    {
        cout << "The tree's empty..." << endl;
    }
    else
    {
        BinaryTreeNode<Type> * current = this->root;
        BinaryTreeNode<Type> * previous = nullptr;
        bool hasBeenFound = false;
        
        while(current != nullptr && !hasBeenFound)
        {
            if(current->getData() == itemToRemove)
            {
                hasBeenFound = true;
            }
            else
            {
                previous = current;
                if(itemToRemove < current->getData())
                {
                    current = current->getLeftChild();
                }
                else
                {
                    current = current->getRightChild();
                }
            }
        }
        
        if(current == nullptr)
        {
            cerr << "Removal unsuccessful, unable to find item" << endl;
        }
        else if(hasBeenFound)
        {
            if(current == this->root)
            {
                removeNode(this->root);
            }
            else if(itemToRemove < previous->getData())
            {
                removeNode(previous->getLeftChild());
            }
            else
            {
                removeNode(previous->getRightChild());
            }
        }
    }
}

template <class Type>
Type BinarySearchTree<Type> :: findMaximum()
{
    assert(this->root != nullptr);
    return getRightMostChild(this->root)->getData();
}

template <class Type>
Type BinarySearchTree<Type> :: findMinimum()
{
    assert(this->root != nullptr);
    return getLeftMostChild(this->root)->getData();
}

#endif /* BinarySearchTree_hpp */
