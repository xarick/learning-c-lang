#include <stdio.h>
#pragma pack(1) // Paddingni yo'q qilish

struct Misol {
    char a;   // 1 bayt
    char b;   // 1 bayt
    int c;    // 4 bayt
};

// no (#pragma pack(1))
// struct __attribute__((packed)) Misol {
//     char a;   // 1 bayt
//     char b;   // 1 bayt
//     int c;    // 4 bayt
// };

int main() {
    printf("Struct hajmi: %zu bayt\n", sizeof(struct Misol));
    return 0;
}
