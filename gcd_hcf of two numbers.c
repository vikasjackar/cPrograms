int hum(int a,int b)
{
    int i, hcf;
   for(i = 1; i <= a || i <= b; i++) {
   if( a%i == 0 && b%i == 0 )
      hcf = i;
   }
   
   return hcf;

}