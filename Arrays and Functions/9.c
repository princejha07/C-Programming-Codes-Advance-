// Write a function in C to merge two arrays of the same size sorted in descending order.
void merge(int[],int[],int);
int main()
{
    int a[5]={7,5,4,2,1},b[5]={13,6,5,3,2},i;
    merge(a,b,5);
    return 0;
}
void merge(int a[],int b[],int size)
{
    int c[size*2],i=0,j=0,k;
    for(k=0;k<size*2;k++)
    {
        if(i==size)
        {
            while(k!=size*2)
            {
                c[k]=b[j];
                j++;
                k++;
            }
            if(k==size*2)
                break;
        }
        else if(j==size)
        {
            while(k!=size*2)
            {
                c[k]=a[i];
                i++;
                k++;
            }
            if(k==size*2)
                break;
        }
        else if(a[i]>b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    for(k=0;k<size*2;k++)
        printf("%d ",c[k]);
}
