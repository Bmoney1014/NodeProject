/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: bhos1889
 */

#ifndef NODE_H_
#define NODE_H_

template <class Type>
class Node
{
private:
	Type value;		//Container for the value stored in the Node.
	Node * pointers;
public:
	Node();
	Node(Type value);
	virtual ~Node();
	Type getValue();
	void setValue(Type value);
	Node * getPointers();
};

#endif /* NODE_H_ */
