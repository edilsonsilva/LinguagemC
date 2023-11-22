#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fptr;

  // Create a file on your computer (filename.txt)
  system("mkdir arquivos");
  fptr = fopen("arquivos/filename.txt", "w");
  fprintf(fptr,"Texto elementar");
  fclose(fptr);


  // Close the file
  fclose(fptr);

  return 0;
}