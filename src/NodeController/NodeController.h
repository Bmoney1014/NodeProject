/*
 * NodeController.h
 *
 *  Created on: Jan 29, 2016
 *      Author: bhos1889
 */

#ifndef NODECONTROLLER_NODECONTROLLER_H_
#define NODECONTROLLER_NODECONTROLLER_H_

#include <iostream>
#include "../Model/Node.h"
#include "../Model/Node.cpp"

class NodeController
{
private:
	Node<int> intNode;
public:
	NodeController();
	virtual ~NodeController();
};

#endif /* NODECONTROLLER_NODECONTROLLER_H_ */
