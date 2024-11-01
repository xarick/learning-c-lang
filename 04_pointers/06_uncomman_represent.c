#include <stdio.h>

int main()
{
    int arr[2] = {0,1};
    printf("First Element = %d\n",arr[0]);

    for (int i = 0; i < 2; i++)
        printf("%d ", *(arr + i));

    // getchar() foydalanuvchidan biror belgi kiritishini kutadi
    // like cout << endl;
    getchar();

    return 0;
}
