/* test continue statement */
main()
{
   int i, sum;

   sum = 0;
   for (i = 0; i < 50; i = i+1) {
      if (sum > 100)
         continue;
      sum += i;
   }
   printf("sum = %d\n", sum);
   sum = 0;
   i = 0;
   while (i < 50) {
      i = i+1;
      if (sum > 100)
         continue;
      sum += i;
   }
   printf("sum = %d\n", sum);
   sum = 0;
   i = 0;
   do {
      i = i+1;
      if (sum > 100)
         continue;
      sum += i;
   } while (i < 50);
   printf("sum = %d\n", sum);
}
