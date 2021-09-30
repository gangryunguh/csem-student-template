main()
{
   int c, nw, nl, nc;
   int inword;

   nl = nw = nc = 0;
   inword = 0;
   while ((c = getchar()) != -1) {
      nc += 1;
      if (c == 10)
         nl += 1;
      if (c == 32 || c == 10 || c == 9)
         inword = 0;
      else if (inword == 0) {
         inword = 1;
         nw += 1;
      }
   }
   printf("	%d	%d	%d\n", nl, nw, nc);
}
