#include <stdio.h>

int get_length(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    
    char str_len[] = "LengthCheck";
    
    char str_source[] = "SourceString";
    char str_destination[20]; 

    char str_comp1[] = "apple";
    char str_comp2[] = "apple"; 

    
    char str_concat1[30] = "Hello";
    char str_concat2[] = "World";
    
    int i, length, comparison_result, concat_end;

    printf("--- String Operations Without Library Functions ---\n\n");

    // ----------------------------------------------------
    // A) Find the length of the string
    // ----------------------------------------------------
    printf("1. Length of a String:\n");
    length = 0;
    while (str_len[length] != '\0') {
        length++;
    }
    printf("   String: \"%s\"\n", str_len);
    printf("   Length: %d\n\n", length);


    // ----------------------------------------------------
    // B) Copy one string to another
    // ----------------------------------------------------
    printf("2. Copy One String to Another:\n");
    i = 0;
    while (str_source[i] != '\0') {
        str_destination[i] = str_source[i];
        i++;
    }
    str_destination[i] = '\0'; 
    printf("   Source: \"%s\"\n", str_source);
    printf("   Copied Destination: \"%s\"\n\n", str_destination);


    // ----------------------------------------------------
    // C) Compare the string
    // ----------------------------------------------------
    printf("3. Compare Two Strings:\n");
    i = 0;
    comparison_result = 0; 

    while (str_comp1[i] != '\0' || str_comp2[i] != '\0') {
        if (str_comp1[i] != str_comp2[i]) {
            comparison_result = str_comp1[i] - str_comp2[i];
            break;
        }
        i++;
    }

    printf("   String 1: \"%s\"\n", str_comp1);
    printf("   String 2: \"%s\"\n", str_comp2);
    
    if (comparison_result == 0) {
        printf("   Result: The strings are EQUAL.\n\n");
    } else {
        printf("   Result: The strings are NOT equal (Difference: %d).\n\n", comparison_result);
    }


    // ----------------------------------------------------
    // D) Concatenate two strings
    // ----------------------------------------------------
    printf("4. Concatenate Two Strings:\n");
    i = 0; 
    
    
    while (str_concat1[i] != '\0') {
        i++;
    }
    int j = 0; 
    while (str_concat2[j] != '\0') {
        str_concat1[i] = str_concat2[j];
        i++;
        j++;
    }
    str_concat1[i] = '\0'; 

    printf("   First String (After Concatenation): \"%s\"\n", str_concat1);
    printf("   Original Second String: \"%s\"\n\n", str_concat2);

    return 0;
}