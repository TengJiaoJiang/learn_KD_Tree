#include "algorithm.h"
#include <string.h>
#include "debug.h"

void Sort(NODE *pRoot, int start, int end, int level)
{
    int i, j;
    NODE temp;
    for (i = start; i < end; i++)
    {
        for (j = i + 1; j < end; j++)
        {
            if (pRoot[i].SpatialInfor[level] > pRoot[j].SpatialInfor[level])
            {
                memcpy(&temp, &pRoot[i], sizeof(NODE));
                memcpy(&pRoot[i], &pRoot[j], sizeof(NODE));
                memcpy(&pRoot[j], &temp, sizeof(NODE));
            }
        }
    }

#ifdef DEBUG_JTJ_

    fprintf(fWrite, "\n\n in function ->  void Sort(NODE *pRoot, int %d, int %d, int %d)\n", start, end, level);
    for (i = start; i < end; i++)
    {
        fprintf(fWrite, "	level = %d pRoot[%d].SpatialInfor = [%f, %f]\n", level, i, pRoot[i].SpatialInfor[0], pRoot[i].SpatialInfor[1]);
    }

#endif // DEBUG_JTJ_
}

NODE *FindMiddle(NODE *pRoot, int start, int end, int level)
{
    if (start >= end)
    {
        return NULL;
    }

    Sort(pRoot, start, end, level);

#ifdef DEBUG_JTJ_

    fprintf(fWrite, "\n\n in function ->  *FindMiddle(NODE *pRoot, int %d, int %d, int %d)", start, end, level);
    fprintf(fWrite, "	middle index = %d\n", (int)((start + end) / 2.0));

#endif // DEBUG_JTJ_
    return pRoot + (int)((start + end) / 2.0);
}
