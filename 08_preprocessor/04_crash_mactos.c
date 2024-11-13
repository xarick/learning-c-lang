// CRASH() makrosi — kod ichida xatolikni aniqlash yoki dasturni maqsadli ravishda to‘xtatish uchun ishlatiladigan yordamchi makro

// #define CRASH() (*(volatile int *)0 = 0)

// int main() {
//     CRASH();  // Dastur bu yerda halokatga uchraydi
//     return 0;
// }

#define CRASH() abort()

int main() {
    CRASH();  // Dastur bu yerda halokatga uchraydi
    return 0;
}