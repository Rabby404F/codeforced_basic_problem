#include<stdio.h>
#include<stdlib.h>

struct node{
    int value;
    struct node *next;
};



int main()
{ 
    struct node *head=NULL,*new=NULL,*temp=NULL;

    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        new=(struct node *)malloc(sizeof(struct node));

        int x;
        printf("VAlue of new node :");
        scanf("%d", &x);

        new->value=x;
        new->next=NULL;

        if(head==NULL)
        {
            head=new;
            temp=head;
        }
        else {
            temp->next=new;
            temp=new;
        }
        

    }
    printf("\nlinked list : ");

    temp=head;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->value);
        temp=temp->next;
    }


}