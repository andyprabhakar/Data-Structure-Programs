//THE CODE FOR C++
#include <iostream>

using namespace std;
//This code facilitates the making of a Linked List with a manual override.
struct Node 
{
    int data;
    Node* next;
};
Node* head;
void Insert(int b,int count,int data)
{  
    Node* temp1=new Node();
    temp1->data=data;
    temp1->next=NULL;
    if(b==0)
    {
        if(count==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    Node*temp2=head;
    for(int j=0;j<count-2;j++)
    {
       temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
    }
    else
    {
      if(b==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    Node*temp2=head;
    for(int j=0;j<b-2;j++)
    {
       temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
    }
}

void Print() { //Print all elements in the list
    Node* temp1 = head;
    while(temp1 != NULL) {
        printf("%d\n",temp1->data);
        temp1 = temp1->next;
    }
    cout << endl;
}

int main()
{
    head=NULL;//indicating an empty list..
    printf("This program inserts a value at the end of a linked list\n");
    printf("Enter the number of values you want in your list\n");
    int n;
    int x,y,b;
    int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter your data\n");
        scanf("%d",&x);
        printf("To assign somewhere in the middle press 1\nTo assign in the end press 2\n");
        scanf("%d",&y);
        if (y==1){
            printf("Enter your desired position in the list\n");
            scanf("%d",&b);
        }
        if(y==2){
            b=0;}
        count=count+1;
        Insert(b,count,x);
        cout<<"The resultant linked list is"<< endl;
        Print();

    }
    //cout<<"The resultant linked list is"<< endl;
    //Print();
    return 0;

}