#ifndef TREE_H_
#define TREE_H_

#include <stdio.h>

#define DIMENSION_NUM 3

typedef struct node
{
    float SpatialInfor[DIMENSION_NUM];
    int level;
    struct node *left;
    struct node *right;
} NODE;

void CreatTree(NODE *pRoot);
NODE *Search(NODE *pRoot, NODE *pPoint);
NODE *Insert(NODE *pRoot, NODE *pPoint);
NODE *Remove(NODE *pRoot, NODE *pPoint);

NODE *SearchNearestNeighbor(NODE *pRoot, NODE Point);
NODE *SearchRegion(NODE *pRoot, NODE PointLeftFront, NODE PointRightBack);

// 给定一个树节点和点存储的级别,返回需要使用的坐标值 即存储级别为 1，使用x;即存储级别为 2，使用y;即存储级别为 3，使用z;依次类推
float GetPointKey(NODE Point, int level);

float GetNodePointKey(NODE NodePoin);

//将点Point与节点NodePoint进行比较，如果节点的点与第一个参数匹配，则返回 0，如果点在节点的“左侧”，则返回小于 0 的值，否则返回大于 0
char CompareNode(NODE Point, NODE NodePoint);

// 计算点与其在穿过节点的分割线上的投影之间的距离
float splitDistance(NODE Point, NODE NodePoint);

#endif // TREE_H_