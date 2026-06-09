#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  //Read words from dict.id
  FILE *fi = fopen("dict.id", "rb");
  
  unsigned char *d;
  d = malloc(4096);
  int ret;
  
  int nwords=0;
  int i;
  int word_ok = 0;
  unsigned char word[32];
  
  for(;;) { 
    ret = fread(d, 1, 48, fi);
    if (ret!=48) break;
    
    printf("%s\n", d);
    
    nwords++;
  }
 // printf("%d\n", nwords);
  fclose(fi);
  

  return 0;
  
}

