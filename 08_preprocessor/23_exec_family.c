// int execl(const char *path, const char *arg, ...);
// execl("/bin/ls", "ls", "-l", NULL);

// int execp(const char *file, char *const argv[]);
// execp("ls", argv);  // Bu "/bin/ls" yoki tizimning izlash yo'lida mavjud bo'lgan "ls" ni ishga tushuradi

// int execle(const char *path, const char *arg, ..., char *const envp[]);
// execle("/bin/ls", "ls", "-l", NULL, envp);

// int execvp(const char *file, char *const argv[]);
// execvp("ls", argv);  // Tizim yo'lidan faylni izlab, "ls" ni ishga tushiradi.

// int execvpe(const char *file, char *const argv[], char *const envp[]);
// execvpe("ls", argv, envp);  // Tizim yo'lidan "ls" ni ishga tushiradi, va envp orqali atrof-muhit o'zgaruvchilari beriladi.

#include <stdio.h>
#include <unistd.h>

int main() {
    // linux da
    // char *argv[] = {"ls", "-l", NULL};
    // execvp("ls", argv);
    // perror("execvp failed"); // agar muvaffaqiyatsiz bo'lsa

    // Windows tizimida 'dir' buyrug'ini ishlatish
    system("dir");
    return 0;
}
