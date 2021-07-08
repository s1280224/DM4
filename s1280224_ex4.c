#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int i,total=0,k=0;

  char str[8];
  printf("What is your name?");
  scanf("%s",str);
  printf("Hello, %s!",str);

        srand((unsigned int)time(NULL));

        for(i=0; i<2; i++){
          k=rand()%6+1;
          printf("Die %d: %d\n",i+1,k);
          total = total+k;
        }

        printf("Total value: %d\n",total);

        if(total>=7)
          printf("%s won!\n",str);
          else
        printf("%s lose!\n",str);

}
