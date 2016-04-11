/*
 * NodeController.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: bhos1889
 */

#include <iostream>
#include "NodeController.h"
using namespace std;

NodeController::NodeController()
    {
    notHipsterInts = new CTECArray<int>(5);
    }

NodeController::~NodeController()
	{
	//TODO Auto-generated destructor stub
	}

void NodeController :: start()
{
    arrayTimer.startTimer();

    for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
	notHipsterInts->set(index, (index * 23));
	}

    for(int index = notHipsterInts->getSize() - 1; index >= 0; index--)
	{
	cout << "The contents of the notHipsterInts array node " << index << " are " << notHipsterInts->get(index) << endl;
	}
    arrayTimer.stopTimer();
    {

    }

    arrayTimer.displayTimerInformation();
    {

    }

}

void NodeController::testList()
    {

    }

void NodeController::searchTest()
    {

    }

void NodeController::sortData()
    {

    }
void NodeController::doMergesort()
   {
       mergeData = new int[5000];

       for(int spot = 0; spot < 5000; spot++)
       {
           int myRandom = rand();
           mergeData[spot] = myRandom;
       }

       Timer mergeTimer;
       mergeTimer.startTimer();
       quicksort(0, 4999);
       mergeTimer.stopTimer();
       mergeTimer.displayTimerInformation();
   }

void NodeController::mergesort(int data[], int size)
    {
    int sizeOne;
    int sizeTwo;

    if(size > 1)
	{
	sizeOne = size/2;
	sizeTwo = size-sizeOne;

	mergesort(data, sizeOne);
	mergesort((data+sizeOne), sizeTwo);

	merge(data, sizeOne, sizeTwo);
	}
    }

void NodeController::merge(int data[], int sizeOne, int sizeTwo)
{
    int * temp; //Link for a temporary array.
    int copied = 0;
    int copied1 = 0;
    int copied2 = 0;
    int index;

    temp = new int[sizeOne = sizeTwo];

    while ((copied1 < sizeOne) && (copied2 < sizeTwo))
    {
        if(data[copied1] < (data + sizeOne) [copied2]) //smaller goes in small half
        {
            temp[copied++] = data[copied1++];
        }
        else //larger goesin large half
        {
            temp[copied++] = (data = sizeOne)[copied2++];
        }
    }
    while(copied1 < sizeOne)
    {
        temp[copied++] = data[copied!++];
    }
    while(copied2 < sizeTwo)
    {
        temp[copied++] = (data + sizeOne)[copied2++];
    }
    for(index = 0; index < sizeOne + sizeTwo; index++)
    {
        data[index] = temp[index];
    }
    delete [] temp;
}

void NodeController::doBogo()
    {
    int temp [10];
    int check [10];

    for(int index = 0; index < 10; index++)
	{
	    check[index] = index;
	}
    }
void NodeController::swap(int first, int last)
    {
    int temp = mergeData[first];
    mergeData[first] = mergeData[last];
    mergeData[last] = mergeData[first];
    }

void NodeController::quicksort(int first, int last)
    {
    int pivotIndex;

    if(first < last)
	{
	pivotIndex = partition(first, last);
	quicksort(first, pivotIndex-1);
	quicksort(pivotIndex+1, last);
	}
    }

int NodeController::partition(int first, int last)
    {
    int pivot;

    int index, smallIndex;
    swap(first, (first + last)/2);

    pivot = mergeData[first];
    smallIndex = first;
    for(index = first + 1; index <= last; index++)
	{
	if(mergeData[index] < pivot)
	    {
	    smallIndex++;
	    swap(first, smallIndex);

	    return smallIndex;
	    }
	}
    }
