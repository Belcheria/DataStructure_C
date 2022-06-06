#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxLength 100

int* InitList(int* oneDimensionalArray);
int Length(int* oneDimensionalArray);
int LocateElem(int* oneDimensionalArray, int elemVal);
int GetElem(int* oneDimensionalArray, int elemLoc);
void InsertElem(int* oneDimensionalArray, int elemLoc, int elemVal);
void DeleteElem(int* oneDimensionalArray, int elemLoc, int* returnElemVal);
void PrintList(int* oneDimensionalArray);
bool IsEmpty(int* oneDimensionalArray);
void DestoryList(int** oneDimensionalArray);