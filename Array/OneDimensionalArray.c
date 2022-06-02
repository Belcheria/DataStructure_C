#include "OneDimensionalArray.h"

int* InitList(int* oneDimensionalArray)
{
	oneDimensionalArray = calloc(MaxLength, sizeof(int));
	//calloc在分配内存空间之后会初始化为0
	printf("Empty array[%d] has been initalized\n", MaxLength);

	return oneDimensionalArray;
}

int Length(int* oneDimensionalArray)
{
	int arrayLength = 0;

	for (arrayLength; arrayLength < MaxLength; arrayLength++) {
		if (oneDimensionalArray[arrayLength] == 0) {
			break;
		}
	}

	printf("Array Length is %d\n", arrayLength);
	return arrayLength;

}

int LocateElem(int* oneDimensionalArray, int elemVal)
{
	int arrayLength = Length(oneDimensionalArray);

	int elemLoc = -1;

		int i = 0;
		for (i; i < arrayLength; i++) {
			if (oneDimensionalArray[i] == elemVal) {
				elemLoc = i;
				break;
			}
		}
		if (elemLoc == -1) {
			printf("Element not found\n");
			return elemLoc;
		}
		else {
			printf("Element location is a[%d]\n", elemLoc);
			return elemLoc;
		}
		
}


int GetElem(int* oneDimensionalArray, int elemLoc)
{
	int arrayLength = Length(oneDimensionalArray);
	int elemVal = 0;

	if (elemLoc < 0 || elemLoc >= arrayLength) {
		printf("Error, array bound\n");
		return;
	}

	elemVal = oneDimensionalArray[elemLoc];
	printf("Array[%d] value is %d\n", elemLoc, elemVal);

	return elemVal;
}


void InsertElem(int* oneDimensionalArray, int elemLoc, int elemVal)
{
	int arrayLength = Length(oneDimensionalArray);
	int i = arrayLength - 1;

	if (arrayLength == MaxLength) {
		printf("Array is full, insert failed\n");
		return;
	}

	if (elemLoc > arrayLength) {
		printf("Location out of range, insert failed\n");
		return;
	}

	if (elemLoc == arrayLength) {
		oneDimensionalArray[arrayLength] = elemVal;
		PrintList(oneDimensionalArray);
	}
	else {
		for (i; i >= elemLoc; i--) {
			oneDimensionalArray[i + 1] = oneDimensionalArray[i];
		}
		oneDimensionalArray[elemLoc] = elemVal;
		PrintList(oneDimensionalArray);
	}
		

	return;
}

void DeleteElem(int* oneDimensionalArray, int elemLoc, int* returnElemVal)
{
	int arrayLength = Length(oneDimensionalArray);
	int i = elemLoc;

	if (elemLoc < 0 || elemLoc > arrayLength - 1) {
		printf("Location out of range, delete failed\n");
		return;
	}
	*returnElemVal = oneDimensionalArray[elemLoc];
	if (elemLoc != arrayLength - 1) {
		for (i; i < arrayLength - 1; i++) {
			oneDimensionalArray[i] = oneDimensionalArray[i + 1];
		}
	}

	oneDimensionalArray[arrayLength - 1] = 0;
	PrintList(oneDimensionalArray);

	return;
}

void PrintList(int* oneDimensionalArray)
{
	int arrayLength = Length(oneDimensionalArray);
	int i = 0;
	
	
	for (i; i < arrayLength; i++) {
		printf("a[%d] = %d;\n", i, oneDimensionalArray[i]);
	}

	return;
}

bool IsEmpty(int* oneDimensionalArray)
{
	if (oneDimensionalArray == NULL) {
		printf("No exsit array\n");
		return true;
	}

	int arrayLength = Length(oneDimensionalArray);
	if (arrayLength == 0) {
		printf("Array is empty\n");
		return true;
	}
	else {
		printf("Array is not empty\n");
		return false;
	}
}

void DestoryList(int** oneDimensionalArray)
{
	free(*oneDimensionalArray);
	*oneDimensionalArray = NULL;

	return;
}