#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILE_PATH 100
#define MAX_LINE_LENGTH 10000

// declare all the functions for compiler.
// Here mode means opening the file in read mode or write mode.
FILE* open_file(const char* file_path, const char* mode);
void close_file(FILE* file);
char* read_line(FILE* file);
void write_line(FILE* file, const char* line);

int main(){
    const char* file_path="text.txt";

    // Test Case 1: Writing to a file
    FILE* write_file=open_file(file_path, "w");
    write_line(write_file, "Hello World!");
    write_line(write_file, "This is a test file");
    close_file(write_file);
    printf("Test case 1 passed: File written successfully. \n");

    // Test Case 2: Reading from a file
    FILE* read_file=open_file(file_path, "r");
    char* line;
    while ((line=read_line(read_file))!=NULL){
        printf("%s", line);
        free(line);
    }
    close_file(read_file);
    printf("Test Case 2 Passed: File read successfully.\n");


    // Test case 3: Appending to a file
    FILE* append_file = open_file(file_path, "a");
    write_line(append_file, "This line is appended.");
    close_file(append_file);
    printf("Test case 3 passed: Line appended to file successfully.\n");

    // Test case 4: Reading from a non-existent file
    FILE* non_existent_file = open_file("nonexistent.txt", "r");
    if (non_existent_file == NULL) {
        printf("Test case 4 passed: Error handled for non-existent file.\n");
    } else {
        
        close_file(non_existent_file);
        printf("Test case 4 failed: Expected error for non-existent file.\n");
    }

    return 0;
    
}

FILE* open_file(const char* file_path, const char* mode){
    FILE* file= fopen(file_path, mode);
    if(file==NULL){
        printf("Error opening file: %s\n", file_path);
        exit(1);
    }
    return file;
}

void close_file(FILE* file){
    if(fclose(file)!=0){
        printf("Error closing the file\n");
        exit(1);
    }
}

char* read_line(FILE* file){
    char* line=NULL;
    size_t buffer_size=0;
    ssize_t read;

    read=getline(&line, &buffer_size, file);
    if(read==-1){
        free(line);
        return NULL;
    }

    return line;
}
void write_line(FILE* file, const char* line){
    if(fprintf(file, "%s\n", line)<0){
        printf("Error writing to file\n");
        exit(1);
    }
}