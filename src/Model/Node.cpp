/*
 * Node.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: bhos1889
 */

#include "Node.h"
#include <iostream>
//using amespace std;
template <class Type>
Node<Type>::Node()
{
	value = 0;
	pointers = nullptr;

}

template <class Type>
Node<Type>::Node(Type vvalue)
{
	this->value = value;
	pointers = nullptr;
}

template <class Type>
Node<Type>::~Node()
{

}

template <class Type>
Type Node<Type> :: getValue()
{
	return this->value;
}

template <class Type>
void Node<Type> :: Node()

template <class Type>

Node<Type> * Node<Type> :: getPointers()
{
	return this->pointers;
}
