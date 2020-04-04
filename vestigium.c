#include<stdio.h>

int main()
{
    int l,m,i,j,k,t,n,mat[100][100],counta=0,countr=0,countb=0,countc=0;
    scanf("%d",&t);
    int tr=0;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                scanf("%d",&mat[j][k]);
                if(j==k)
                {
                    tr+=mat[j][k];
                }
                
            }
        }
        for(j=0;j<n;j++)
        {
            
            
               for(l=0;l<n;l++)
               {
                   for(m=l+1;m<n;m++)
                   {
                       if(mat[j][m]==mat[j][l])
                       {
                           counta=1;
                           break;
                       }
                       else
                       {
                           counta=0;
                       }
                       
                       
                   }
                   if(counta==1)
                   break;
               }
               countr+=counta;
                for(l=0;l<n;l++)
               {
                   for(m=l+1;m<n;m++)
                   {
                       if(mat[m][j]==mat[l][j])
                       {
                           countb=1;
                           break;
                       }
                       else
                       {
                           countb=0;
                       }
                       
                       
                   }
                   if(countb==1)
                   break;
               }
               countc+=countb;
               
               
               
            
        }
        printf("Case #%d: %d %d %d\n",(i+1),tr,countr,countc);
               
               countr=0;
               countc=0;
               tr=0;
        
        
    }
    return 0;
    
}
