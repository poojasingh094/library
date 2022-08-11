#include <stdio.h>
#include<stdlib.h>  
struct node
{
    int data,search;
    struct node *add;
};struct node *s,*head,*n,*start=NULL,*last;
int item,found=0,search;
void insert_at_begin();
void display();
void insert_at_end();
void insert_at_specified();
void delete_from_begin();
void delete_from_end();
void delete_from_specified();
int main()
{
    printf("Hello World");
    int item,ch;
    int choice;
    
    do
    {
        printf("1. insert_at_begin  2.insert_at_end 3. insert_at_specified");
        printf("4. delete_at_begin  5.delete_at_end 6. delete_at_specified");
        printf("7. Display");
        
        printf("enter choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:insert_at_begin();
        break;
        
        case 2:insert_at_end();
        break;
        
        case 3:insert_at_specified();
        break;
        
        case 4:delete_from_begin();
        break;
        
        case 5:delete_from_end();
        break;
        
        case 6:delete_from_specified();
        break;
        
        case 7:display();
        break;
        
        default: printf("wrong choice");
        exit(1);
    }
    printf("continue");
    scanf("%d",&choice);
}
while(choice==1);
}
   void insert_at_begin()
   {
       if(head==NULL)
      {
      s= (struct node *) malloc(sizeof(struct node *));
        head=s;
    printf("enter data");
    scanf("%d",&item);
    s->data=item;
      }
    else
    {
   printf("enter item inserted at beginning");
   scanf("%d",&item);
   n= (struct node *) malloc(sizeof(struct node *));
   n->data=item;
   n->add=head;
   head=n;
     }
   }
   
   
   void insert_at_end()
   { 
       if(head==NULL)
      {
      s= (struct node *) malloc(sizeof(struct node *));
        head=s;
    printf("enter data");
    scanf("%d",&item);
    s->data=item;
      }
      else
      {
     start=head;
       while(start->add!=NULL)
       {
          //last=start; 
   start=start->add;
   
       }
       printf("enter item inserted at end");
   scanf("%d",&item);
     n= (struct node *) malloc(sizeof(struct node *));
   n->data=item;
   start->add=n;
   n->add=NULL;
   }
   }
   
   void insert_at_specified()
   {
       if(head==NULL)
      {
      s= (struct node *) malloc(sizeof(struct node *));
        head=s;
    printf("enter data");
    scanf("%d",&item);
    s->data=item;
      }
      else
      {
          printf("enter searching item after which to be inserted and new item");
          scanf("%d%d",&search,&item);
          start=head;
          while(start!=NULL)
          {
          if(start->data==search)
          {
              found=1;
              s= (struct node *) malloc(sizeof(struct node *));
              s->data=item;
              s->add=start->add;
              start->add=s;
            break;  
          }
          else
          start=start->add;
          }
          
          
   }
   if(found==0)
          printf("searching item not exist");
   }
   
   void delete_from_begin()
   {
       if(head==NULL)
       printf("empty");
       else
       head=head->add;
   }
   
   void delete_from_end()
   {
       start=head;
       while(start->add!=NULL)
       {
           last=start;
           start=start->add;
           
       }
       last->add=NULL;
   }
   
   void delete_from_specified()
   {
          if(head==NULL)
      {
      s= (struct node *) malloc(sizeof(struct node *));
        head=s;
    printf("enter data");
    scanf("%d",&item);
    s->data=item;
      }
      else
      {
          printf("enter searching item after which to be deleted");
          scanf("%d",&search);
          start=head;
          while(start!=NULL)
          { 
          if(start->data==search)
          {
              found=1;
              last->add=start->add;
              break;  
          }
          else
          {
                    last=start;
                    start=start->add;
          }
          }
          
        if(found==0)
          printf("searching item not exist");  
        }
   }
   void display()
   {
   start=head;
       while(start->add!=NULL)
   {printf("    %d",start->data);
        start=start->add;
   }
   
   printf("     %d",start->data);
}




