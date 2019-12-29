#include<stdio.h>
int main()
{
    int i,j;
    i=j=0;
            do{
                    printf("\nThis program Explains  do-while loop\nThis programs shows how many times you gave values to this program\nPress 0 to see the no.of values you given.\nEnter any Number :");
                    scanf("%d",&i);
                    printf("The Given NO. is %d\n",i);
                    j=j+1;

                } while(i!=0);//loop will goes on untill you enter 0

                printf("%d times you gave values to this program.",j-1);// 0 is also count as a given number so we neglect 0 by putting -1
          /*output will be like this
          This program Explains  do-while loop
          This programs shows how many times you gave values to this program
          Press 0 to see the no.of values you given.
          Enter any Number:2
          This program Explains  do-while loop
          This programs shows how many times you gave values to this program
          Press 0 to see the no.of values you given.
          Enter any Number:6
          This program Explains  do-while loop
          This programs shows how many times you gave values to this program
          Press 0 to see the no.of values you given.
          Enter any Number:9
          This program Explains  do-while loop
          This programs shows how many times you gave values to this program
          Press 0 to see the no.of values you given.
          Enter any Number:0
          3 times you gave values to this program.*/
}
