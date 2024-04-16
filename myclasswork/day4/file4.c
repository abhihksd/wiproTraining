int main()
{
    /*
    int x=10;
    int y=--x;
    printf("%d=== %d",x++,--y);
    */
   int x=101,y=20,z;
   z=++x;
   y=z++;
   ++y;
   printf("%d %d %d\n",x++,++y,--z);
}