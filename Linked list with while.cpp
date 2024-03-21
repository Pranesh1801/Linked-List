#include <stdio.h>
#include <stdlib.h>
  
struct Node {
    int data;
    struct Node* next;
};
  
void printList(struct Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}
  
int main()
{
	// create a linked list
	int a,b,c,ch,newe,pos,ele,last,xyz,posi,mc,h;
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node *newNode = NULL;
  
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    newNode = (struct Node*)malloc(sizeof(struct Node));
    
    printf("\t\t\t    CREATION OF A LINKED LIST");
    printf("\n\nEnter the first element of the linked list :");
  	scanf("%d",&a);
  	printf("\nEnter the second element of the linked list :");
  	scanf("%d",&b);
  	printf("\nEnter the third element of the linked list :");
  	scanf("%d",&c);
  	
    head->data = a;
    head->next = second; 
  
    second->data = b;
    second->next = third;
  
    third->data = c; 
    third->next = NULL;
  
    printList(head);
    
    loop:
    	
    printf("\n\nWhat do wish to do with the linked list? \nEnter 1 to insert \nEnter 2 to delete \nEnter 3 to sort\nYour choice :");
    scanf("%d",&mc);
    if(mc==1)
    {
    	printf("\nWhere do you wish to insert an element in the linked list? \n 1 to insert in the beginning \n 2 to insert in the middle \n 3 to insert in the end \n Your choice :");
  		scanf("%d",&ch);
  		if(ch==1)
	  	{
	  		printf("\nEnter the element that you wish to insert in the beginning of the list :");
	  		scanf("%d",&newe);
			newNode->data = newe;
			newNode->next = head;
			head = newNode;
			printList(head);
  	  	}
  		else if(ch==2)
  		{
  			printf("\nEnter the position in which you wish to insert the element in :");
			scanf("%d",&pos);
			printf("\nEnter the element that you wish to insert in the %d position :",pos);
			scanf("%d",&ele);
			newNode->data = ele;

			struct Node *temp = head;

			for(int i=2; i < pos; i++) 
			{
 				if(temp->next != NULL) 
				{
    				temp = temp->next;
  				}
			}
			newNode->next = temp->next;
			temp->next = newNode;
			printList(head);		
		}
		else if(ch==3)
		{
			printf("\nEnter the element that you wish to insert at the end of the list :");
			scanf("%d",&last);
			newNode->data = last;
			newNode->next = NULL;
			struct Node *temp = head;
			while(temp->next != NULL){
  			temp = temp->next;
		}
		temp->next = newNode;
		printList(head);
		}
		else
		{
			printf("\nEnter within the range pal !");
		}	
		}
    
	else if(mc==2)
	{
		// deletion of elements in a linked list
		printf("\nWhere do you wish to delete an element in the linked list? \n 1 to delete in the beginning \n 2 to delete in the middle \n 3 to delete in the end \n Your choice :");
  		scanf("%d",&xyz);
  		if(xyz==1)
  		{
  			head = head -> next;
			printList(head);	  	
		}
		else if(xyz==2)
		{
			printf("\nEnter the position in which you wish to delete the element in :");
			scanf("%d",&posi);
		
			struct Node *temp = head;
		
			for(int i=2; i<posi; i++) 
			{
  				if(temp->next!=NULL)
				{
    				temp = temp->next;
  				}
			}
			temp->next = temp->next->next;
			printList(head);
		}
		else if(xyz==3)
		{
			struct Node* temp = head;
			while(temp->next->next!=NULL)
			{
  				temp = temp->next;
			}
			temp->next = NULL;
			printList(head);
		}
		else
		{
			printf("\nEnter within the range pal !");
		}	
		}
	else if(mc==3)
	{
		printf("Sorting process follows ......");
		for(int i=1;i>=0;i--)
		{
			int temp1=startList;
			temp2=temp1->next;
			for(j=0;j<=i;j++)
			{
				if(temp1->data > temp2->data)
				{
					k=temp1->data;
					temp1->data=temp2->data;
					temp2->data=k;
				}
				temp1=temp2;
				temp2=temp2->next;
			}
		}
		printf("Sorted order is: \n");
		t=startList;
		while(t!=NULL)
		{
			printf("%d\t",t->data);
			t=t->next;
		}
		
		}	
	printf("\n\nDo you wish to continue ? \nIf yes, print 2 \nIf no, print 1 \nYour choice :");
	scanf("%d",&h);
	if(h==2)
	{
		goto loop;
	}
	else         
	{
		printf("\nThank you");
	}
  	return 0;		
}