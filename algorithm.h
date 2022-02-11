#ifndef ALGORITHM_H_
#define ALGORITHM_H_
#include "tree.h"

// 对 pRoot[start, end) 的NODE 进行 第level维度数据进行升序排序
void Sort(NODE *pRoot, int start, int end, int level);

// 找到 pRoot[start, end) 第level维度数据 的中位数
NODE *FindMiddle(NODE *pRoot, int start, int end, int level);

#endif // ALGORITHM_H_