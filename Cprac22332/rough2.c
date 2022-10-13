#include<stdio.h>
#define size 10
int main()
{
    int cid[size],age[size],HNo[size],ln[size],bd[size],key,first,last,mid,n,cst,sqft,gst,prc,add,add1,add2,total;
    int z=0,y=0;
    char prop[1],gov[1],cn;
    
    printf("\t\t\t\t\t\t Ryan Romanoff Real Estate\n");
    printf("\t\t\t\t\t     711 Willshire Blvd,Andheri,Mumbai\n\n");
    
    do
    {
        printf("Client id:");
        scanf("%d", &cid[z]);
        printf("Enter your age:");
        scanf("%d",&age[z]);
        printf("Property Number:");
        scanf("%d", &HNo[z]);
        printf("Property Type(L/F/H):");
        scanf("%s", &prop[z]);
        printf("Dimensions:");
        scanf("%d %d", &ln[z],&bd[z]);
        printf("Government Approval(Y/N):");
        scanf("%s", gov);
        y=y+1;
        z=z+1;
        printf("Do you want to continue (Y/N):");
        scanf("%s", &cn);
        printf("\n\n");
        
    }while(cn!='N');
    
    printf("\t\t\t\t\t\t Ryan Romanoff Real Estate\n");
    printf("\t\t\t\t\t     711 Willshire Blvd,Andheri,Mumbai\n\n");
    
    printf("\nEnter Client Id: ");
    scanf("%d",&key);
    first=0;
    last=y-1;
    mid=(first+last)/2;
    while(first<=last)
    {
    if(key==cid[mid])
    {
         printf("Client id: %d\n",cid[mid]);
         printf("Age: %d\n", age[mid]);
         printf("Property Number: %d\n", HNo[mid]);
         
         if(prop[mid]=='L'||prop[mid]=='l')
        {
            cst=6000;
            printf("Property Type:Land\n");
        }
        else if(prop[mid]=='F'||prop[mid]=='f')
        {
            cst=5000;
            printf("Property Type:Flat\n");
        }
        else if(prop[mid]=='H'||prop[mid]=='h')
        {
            cst=9000;
            printf("Property Type:House\n");
        }
        
        
        sqft=ln[mid]*bd[mid];
        printf("Sqft: %d\n", sqft);
        prc=sqft*cst;
        
        
        if(age[mid]>=60)
        {
            add1=(prc*10)/100;
            prc=prc-add1;
            add=add-add1;
        }
        gst=(prc*10)/100;
        
        total=prc+gst;
        
        if(gov[mid]=='Y'||gov[mid]=='y')
        {
            add2=(total*2)/100;
            total=total+add2;
            add=add+add2;
            printf("Government Approval: Yes\n");
        }
        else
        {
            printf("Government Approval: No\n");    
        }
        
        
        printf("GST: Rs.%d\n", gst);
        printf("Additional Charges: Rs.%d\n", add);
        printf("Total Charges: Rs.%d\n", total);
        
        break;
    }
    else
    {
        if(key<cid[mid])
        {
            last=mid-1;
        }
        else
        {
            first=mid+1;
        }
        mid=(first+last)/2;
    }
}
if(first>last)
{
    printf("Element not found"); 
}
}