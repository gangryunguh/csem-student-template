/*
 * test if nested calls work
 */
fact(int x)
{
  if (x<2)
     return 1;
  else
     return x*fact(x-1);
}

main()
{
  int x[10];
  int i;
  for (i=0;i<10;i+=1) {
     x[i]=i;
     printf("%10d %d %10d\n", fact(x[i]), i, fact(x[i]));
  }
}
