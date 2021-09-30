/* test labels and goto statement */
main()
{
   int i, sum;

   sum = 0;
   i = 0;
lab:
loop:
   i = i + 1;
   if (i >= 100)
      goto out;
   if (sum <= 200)
      goto loop;
   if (sum == 50)
      goto out;
   sum = sum + i;
   goto lab;
out:
   printf("i = %d, sum = %d\n", i, sum);
}
