main()
{
   int i, c, f[128], total;
   double x, y;

   total = 0;
   for (i = 0; i < 128; i += 1)
      f[i] = 0;
   while ((c = getchar()) != -1) {
      c &= 127;
      f[c] += 1;
      total += 1;
   }
   printf("letter	count	frequency\n");
   for (i = 0; i < 128; i += 1)
      if (f[i] != 0) {
         if (i <= 32)
            printf("%d", i);
         else
            printf("%c", i);
         x = f[i];
         y = total;
         x /= y;
         printf("\t%d\t%f\n", f[i], x);
      }
}

