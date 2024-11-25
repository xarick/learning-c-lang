// ispunct() — <ctype.h> - Bu funksiya berilgan belgi tinish belgisi ekanligini aniqlaydi
// Tinish belgilariga quyidagilar kiradi: ! " # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \ ] ^ _ { | } ~

// (true): Agar belgi tinish belgisi bo‘lsa.
// (false): Agar belgi tinish belgisi bo‘lmasa.

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Belgini kiriting: ");
    scanf("%c", &ch);

    if (ispunct(ch)) {
        printf("'%c' tinish belgisi.\n", ch);
    } else {
        printf("'%c' tinish belgisi emas.\n", ch);
    }

    return 0;
}
