int up[16];
int down[16];
int rows[8];
int x[8];
main()
{
   int i;
   for (i = 0; i < 16; i += 1)
      up[i] = down[i] = 0;
   for (i = 0; i < 8; i += 1)
      rows[i] = x[i] = 0;
   queens(0);
}

queens(int c)
{
   int r;

   for (r = 0; r < 8; r += 1)
      if (rows[r] == 0 && up[r-c+7] == 0 && down[r+c] == 0) {
         rows[r] = 1;
         up[r-c+7] = 1; 
         down[r+c] = 1;
         x[c] = r;
         if (c == 7)
            print();
         else
            queens(c + 1);
         rows[r] = 0;
         up[r-c+7] = 0;
         down[r+c] = 0;
      }
}

print()
{
   int k;

   for (k = 0; k < 8; k += 1)
      printf(" %d", x[k]);
   printf("\n");
}
