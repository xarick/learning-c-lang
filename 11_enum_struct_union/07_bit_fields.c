#include <stdio.h>

// unsigned int odatda 32 bitni egallayd
struct Masalan {
    unsigned int bayroq : 1;  // 1 bit
    unsigned int yosh : 7;   // 7 bit
    unsigned int kod : 4;    // 4 bit
};

int main() {
    struct Masalan obj;

    obj.bayroq = 1;
    obj.yosh = 127; // max: 127 - 1111111
    obj.kod = 9;

    printf("Bayroq: %u\n", obj.bayroq);
    printf("Yosh: %u\n", obj.yosh);
    printf("Kod: %u\n", obj.kod);

    return 0;
}
