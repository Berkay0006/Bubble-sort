#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


    // swap()
    // Swaps the values of two characters. 
    void swap(char *a, char *b){
        char t = *a; 
        *a = *b; 
        *b = t;
    }


    // letters_in_order()
    // Returns true if letter a should come BEFORE letter b (ignores case). 
    // Example: 'a' <= 'B' -> true
    bool letters_in_order(char a, char b){
        return tolower(a) <= tolower(b);
    }


    // numbers_in_ascending_order()
    // Returns true if number a should come BEFORE number b.
    bool numbers_in_ascending_order(char a, char b){
        return a <= b;
    }


    // bubble_sort()
    // Sorts the array 'a' with 'n' elements using Bubble sort. 
    // The function 'ok' decides if two elements are in the correct order. 
    void bubble_sort(char a[], int n, bool (*ok)(char, char)){
    
    // swapped = s
    bool s; 
    
    
    // Keep sorting until no swaps happen
    do{s = 0; 
    
    
    // Compare neighbours
    for(char i = 1; i<n; i++) 
    if(!ok(a[i-1], a[i])){              // If they are NOT in the right order
    swap(&a[i-1], &a[i]);               // Swap them 
    s = 1;                              // A swap happened
    }}

    while(s);                           // If no swaps -> array is sorted
    }

int main (void) {
<<<<<<< HEAD
=======
    char letter_arr1[] = {'z', 'S', 's', 'a'}; 
    char number_arr1[] = {4, -1, 2, 9};
    bubble_sort(letter_arr1, 4, letters_in_order);
    bubble_sort(number_arr1, 4, numbers_in_ascending_order);
   
    for(int i = 0; i < 4; i++)
    printf("%c", letter_arr1[i]); puts("");
>>>>>>> 6a70df87392f471691ab4dcdf4a2868c775b7f1c

    // Arrays to sort
    char letter_arr1[] = {'z', 'S', 's', 'a'}; 
    char number_arr1[] = {4, -1, 2, 9};

    // Sort letters alphabetically (case-insensitive)
    bubble_sort(letter_arr1, 4, letters_in_order);

    // Sort numbers smallest -> largest
    bubble_sort(number_arr1, 4, numbers_in_ascending_order);
   

    // Print sorted letters
    for(int i = 0; i < 4; i++)
<<<<<<< HEAD
    printf("%c", letter_arr1[i]); puts("");


    // Print sorted numbers
    for(int i = 0; i < 4; i++)
=======
>>>>>>> 6a70df87392f471691ab4dcdf4a2868c775b7f1c
    printf("%d ", number_arr1[i]); puts("");

return 0; 
}
