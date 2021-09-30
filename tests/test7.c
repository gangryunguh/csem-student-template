/*
 * test7 - check to see if set works
 */
main()
{
   int i, j, k;
   double a, b, c;
  
   j = 5;
   a = 100;
   b = 200;
   i = j;	/* integer to integer */
   printf("i is %d\n", i);
   i = a;	/* float to integer */
   printf("i is %d\n", i);
   a = b;       /* float to float */
   printf("a is %f\n", a);
   a = i;       /* integer to float */
   printf("a is %f\n", a);
}

