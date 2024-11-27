#include <stdio.h>

struct Talaba {
    int yosh;
    float baho;
    char ism[50];
};

int main() {
    struct Talaba talaba1;

    talaba1.yosh = 20;
    talaba1.baho = 4.5;
    strcpy(talaba1.ism, "Ali"); // Matn uchun strcpy ishlatiladi

    printf("Talaba: %s\n", talaba1.ism);
    printf("Yoshi: %d\n", talaba1.yosh);
    printf("Bahosi: %.1f\n", talaba1.baho);

    struct Talaba talabalar[3];

    strcpy(talabalar[0].ism, "Ali");
    talabalar[0].yosh = 20;
    talabalar[0].baho = 4.2;

    strcpy(talabalar[1].ism, "Olim");
    talabalar[1].yosh = 22;
    talabalar[1].baho = 3.9;

    strcpy(talabalar[2].ism, "Laylo");
    talabalar[2].yosh = 21;
    talabalar[2].baho = 4.7;

    // Ma'lumotlarni chiqarish
    for (int i = 0; i < 3; i++) {
        printf("Talaba %d: %s, Yoshi: %d, Bahosi: %.1f\n", 
            i + 1, talabalar[i].ism, talabalar[i].yosh, talabalar[i].baho);
    }

    return 0;
}
