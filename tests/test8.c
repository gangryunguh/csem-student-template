/*
 * test8 - check to see if set equals works
 */
main()
{
   int i, j, k;
   double a, b, c;

   i = 3;
   j = 5;
   i += j;       /* integer to integer */
   printf("i is %d\n", i);
   a = 10;
   b = 3;
   a += b;       /* float to float */
   printf("a is %f\n", a);
   i += b;
   printf("i is %d\n", i);
   a += i;
   printf("a is %f\n", a);
}

