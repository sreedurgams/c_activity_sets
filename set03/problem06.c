#include <stdio.h>
#include <string.h>

// Function to input two strings
void input_string(char* a, char* b) {
    printf("Enter the main string: ");
    scanf("%s", a);
    printf("Enter the substring: ");
    scanf("%s", b);
}

// Function to find the index of the first occurrence of a substring in a string
int sub_str_index(char* string, char* substring) {
    int string_length = strlen(string);
    int substring_length = strlen(substring);

    for (int i = 0; i <= string_length - substring_length; i++) {
        int j;
        for (j = 0; j < substring_length; j++) {
            if (string[i + j] != substring[j])
                break;
        }
        if (j == substring_length)
            return i; // substring found at index i
    }
    return -1; // substring not found
}

// Function to output the result
void output(char *string, char *substring, int index) {
    if (index != -1)
        printf("The substring '%s' is found in the main string '%s' at index %d.\n", substring, string, index);
    else
        printf("The substring '%s' is not found in the main string '%s'.\n", substring, string);
}

int main() {
    char main_string[100];
    char substring[100];

    // Input strings
    input_string(main_string, substring);

    // Find the index of substring in the main string
    int index = sub_str_index(main_string, substring);

    // Output the result
    output(main_string, substring, index);

    return 0;
}