#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int i,total=0,k=0;
  
  // 名前を聞く
   char str[8];
  printf("What is your name?");
  scanf("%s",str);
  printf("Hello, John!");
  

        srand((unsigned int)time(NULL));

        for(i=0; i<2; i++){
          k=rand()%6+1;
          printf("Die %d: %d\n",i+1,k);
          total = total+k;
        }

        printf("Total value: %d\n",total);

}


