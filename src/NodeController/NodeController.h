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
    Timer mergeTimer;
    int partition(int first, int last);
    void quicksort(int first, int last);
    void swap(int first, int last);
    int * mergeData;
    void testList();
    void searchTest();
    void doBogo();
    void doMergesort();
    void mergesort(int data[], int size);
    void merge(int data[], int sizeOne, int sizeTwo);
    void sortData();
public:
    NodeController();
    virtual ~NodeController();
    void start();
};

#endif /* NODECONTROLLER_NODECONTROLLER_H_ */
