// int matrix[2][3]; // 2 qator, 3 ustun

// int matrix[2][3] = {
//     {1, 2, 3},
//     {4, 5, 6}
// };

#include <stdio.h>

int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Massiv hajmi: %zu bayt\n", sizeof(matrix));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
