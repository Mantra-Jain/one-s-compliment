#include<stdio.h>
int main()
{
    int size,i,j;
    printf("Enter size of binary number:");
    scanf("%d",&size);
    int binary[size+1],onesc[size+1];
    printf("Enter binary number:");
    //to input binary number in binary array
    for(i=0;i<size;i++)
    {
        printf("Enter %d number",(i+1));
        scanf("%d",&j);
        binary[i]=j;
    }
    //to switch 1 and 0 for one's compliment
    for(i=0;i<size;i++)
    {
        if (binary[i]==0)
        {
            onesc[i]=1;
        }
        else if(binary[i]==1)
        {
            onesc[i]=0;
        }
        else
        {
            j=-1;
        }
    }
    if(j==-1)
    {
        printf("Wrong Input");
    }
    else
    {
        for(i=0;i<size;i++)
        {
            printf("%d",onesc[i]);
        }
    }
}
