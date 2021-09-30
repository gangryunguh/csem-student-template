/*
 * test19 - check to see if return works
 */
int func1(int k)
{
   return (k + 1);
}

double func2(double z)
{
   return (z + 2);
}

main()
{
   int i;
   double x,y;

   i = func1(2);
   printf("i is %d\n", i);
   x = 3;
   y = func2(x); 
   printf("y is %f\n", y);
}

