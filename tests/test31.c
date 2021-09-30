/* test labels and goto statement */
main()
{
   int i, sum;

   sum = 0;
   for (i = 0; i < 100; i = i+1)
      if (sum == 50)
         goto notexist;
      else
         sum += i;
   printf("%d\n", sum);
}
