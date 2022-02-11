#include "tree.h"
#include <math.h>

// 给定一个树节点和点存储的级别,返回需要使用的坐标值 即存储级别为 1，使用x;即存储级别为 2，使用y;即存储级别为 3，使用z;依次类推
float GetPointKey(NODE Point, int level)
{
    int levelMode = level % DIMENSION_NUM;
    return Point.SpatialInfor[levelMode];
}

float GetNodePointKey(NODE NodePoin)
{
    return GetPointKey(NodePoin, NodePoin.level);
}

//将点Point与节点NodePoint进行比较，如果节点的点与第一个参数匹配，则返回 0，如果点在节点的“左侧”，则返回小于 0 的值，否则返回大于 0
char CompareNode(NODE Point, NODE NodePoint)
{
    char flag = 0;
    float dis = GetPointKey(Point, NodePoint.level) - GetNodePointKey(NodePoint);
    if (fabsf(dis) < 0.01)
    {
        flag = 0;
    }
    else
    {
        if (dis > 0)
        {
            flag = 1;
        }
        else
        {
            flag = -1;
        }
    }
}

// 计算点与其在穿过节点的分割线上的投影之间的距离
float splitDistance(NODE Point, NODE NodePoint)
{
    return fabsf(GetPointKey(Point, NodePoint.level) - GetNodePointKey(NodePoint));
}

void CreatTree(NODE *pRoot)
{
    pRoot = NULL;
}

NODE *Search(NODE *pRoot, NODE *pPoint)
{
}
NODE *Insert(NODE *pRoot, NODE *pPoint)
{
    NODE *pNode, *pNodeParent;
    if (pRoot == NULL)
    {
        pRoot = pPoint;
    }
    else
    {
        pNodeParent = NULL;
        pNode = pRoot;
        while (pNode != NULL)
        {
            pNodeParent = pNode;
        }
    }
}
NODE *Remove(NODE *pRoot, NODE *pPoint)
{
}