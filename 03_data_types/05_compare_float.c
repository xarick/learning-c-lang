// float a = 0.1f;
// if (a == 0.1) { // NOT RECOMMENDED
//     printf("Equal\n");
// } else {
//     printf("Not Equal\n");
// }

#include <stdio.h>
#include <math.h>

int main() {
    float a = 0.1f;
    float b = 0.1;
    float epsilon = 0.00001f; // Yaqinlik uchun minimal qiymat

    // fabs() - musbat qaytaradi
    if (fabs(a - b) < epsilon) {
        printf("Approximately equal\n");
    } else {
        printf("Not equal\n");
    }

    return 0;
}
