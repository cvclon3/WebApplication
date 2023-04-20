#include <iostream>
#include <fstream>
#include "stdio.h"
using namespace std;
int main() {
    string myText;

// Read from the text file
    ifstream MyReadFile("../data/file.txt");

// Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
        // Output the text from the file
        cout << myText;
    }

// Close the file
    MyReadFile.close();

    FILE * fp;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("../data/file.txt", "r");
    if (fp == NULL) {
        printf("EERRRR");
        exit(EXIT_FAILURE);
    }

    while ((read = getline(&line, &len, fp)) != -1) {
        //send(sd, line, strlen(line), 0);
        printf("Retrieved line of length %zu:\n", read);
        printf("%s", line);
    }

    fclose(fp);
    return 0;

}