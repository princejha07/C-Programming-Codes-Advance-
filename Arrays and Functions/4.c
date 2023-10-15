/* Write a function to rotate an array by n position in d direction.
 The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70];
  n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] ) */

  #include<stdio.h>
  void rotate(int b[],int size,int n,int d);
  int main()
  {
      int a[5],i;
      printf("enter 5 elements ");
      for(i=0;i<5;i++)
        scanf("%d",&a[i]);
      rotate(a,5,2,'l');
      printf("rotated array ");
      for(i=0;i<5;i++)
        printf("%d ",a[i]);
      return 0;
  }
  void rotate(int b[],int size,int n,int d)
  {
      int temp,i;
      while(n)
      {
      if(d=='r')
      {
          temp=b[size-1];
          for(i=size-2;i>=0;i--)
           b[i+1]=b[i];
          b[0]=temp;
      }
      if(d=='l')
      {
          temp=b[0];
          for(i=0;i<size;i++)
            b[i-1]=b[i];
          b[size-1]=temp;
      }
      n--;
      }
  }
