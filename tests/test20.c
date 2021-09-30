/*
 * test20 - check to see nested ifs work
 */
main()
{
   int i, j;

   i = 5;
   j = 6;
   if (i < j)
      if (i > j)
         printf("i cannot be both greater and less than j\n");
   if (i > j)
      if (i < j)
         printf("i cannot be both greater and less than j\n");
   if (i < j)
      if (i == j-1)
         printf("i is equal to j - 1\n");
}

