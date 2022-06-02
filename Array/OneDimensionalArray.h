#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MaxLength 100

void InitList(int* oneDimensionalArray);
int Length(int* oneDimensionalArray, int* arraySize);
/*
----2022/6/1----
û��Ҫ
���ҿ����䳤����
ʵ����Length����ʹ��sizeof(array)/sizeof(type)��ȡ�����ں�����oneDimensionalArray��Ϊָ�봫�룬��ʼ�յ���8���ֽ�
*/

/*
----2022/6/2----
C Primer Plus�еı䳤����ָ�ľ��Ƕ�̬���ٵ�����
�����鳤�Ȼ����ڴ���ʱָ��
���鳤�Ȳ����������������ڷ����仯


*/
int LocateElem(int* oneDimensionalArray, int elemVal, int arraySize);
int GetElem(int* oneDimensionalArray, int elemLoc, int arraySize);
void InsertElem(int* oneDimensionalArray, int elemLoc, int elemVal);
void DeleteElem(int* oneDimensionalArray, int elemLoc, int* returnElemVal);
void PrintList(int* oneDimensionalArray);
bool IsEmpty(int* oneDimensionalArray);
void DestoryList(int* oneDimensionalArray);