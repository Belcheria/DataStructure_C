#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxLength 100

void InitList(int* oneDimensionalArray);
int Length(int* oneDimensionalArray, int* arraySize);
/*
----2022/6/1----
没必要
等我看看变长数组
实际上Length可以使用sizeof(array)/sizeof(type)获取，但在函数中oneDimensionalArray作为指针传入，即始终等于8个字节
*/
int LocateElem(int* oneDimensionalArray, int elemVal, int arraySize);
int GetElem(int* oneDimensionalArray, int elemLoc, int arraySize);
void InsertElem(int* oneDimensionalArray, int elemLoc, int elemVal);
void DeleteElem(int* oneDimensionalArray, int elemLoc, int* returnElemVal);
void PrintList(int* oneDimensionalArray);
bool IsEmpty(int* oneDimensionalArray);
void DestoryList(int* oneDimensionalArray);