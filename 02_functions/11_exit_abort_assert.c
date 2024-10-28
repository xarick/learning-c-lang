// exit()	Dasturdan normal chiqish	Barcha resurslarni tartibli tozalash
// abort()	Dasturdan keskin chiqish	Favqulodda to‘xtatish kerak bo‘lganda
// assert()	Xato shartlarini aniqlash	Shart bajarilmagan bo‘lsa, xato xabarini ko‘rsatadi
#include <stdlib.h>
#include <assert.h>

int main() {
    printf("dastur yakunlanmoqda\n");
    // 0 — muvaffaqiyatli tugatilish
    // 1 - xatolik sababli tugatilish
    exit(0);

    // Agar age manfiy bo'lsa, dastur to'xtaydi (false bo'lsa)
    int age = -5;
    assert(age >= 0);
}

// abort() ishlatishdan qochish kerak, chunki bu ochiq fayllarni yopmasligi va keshlarni tozalamasligi mumkin
