#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int d1,d2,d3;
  char name[50];

  srand(time(NULL));
  
   printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello,%s!\n",name);

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello,%s!\n",name);

  printf("Rolling the dice...\n");

  d1 = rand() % 6 + 1;
  d2 = rand() % 6 + 1;
  d3 = rand() % 6 + 1;

  printf("Die 1: %d\nDie 2: %d\nDie 3: %d\nTotal value: %d\n",d1,d2,d3,d1+d2+d3);

  if(d1+d2>=10)printf("%s win!\n",name);
  else printf("%s lost!\n",name);

  return 0;
}
