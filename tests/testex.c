/*
 * demonstrate argument passing and simple arithmetic operations
 */
foo(int j, double z)
{
   printf("j is %d\n", j);
   printf("z is %f\n", z);
}

main()
{
   double x;
   int i;

   i = 10;
   x = 15;
   printf("i is %d\n", i);
   printf("x is %f\n", x);
   i += 3;
   x /= 3;
   foo(i, x);
}

