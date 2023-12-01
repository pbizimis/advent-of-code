#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *file = fopen("input.txt", "r"); // Open the file for reading
  char buffer[1024];                    // Buffer to hold each line of text
  char numbers[3] = {0, 0, '\0'};
  int total;

  // Read each line from the file and process it
  while (fgets(buffer, sizeof(buffer), file) != NULL) {
    for (int j = 0; buffer[j] != '\0'; j++) {
      printf("%s\n", numbers);
      if (isdigit(buffer[j])) {
        if (numbers[0] == 0) {
          numbers[0] = buffer[j];
          numbers[1] = buffer[j];
        } else {
          numbers[1] = buffer[j];
        }
      }
    }
    int num = atoi(numbers);
    total = total + num;
    numbers[0] = 0;
    numbers[1] = 0;
  }

  fclose(file); // Close the file

  printf("%d", total);
  return 0;
}
