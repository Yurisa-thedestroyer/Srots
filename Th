#include <stdio.h>
#include <string.h>
#define size 100000

int main(void) {
  char in[15][10000];

  printf("As palavras estao separadas por virgula ou espaco.\n");
  char sentence[size] = 
  { "that is my ninja way"
  };

  int wordpos = 0;
  int word = 0;
  for(int i=0;i<strlen(sentence);i++){
    if(sentence[i]==' '||sentence[i]==','){
      wordpos = 0;
      word++;
    }else{ 
      in[word][wordpos] = sentence[i];
      wordpos++;
    }
  }
  for(int j=0;j<10;j++){
    printf("%s",in[j]);
    printf("\n");
  }
  return 0;
}
