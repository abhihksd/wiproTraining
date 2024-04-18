//Q5. rectangle pattern
int main()
{
    int n=0;
    printf("enter size of rectangle");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}