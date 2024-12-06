#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork(); // Yangi jarayon yaratish

    if (pid == 0) {
        // Farzand jarayon
        printf("Farzand jarayon: PID = %d\n", getpid());
        // exec() yordamida yangi dastur ishga tushirildi
        execlp("/bin/ls", "ls", "-l", NULL);
        // Agar exec() muvaffaqiyatsiz bo'lsa, quyidagi qator bajariladi
        perror("execlp xatosi");
    } else if (pid > 0) {
        // Ota jarayon
        printf("Ota jarayon: PID = %d\n", getpid());
    } else {
        // Xato yuz berdi
        perror("fork() xatosi");
    }

    return 0;
}
