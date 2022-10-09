//include the headers that you need here.
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<iostream>

typedef struct
{
    int data;
    node* next;
}node;


typedef struct
{
    int len;
    node ele;
}CArray;

void array_initial(CArray &array)
{
    
}

inline int array_capacity(CArray &array)
{
}

inline int array_size(CArray &array)
{
}

void array_recap(CArray &array, int capacity)
{
}

inline int &array_at(CArray &array, int index)
{
}

void array_append(CArray &array, int element)
{
}
void array_insert(CArray &array, int index, int element)
{
}

void array_copy(CArray &src, CArray &dst)
{
}

bool array_compare(CArray &array1, CArray &array2)
{
}

void array_destroy(CArray &array)
{
}

/*************************************************************************
*下面是一个给你们方便在本地端测试的main函数
*实际上，我们OJ的测试面函数并不是这样的
*所以如果你在你的本地端用这个main函数测试通过了，并不代表在OJ上能够通过
***********************************************************************/


int main(int argc, char *argv[])
{
    CArray array;
    array_initial(array);
    array_recap(array, 10);
    assert(array_capacity(array) == 10);
    //////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < 20; ++i)
    {
        array_append(array, i);
    }
    assert(array_size(array) == 20);
    for (int i = 0; i < array_size(array); ++i)
    {
        assert(array_at(array, i) == i);
    }
    //////////////////////////////////////////////////////////////////////////
    CArray array2, array3;
    array_initial(array2);
    array_initial(array3);
    array_copy(array, array2);
    assert(array_compare(array, array2) == true);
    array_copy(array, array3);
    assert(array_compare(array, array3) == true);
    //////////////////////////////////////////////////////////////////////////
    array_insert(array2, 2, 3);
    assert(array_compare(array, array2) == false);
    //////////////////////////////////////////////////////////////////////////
    array_at(array3, 2) = 5;
    assert(array_compare(array, array3) == false);
    //////////////////////////////////////////////////////////////////////////
    array_destroy(array);
    array_destroy(array2);
    array_destroy(array3);
    return 0;
}


