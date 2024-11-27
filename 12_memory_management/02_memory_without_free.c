#include <stdio.h>
#include <sys/mman.h>

int main() {
    // Xotira ajratish
    void *ptr = mmap(NULL, 1024, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);

    if (ptr == MAP_FAILED) {
        perror("Xotira ajratish xatoligi");
        return -1;
    }

    // Xotirani ishlatish...

    // Xotirani bo'shatish
    if (munmap(ptr, 1024) == -1) {
        perror("Xotirani bo'shatish xatoligi");
    }

    return 0;
}
