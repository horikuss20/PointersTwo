#include <iostream>
#include <vector>
#include "StackTriangle.h"
#include "HeapTriangle.h"
#include <time.h>

   int main()
{
    std::vector<StackTriangle> allStack;
    std::vector<HeapTriangle*> allHeap;
    std::vector<HeapTriangle> stackVec;
    std::vector<StackTriangle*> heapVec;

    srand(time(0));

    for (int i = 0; i < 3; i++)//allstack creation
    {
        StackTriangle t;
        t.height = rand() %20;
        t.base = rand() % 20;
        allStack.push_back(t);
    }

    //allheap creation
    HeapTriangle* t = new HeapTriangle(((rand()%20)+1), ((rand() % 20) + 1));
    HeapTriangle* t2 = t;
    t2 = t;
    allHeap.push_back(t2);
    
    //stackVec creation
    HeapTriangle ht(((rand() % 20) + 1), ((rand() % 20) + 1));
    HeapTriangle ht2 = ht;
    ht2 = ht;
    stackVec.push_back(ht2);

    for (int i = 0; i < 3; i++)//heapVec creation
    {
        StackTriangle* st = new StackTriangle;
        st->height = rand() % 20;
        st->base = rand() % 20;
        heapVec.push_back(st);
    }

    for (int i = 0; i < 3; i++)
    {
        std::cout << "All Stack: " << '\t' << "Height: " << allStack[i].height << '\t' << "Base: " << allStack[i].base << '\t' << "Area: " << allStack[i].DetermineArea(allStack[i].base, allStack[i].height) << std::endl;
        std::cout << std::endl;
        std::cout << "Heap Vector: " << '\t' << "Height: " << heapVec[i]->height << '\t' << "Base: " << heapVec[i]->base << '\t' << "Area: " << heapVec[i]->DetermineArea(heapVec[i]->base, heapVec[i]->height) << std::endl;
        std::cout << std::endl;
    }

    std::cout << "All Heap: " << '\t' << "Height: " << *allHeap[0]->_height << '\t' << "Base: " << *allHeap[0]->_base << '\t' << "Area: " << allHeap[0]->DetermineArea(allHeap[0]->_base, allHeap[0]->_height) << std::endl;
    std::cout << std::endl;
    std::cout << "Stack Vector: " << '\t' << "Height: " << *stackVec[0]._height << '\t' << "Base: " << *stackVec[0]._base << '\t' << "Area: " << stackVec[0].DetermineArea(stackVec[0]._base, stackVec[0]._height) << std::endl;
    std::cout << std::endl;

    delete t;
    //delete t2;
    for (int i = 0; i < 3; i++)
    {
        delete heapVec[i];
    }
}

int AddNumbersReturnInt(int* a, int* b)
{
    int result = *a + *b;
    return result;
}

void AddNumbersReturnVoid(int a, int b, int* sum)
{
    int value = (a + b);
    *sum = value;
}

void SwapValues(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}