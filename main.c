#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

    void swap(char *a, char *b){char t = *a; *a = *b; *b = t;}
    bool letters_in_order(char a, char b){return tolower(a) <= tolower(b);}
    bool numbers_in_ascending_order(char a, char b){return a <= b;}

    void bubble_sort(char a[], int n, bool (*ok)(char, char)){
    bool s; do{s = 0; for(char i = 1; i<n; i++) if(!ok(a[i-1], a[i])){swap(&a[i-1], &a[i]); s = 1;}}

    while(s);}

int main (void) {
    char letter_arr1[] = {'z', 'S', 's', 'a'}; 
    char number_arr1[] = {4, -1, 2, 9};
    bubble_sort(letter_arr1, 4, letters_in_order);
    bubble_sort(number_arr1, 4, numbers_in_ascending_order);
   
    for(int i = 0; i < 4; i++)
    printf("%c", letter_arr1[i]); puts("");

    for(int i = 0; i < 4; i++)
    printf("%d ", number_arr1[i]); puts("");

return 0; 
}
