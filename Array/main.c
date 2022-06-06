#include "main.h"

int main() {
	//简单测试，有空再加界面
	int* a = NULL;
	a = InitList(&a);
	int i = 0;
	int returnElemVal;

	a[0] = 1;a[1] = 2;a[2] = 3;a[3] = 4;

	//for (i; i < MaxLength; i++) { a[i] = i + 1; }

	//PrintList(a);
	//Length(a);
	//LocateElem(a, 3);
	//GetElem(a, 3);
	//InsertElem(a, 5, 5);
	//DeleteElem(a, 99, &returnElemVal);
	//printf("Deleted element = %d\n", returnElemVal);
	//IsEmpty(a);
	//DestoryList(&a);
	//IsEmpty(a);

	system("pause");
	return 0;
/*
----2022/6/2----
说明C语言中二维数组的储存方式
将每个列数组看作元素存在一个一维数组中
行首元素a[0]，a[1]，a[2]看作列数组的数组名
因此在监视中只需要监视a,3

	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	int j = 0;

	printf("a:\t%p\n", a);
	printf("a[0]:\t%p\n", a[0]);
	printf("a+1:\t%p\n", a + 1);
	printf("a[0]+1:\t%p\n", a[0] + 1);


	for (i; i < 3; i++) {
		for (j; j < 4; j++) {
			printf("%d\t%p; ", a[i][j], &a[i][j]);
		}
		printf("\n");
		j = 0;
	}

	return 0;
*/
}