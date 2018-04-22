/*#include <stdlib.h>
e;
main(i,v)char**v;
{
  if(i<2)return-1;
  for(float s;i--;printf("%f = %d + %f\n",s,e,s-e))
  s=atof(*++v),e=s;
}
/*123バイト*/
/*
#include<stdlib.h>
e;main(i,v)char**v;{if(i<2)return-1;for(float s;i--;printf("%f = %d + %f\n",s,e,s-e))s=atof(*++v),e=s;}
*//*
e;
main(i,v)char**v;
{
  if(i<2)return-1;
  for(float s;i--;printf("%f = %d + %f\n",s,e,s-e))
  sscanf(*++v,"%f",&s),e=s;
}*/
/*111バイト*//*
e;main(i,v)char**v;{if(i<2)return-1;for(float s;i--;printf("%f = %d + %f\n",s,e,s-e))sscanf(*++v,"%f",&s),e=s;}
*/
e;
main(i,v)char**v;
{
  i^1||0/0;
  for(float s;i--;printf("%f = %d + %f\n",s,e,s-e))
  sscanf(*++v,"%f",&s),e=s;
}

e;main(i,v)char**v;{i^1||0/0;for(float s;i--;printf("%f = %d + %f\n",s,e,s-e))sscanf(*++v,"%f",&s),e=s;}
