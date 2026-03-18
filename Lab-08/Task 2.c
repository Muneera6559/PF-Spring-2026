#include <stdio.h>

int main() {
    int seats[5][6] = {
        {0, 1, 0, 0, 1, 1},
        {1, 1, 1, 1, 0, 0},
        {0, 0, 0, 0, 0, 0},
        {1, 0, 1, 0, 1, 0},
        {1, 1, 1, 1, 1, 1}
    };

    int available = 0, maxBooked = -1, bestRow = 0;

    for (int i = 0; i < 5; i++) {
        int rowBooked = 0;
        for (int j = 0; j < 6; j++) {
            if (seats[i][j] == 0) available++; 
            else rowBooked++;
        }
        if (rowBooked > maxBooked) { 
            maxBooked = rowBooked;
            bestRow = i + 1;
        }
    }

    printf("Available seats: %d\n", available);
    printf("Row with maximum booked seats: Row %d\n", bestRow);
    return 0;
}