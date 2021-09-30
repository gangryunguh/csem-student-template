/*
 * test10 - check to see if op2 works
 */
main()
{
   int i, j, k;
   double a, b, c;

   j = 5;
   k = 6;
   i = j + k;      /* integer arithmetic */
   printf("i is %d\n", i);
   b = 12;
   c = 6;
   a = b + c;      /* float arithmetic */
   printf("a is %f\n", a);
   a = i + b;      /* mixed mode */
   printf("a is %f\n", a);
                   /* modulo operator */
   printf("13 %% 4 = %d\n", 13%4);
}

