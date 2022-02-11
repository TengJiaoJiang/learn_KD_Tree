#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
#include "algorithm.h"

FILE *fWrite;

int main()
{
    if ((fWrite = fopen("process.txt", "w+")) == NULL)
    {
        printf("process file can not be opened.\n");
        return -1;
    }

    NODE *midle = NULL;
    NODE point[6] = {0};
    int level = 0;

    point[0].SpatialInfor[0] = -0.5F;
    point[0].SpatialInfor[1] = 0.0F;

    point[1].SpatialInfor[0] = 0.0F;
    point[1].SpatialInfor[1] = 5.0F;

    point[2].SpatialInfor[0] = 2.0F;
    point[2].SpatialInfor[1] = -5.0F;

    point[3].SpatialInfor[0] = 1.0F;
    point[3].SpatialInfor[1] = -1.0F;

    point[4].SpatialInfor[0] = -1.0F;
    point[4].SpatialInfor[1] = 1.0F;

    point[5].SpatialInfor[0] = -1.0F;
    point[5].SpatialInfor[1] = 6.0F;

    midle = FindMiddle(point, 0, 1, level);
    if (midle != NULL)
    {
        printf("%f\n", midle->SpatialInfor[level]);
    }
    else
    {
        printf("midle = NULL\n");
    }

    fclose(fWrite);

    return 0;
}