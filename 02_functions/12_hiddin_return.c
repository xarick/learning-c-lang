#include <stdio.h> 
fun(int x) 
{ 
	return x*x; 
} 

int main(void) 
{ 
	printf("%d", fun(10)); 
	return 0; 
}

// C tilining eski versiyalarida, agar funksiyaning qaytish turi e'lon qilinmasa, 
// kompilyator avtomatik ravishda int turini qabul qilardi.

// yangi standartlarda har doim return turini ko‘rsatish tavsiya etiladi
