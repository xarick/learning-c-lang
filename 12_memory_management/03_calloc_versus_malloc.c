#include <stdio.h>

// malloc() - boshlang'ich qiymatlar bilan to'ldirmaydi
// void* malloc(size_t size);
// int* ptr = (int*) malloc(5 * sizeof(int));
// malloc() 5 ta butun sonni saqlash uchun xotira ajratadi. Ammo, bu xotira tasodifiy qiymatlar bilan to'ldiriladi

// calloc() - xotirani nol (0) qiymatlari bilan to'ldiradi
// void* calloc(size_t num, size_t size);
// int* ptr = (int*) calloc(5, sizeof(int));
// calloc() 5 ta butun sonni saqlash uchun xotira ajratadi va barcha elementlarni 0 qiymatlari bilan to'ldiradi.

// Xususiyat          | malloc()                                      | calloc()                                    
// --------------------|-------------------------------------------------|------------------------------------------------
// Ajratiladigan xotira | Faqat xotira ajratiladi, lekin uning qiymatlari tasodifiy bo'ladi | Xotira ajratiladi va barcha elementlar 0 bilan to'ldiriladi
// Argumentlar         | Bitta argument (xotira hajmi)                    | Ikki argument (elementlar soni va har bir element hajmi)
// To'ldirish          | Xotira tasodifiy qiymatlar bilan to'ldiriladi    | Xotira nol (0) qiymatlari bilan to'ldiriladi
// Ishlash vaqti       | Tezroq, chunki faqat xotira ajratiladi          | Biroz sekinroq, chunki xotira 0 bilan to'ldiriladi
