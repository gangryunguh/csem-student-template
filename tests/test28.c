/* test break statement */
main()
{
   int i;

   for (i = 0; i < 100; i = i+1)
      if (i == 50)
         break;
   printf("i=%d\n", i);
   i = 0;
   while (i < 100) {
      if (i == 50)
         break;
      i = i+1;
   }
   printf("i=%d\n", i);
   i = 0;
   do {
      if (i == 50)
         break;
      i = i+1;
   } while (i < 100);
   printf("i=%d\n", i);
}
