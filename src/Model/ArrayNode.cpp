/*
 * ArrayNode.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: bhos1889
 */

#include "Node.h"
#include <iostream>

template <class Type>
Node<Type>::Node()
{
    value = 0;
    pointers = nullptr;
}

template <class Type>
Node<Type> :: ~Node()
{

}

template <class Type>
Type Node<Type> :: getValue()
{
    return this->value;
}

template <class Type>
void Node<Type> :: setValue(const Type& value)
{
    this->value = value;
}

template <class Type>
Node<Type> * Node<Type> :: getPointers()
{
    return this ->pointers;
}




