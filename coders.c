#include <stdio.h>
  
#define mskill 1001
  
int
read_int ()
{
  
int n = 0;
  
register int c = getchar_unlocked ();
  
for (; (c > 47 && c < 58); c = getchar_unlocked ())
    
n = n * 10 + c - 48;
  
return n;

}


 
int
main ()
{
  
int N = read_int ();
  
int S[1001] = { 0, };
  
 
for (int idx = 0; idx < N; idx++)
    {
      
S[read_int ()]++;
  
} 
 
for (int idx = 2; idx < mskill; idx++)
    {
      
int rBullets = S[idx];
      
for (int jdx = idx - 1; jdx > 0 && rBullets > 0; jdx--)
	{
	  
if (S[jdx] < rBullets)
	    {
	      
rBullets -= S[jdx];
	      
S[jdx] = 0;
	    
}
	  else if (S[jdx] >= rBullets)
	    {
	      
S[jdx] -= rBullets;
	      
break;
	    
}
	
}
    
}
  
 
int remSkill = 0;
  
for (int idx = 1; idx < mskill; idx++)
    {
      
remSkill += S[idx] * idx;
    
} 
printf ("%d", remSkill);
  
 
return 0;

}