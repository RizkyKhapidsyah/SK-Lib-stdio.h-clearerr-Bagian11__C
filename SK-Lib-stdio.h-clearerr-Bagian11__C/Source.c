#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main(void) {
    int c;
    putc('c', stdin);
    
    if (ferror(stdin)) {
        perror("Write error");
        clearerr(stdin);
    }

    printf("Will input cause an error? ");
    c = getc(stdin);

    if (ferror(stdin)) {
        perror("Read error");
        clearerr(stdin);
    } else {
        printf("No read error\n");
    }
      
    _getch();
    return 0;
}