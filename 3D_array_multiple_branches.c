/*
Name:Mark Mbugua
Reg No:CT101/G/26487/25
Description:2D array-room occupancy 
*/

#include <stdio.h>

int main() {

    
    int chain[3][5][10] = {

        
        {
            {1,0,1,1,0,1,0,1,0,1},
            {1,1,0,0,1,1,0,0,1,0},
            {0,0,1,1,1,0,1,0,0,1},
            {1,1,1,0,0,0,1,1,1,0},
            {0,1,0,1,1,0,1,0,1,1}
        },

        
        {
            {0,1,1,0,0,1,1,1,0,0},
            {1,0,1,1,0,1,1,0,1,1},
            {0,1,0,0,1,0,1,1,0,1},
            {1,1,1,1,0,0,1,0,1,0},
            {0,0,0,1,1,1,0,1,0,1}
        },

        
        {
            {1,1,1,1,1,0,0,0,1,1},
            {0,0,1,0,1,1,1,1,0,0},
            {1,0,0,1,1,1,0,0,1,0},
            {0,1,1,0,0,1,1,1,0,1},
            {1,1,0,1,0,1,1,0,0,1}
        }
    };

    int totalOccupied = 0;

    
    for(int b = 0; b < 3; b++) {
        printf("Branch %d:\n", b+1);

        for(int f = 0; f < 5; f++) {
            for(int r = 0; r < 10; r++) {
                printf("%d ", chain[b][f][r]);
                totalOccupied += chain[b][f][r];
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("Total occupied rooms = %d\n", totalOccupied);

    return 0;
}