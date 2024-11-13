#include <stdio.h>

#define print_type(x) \
    _Generic((x), \
        int: "Bu int turidagi qiymat", \
        double: "Bu double turidagi qiymat", \
        char *: "Bu char pointer (string) turidagi qiymat" \
    )

int main() {
    int a = 5;
    double b = 5.5;
    char *c = "Hello";

    printf("%s\n", print_type(a));  // int uchun
    printf("%s\n", print_type(b));  // double uchun
    printf("%s\n", print_type(c));  // char * uchun

    printf("%s\n", print_type(b));

    return 0;
}
