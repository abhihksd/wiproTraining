//triangle
int main()
{
    int n=0;
    printf("enter size of triangle");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}