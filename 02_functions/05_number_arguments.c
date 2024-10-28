#include <stdarg.h> 
#include <stdio.h> 

int min(int arg_count, ...) 
{ 
    int i; 
    int min, a; 

    // argumentlarni saqlash uchun 
    va_list ap; 

    // argumentlar ro‘yxatini ishga tushiradi
    va_start(ap, arg_count);
    
    // keyingi o‘zgaruvchi argumenti olinadi
    min = va_arg(ap, int); 
        
    for(i = 2; i <= arg_count; i++) { 
        if((a = va_arg(ap, int)) < min) 
        min = a; 
    }

    // argumentlar ro‘yxatini yakunlaydi
    va_end(ap); 
    return min; 
}

int main() 
{ 
    int count = 5; 
    printf("Minimum value is %d", min(count, 12, 67, 6, 7, 100)); 
    getchar();

    return 0; 
} 
