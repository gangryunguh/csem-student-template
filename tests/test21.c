/*
 * test21 - check to see if convert in return works
 */
double func1(int k)
{
   return (k + 1);
}

int func2(double z)
{
   return (z + 2);
}

main()
{
   double i, y;
   int x;

   i = func1(2);
   printf("i is %f\n", i);
   y = 3;
   x = func2(y); 
   printf("x is %d\n", x);
}

