#include <stdio.h>
#include <stddef.h>  // offsetof() makrosini ishlatish uchun kerak

struct Student {
    int id;
    char name[20];
    float grade;
};

int main() {
    printf("id ning ofseti: %zu bayt\n", offsetof(struct Student, id));
    printf("name ning ofseti: %zu bayt\n", offsetof(struct Student, name));
    printf("grade ning ofseti: %zu bayt\n", offsetof(struct Student, grade));
    return 0;
}
