/*#define p(x)printf("%f\n",a[0] x a[1]);
e;main(i,v)char**v;
{
  float a[2];
  for(*v++,i=2;i--;e++)
  sscanf(*(v+2*e),"%f",&a[e]);
  p(+)
}
*//*
#define p(x)printf("%f\n",a[0] x a[1]);
#define v(x)**(v+1)^x||
e;main(i,v)char**v;
{
  float a[2];
  for(v++,i=2;i--;e++)
  sscanf(*(v+2*e),"%f",&a[e]);
  v(43)p(+)v(45)p(-)v(42)p(*)v(47)p(/)
}
  printf("%f %f %f %f %f \n", *v, *(v+1), *(v+2), *(v+3), *(v+4));
*/
/*161バイト*//*
#define p(g,x)**(v+1)^g||printf("%f\n",a[0]x a[1]);
e;main(i,v)char**v;{float a[2];for(v++,i=2;i--;e++)sscanf(*(v+2*e),"%f",&a[e]);p(43,+)p(45,-)p(42,*)p(47,/)}
*/
#define p(g,x)**(v-2)^g+42||printf("%f\n",a[2]x*a);
float a[];main(i,v)char**v;
{
  for(;i--;)
  sscanf(*v++,"%f",&a[i]);
  p(1,+)p(3,-)p(,*)p(5,/)
}

/*136バイト*//*
#define p(g,x)**(v-2)^g+42||printf("%f\n",a[2]x*a);
float a[];main(i,v)char**v;{for(;i--;sscanf(*v++,"%f",a+i));p(1,+)p(3,-)p(,*)p(5,/)}
*/
