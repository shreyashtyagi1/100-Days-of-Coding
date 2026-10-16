//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.//

#include <stdio.h>
int main() {

    int totalseconds,hours,minutes,seconds,remainingseconds;

    printf("Enter time in seconds: ");
    if (scanf("%d", &totalseconds) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    hours = totalseconds / 3600;            
    remainingseconds = totalseconds % 3600;
    minutes = remainingseconds / 60;        
    seconds = remainingseconds % 60;

    printf("Formatted time -> %d:%d:%d\n", hours,minutes,seconds);
    return 0;
}