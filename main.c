#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "deque.h"

int main()
{
   int v;
   int err = 0;

   bool c = true;
   struct deque_struct* h;
   h = createEmpty(h);

   c = checkEmpty(h);
   printf("pries push, %d\n",c);


   pushBeg(h,6);
   pushBeg(h,9);
   pushEnd(h,0);
   pushEnd(h,3);

   c = checkEmpty(h);
   printf("po push, %d\n",c);

   v = getHead(h,&err);  //9
   printf("%d\n",v);
   delBeg(h,&err);
   v = getHead(h,&err);  //6
   printf("%d\n",v);
   delBeg(h,&err);
   v = getHead(h,&err);  //0
   printf("%d\n",v);
   v = getTail(h,&err);
   printf("%d\n",v); //3
   delBeg(h,&err);
   delBeg(h,&err);
   delBeg(h,&err);
   delEnd(h,&err);

   v = getHead(h,&err);  //0
   if (err == 1){
      printf("Error!\n");
   } else
   {
      printf("%d\n",v);
   }

   c = checkEmpty(h);
   printf("po del, %d\n",c);



   return 0;
}
