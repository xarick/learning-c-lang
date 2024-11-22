// satrda boshqa satrning istalgan belgisini qidiradi. 
// Agar mos keladigan birinchi belgi topilsa, uning manzilini qaytaradi; 
// aks holda, NULL qaytaradi

#include <stdio.h>
#include <string.h>

// topilganidan boshlab qolgan qismni qaytaradi
int main() {
    char str1[] = "hello world";
    char str2[] = "aliou"; // Qidiriladigan unli harflar

    char *result = strpbrk(str1, str2);

    if (result) {
        printf("Birinchi mos keladigan belgi: '%c'\n", *result);
        printf("Satrning qolgan qismi: \"%s\"\n", result);
    } else {
        printf("Mos keladigan belgi topilmadi.\n");
    }

    return 0;
}
