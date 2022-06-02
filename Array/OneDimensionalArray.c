#include "OneDimensionalArray.h"

void InitList(int* oneDimensionalArray)
{
	oneDimensionalArray = calloc(sizeof(MaxLength, sizeof(int));

	return;
}

int Length(int* oneDimensionalArray, int arraySize)
{
	//Ã»±ØÒª
}

int LocateElem(int* oneDimensionalArray, int elemVal, int arraySize)
{
	int elemLoc = -1;
	int i = 0;
	for (i; i < arraySize; i++) {
		if (oneDimensionalArray[i] == elemVal) {
			elemLoc = i;
			break;
		}
	}

	return elemLoc;
}

int GetElem(int* oneDimensionalArray, int elemLoc, int arraySize)
{
	int elemVal = 0;

	if (elemLoc < 0 || elemLoc >= arraySize) {
		return;
	}

	elemVal = oneDimensionalArray[elemLoc];

	return elemVal;
}


void InsertElem(int* oneDimensionalArray, int elemLoc, int elemVal)
{


	return;
}

void DeleteElem(int* oneDimensionalArray, int elemLoc, int* returnElemVal);
void PrintList(int* oneDimensionalArray);
bool IsEmpty(int* oneDimensionalArray);
void DestoryList(int* oneDimensionalArray);