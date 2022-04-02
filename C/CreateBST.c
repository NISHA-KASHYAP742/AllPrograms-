#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *left;
	int data;
	struct node *right;
};
struct node *insert(struct node *root,int item);
void display(struct node* root);
struct node *insert(struct node *,int );
int main()
{
	int item,choice;
	struct node *root;
	root=NULL;
	do
	{
		printf("enter the data you want to insert\n");
		scanf("%d",&item);
		
		root=insert(root,item);
		
		printf("do you want to insert more item 1.yes 0.no\n");
		scanf("%d",&choice);
	}while(choice);
	display(root);
	return 0;
}

struct node *insert(struct node *root,int item)
{
	struct node *nn=NULL;
	struct node *ptr=root, *far;
	if(root==NULL)
	{
		nn=(struct node*)malloc(sizeof(struct node));
		nn->left=NULL;
		nn->right=NULL;
		nn->data=item;
		root=nn;
	}
	else
	{
		while(ptr!=NULL)
		{
			far=ptr;
			if(ptr->data<item)
			{
				ptr=ptr->right;
			}
			else if(ptr->data>item)
			{
				ptr=ptr->left;
			}
			else if(item == root->data)
			printf("Duplicate value\n");
		}
		nn=(struct node*)malloc(sizeof(struct node));
		nn->left=NULL;
		nn->right=NULL;
		nn->data=item;
		if(far->data > item)
		   far->left = nn;
		else if(far->data < item)   
		   far->right = nn;
	}
	return root;
}
void display(struct node* root)
    {
    	struct node *dis=NULL;
    	dis=root;
        if(dis==NULL)
            {               
                return;
            }

        else
	        {
		        display(dis->left);
		        printf("root data : %d \n",dis->data);
		        display(dis->right);
	        }
    }