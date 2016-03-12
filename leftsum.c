#include <stdio.h>
struct node
{
    int value;
    struct node *left,*right;
};
struct node* insert(struct node* head, int n)
{
    if(head==NULL)
    {
        struct node *temp= (struct node*)malloc(sizeof(struct node));
        temp->value=n;
        temp->left=NULL;
        temp->right=NULL;
        return temp;
    }
    else if(head->value>n)
    {
        head->left=insert(head->left,n);
    }
    else 
    {
        head->right=insert(head->right,n);
    }
    return head;
}

int leftsum(struct node *head)
{
    if(head==NULL)
    {
        return 0;
    }
    else 
    {
        return head->left + leftsum(head->left);
    }
}
int main(void) {
    int a,n,i;
    struct node *head=NULL;
    printf("Enter the number of nodes:  ");
    scanf("%d",&n);
    printf("Enter the values:  \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        head=insert(head,a);
    }
	int sum=leftsum(head);
	printf("%d is the left sum",sum);
	return 0;
}

