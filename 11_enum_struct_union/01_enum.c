#include <stdio.h>

// enum butun sonlar bo'lib, odatda 0 dan boshlab tartiblanadi
enum Kunlar {
    Dushanba, 
    Seshanba, 
    Chorshanba, 
    Payshanba, 
    Juma, 
    Shanba, 
    Yakshanba
};

enum Ranglar {
    Qizil = 10,
    Yashil = 20,
    Kok = 30
};

int main() {
    enum Kunlar bugun; // 'enum Kunlar' tipida o'zgaruvchi e'lon qilish
    bugun = Juma;      // Juma qiymati

    printf("Bugun: %d\n", bugun); // Natija: 4 (Juma 4-ga teng)

    enum Ranglar tanlanganRang;
    tanlanganRang = Yashil;

    printf("Tanlangan rangning qiymati: %d\n", tanlanganRang); // Natija: 20
    return 0;
}
