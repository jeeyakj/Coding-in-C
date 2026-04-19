#include <stdio.h>

int main(){

    FILE* pFile = fopen("C:\\Users\\jeeya\\OneDrive\\Desktop\\Coding in C\\example.txt", "w"); 
    char text[] = "what is up my bruddas";
    //Open a file for writing. If the file does not exist, it will be created. If it already exists, its contents will be overwritten.
    if(pFile == NULL){
        printf("Error opening file!\n");
        return 1; //exit code 1 indicates an error
    } else {
        fprintf(pFile, "Hello, World!\n"); //Write a string to the file
        fprintf(pFile, "This is a file operation example.\n");
        fprintf(pFile, "%s\n", text); //Write the contents of the text array to the file
        printf("File written successfully!\n");
        fclose(pFile); //Close the file to free up system resources and ensure that all data is properly written to the file.
    }

    FILE* pFile2 =fopen("C:\\Users\\jeeya\\OneDrive\\Desktop\\Coding in C\\example.txt", "r"); //Open the file for reading
    if(pFile2 == NULL){
        printf("Error opening file!\n");
        return 1; //exit code 1 indicates an error
    } else {
        char buffer[1024]; //Buffer to store each line read from the file
        while(fgets(buffer, sizeof(buffer), pFile2) != NULL){ //Read the file line by line until the end of the file is reached
            printf("%s", buffer); //Print each line to the console
        }
        fclose(pFile2); //Close the file after reading
    }



    return 0;
}