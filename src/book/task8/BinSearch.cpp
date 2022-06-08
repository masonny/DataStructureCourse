#include <stdio.h>
#define MaxSize 100
typedef int KeyType;
typedef char ElemType;
typedef struct
{	KeyType key;		//存放关键字,KeyType为关键字类型
	ElemType data;		//其他数据,ElemType为其他数据的类型
} SqType;
int BinSearch(SqType R[],int n,int k)	//拆半查找算法
{	int low=0,high=n-1,mid;
	while (low<=high)				//当前区间存在元素时循环
	{	mid=(low+high)/2;			//求查找区间的中间位置
		if (R[mid].key==k)			//查找成功返回其逻辑序号mid+1
			return mid+1;			//找到后返回其逻辑序号mid+1
		else if (R[mid].key>k)		//继续在R[low..mid-1]中查找
			high=mid-1;
		else						//R[mid].key<k
			low=mid+1;				//继续在R[mid+1..high]中查找
	}
	return 0;						//若当前查找区间没有元素时返回0
}
