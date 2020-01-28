/*
 CH-230-A
 a3_p2.c
 Mahiem Agrawal
 m.agrawal@jacobs-university.de
 */

#include <stdio.h>
int main(){
    char ch;
    printf("Enter a lowercase character ");
    scanf("%c", &ch);
    int n,i;
    printf("Enter an integer ");
    scanf("%d",&n);
    for (i=1 ;i <= n; i++){             // Runs the program till n 
        printf("%c-%d, ",ch,i);                 
                            
        }
    return 0;
}
