#include <stdio.h>

void main()
  {
    int i,j,c;
    for (i=2; i<=50; i++)
    
      {
        c=0;
        for (j=1; j<=i; j++)
          {
            if (i%j==0)
            c++;
          }
        if (c==2)
        {
          printf ("%d",c);
        }
      }
  }