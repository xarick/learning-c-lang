#include <stdio.h>
#include <time.h>

int main() {
    time_t start, end;
    
    // Boshlanish vaqtini olish
    start = time(NULL);

    // Bir oz vaqt kutish (masalan, 5 soniya)
    printf("Kutish...\n");
    for (int i = 0; i < 5; i++) {
        printf("%d...\n", i + 1);
        sleep(1);
    }

    // Tugash vaqtini olish
    end = time(NULL);

    // Vaqt farqini hisoblash
    double diff = difftime(end, start);
    printf("Boshlanish va tugash vaqti orasidagi farq: %.2f soniya\n", diff);

    return 0;
}
