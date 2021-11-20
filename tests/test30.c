/* test labels and goto statement */
main()
{
   int i, sum;

   sum = 0;
   i = 0;
loop:
   i = i + 1;
   if (i >= 100)
      goto out;
   if (sum <= 200)
      goto loop;
   if (sum == 50)
      goto out;
   sum = sum + i;
   goto loop;
out:
   printf("i = %d, sum = %d\n", i, sum);
}
