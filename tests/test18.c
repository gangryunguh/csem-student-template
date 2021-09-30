/*
 * test18 - check to see if for with null condition works
 */
main()
{
   int i, j, k;

   for (i = 0; ; i += 1)
      if (i == 50) {
         printf("exit point reached\n");
         exit (0);
      }       
}
