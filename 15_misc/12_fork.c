#include <stdio.h>
#include <unistd.h>

// int main() {
//     pid_t pid = fork(); // Yangi jarayon yaratiladi

//     if (pid > 0) {
//         // Ota jarayon
//         printf("Bu ota jarayon. PID: %d\n", getpid());
//     } else if (pid == 0) {
//         // Bola jarayon
//         printf("Bu bola jarayon. PID: %d\n", getpid());
//     } else {
//         // Xato
//         printf("fork() xatoga uchradi.\n");
//     }

//     return 0;
// }

// fork - windowsda ishlamadi 
int main() {
    for (int i = 0; i < 2; i++) {
        fork();
        printf("Jarayon ishlamoqda. PID: %d\n", getpid());
    }
    return 0;
}