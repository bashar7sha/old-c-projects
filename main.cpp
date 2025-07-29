#include <iostream>
using namespace std;
class node {
  	public:
    int data;
    node*next;
    node*pre;

  	node(int a) {
    data = a;
    next = NULL;

    }
    };
node*head;
node*temp;
node*pre;
node*aft;
node*tail;

int i,k,index,s,Max,Min;

void add_h(int n){
if (head==NULL){
node *newNode=new node(n);
newNode->next=head;
head=newNode;
tail=head;}
else {node *newNode=new node(n);
newNode->next=head;
head=newNode;
}}
void display(){
    temp=head ;
while(temp!=NULL){
    cout<<temp->data<<"-->";
    temp= temp->next;
}
}
void Delete_h(){
head =head->next;
}
void Delete_t(){

    temp=head->next;
    pre=head;
while(temp->next!=NULL){
   temp= temp->next;
   pre=pre->next;
}
pre->next=NULL;
 }
void add_spe (int i, int v){
pre= head;
for (k = 0; k < i-1; k++)
pre = pre->next;
 aft = pre->next;
node*vtx = new node(v);
vtx->next = aft;
pre->next = vtx;

}
void Delete_spe(int i){
pre=head;
for(k=0;k<i-1;k++)
    pre=pre->next;
    node*del=pre->next;
    aft=del->next;
    pre->next=aft;
}
void Search(int v){
    index =1;
    temp=head;
    while(temp->data!=v){
    index++;
    temp=temp->next;
    if (temp==NULL) cout <<"not found"<<endl;
    else cout<<" " <<index<<endl;
    }
}
void Count(){
 temp=head ;
while(temp!=NULL){
    index++;
   temp= temp->next;

}
   cout<<" "<<index<<endl;

}
void peek(){

cout <<head->data<<endl;


}
void largestElement( ){
    Max = head->data;
    temp=head;
    while (temp != NULL) {
        if (Max < temp->data)
            Max = temp->data;
        temp = temp->next;
    }
   cout<<Max<<endl;

}
void smallestElement(){
     Min = head->data;
     temp=head;
    while (temp != NULL) {
        if (Min > temp->data)
            Min = temp->data;
        temp = temp->next;
    }
    cout << Min<<endl;
}
void enqueue(int n){
if (head==NULL){
    node*newNode=new node(n);
    newNode->next=head;
    head=newNode;
    tail=head;
}
else {
    node*newNode=new node(n);
    tail->next=newNode;
    tail=newNode;

}
}
void add_t(int n){
node*newNode= new node(n);
tail->next=newNode;
tail=newNode;
}


int main(){
    int k,n,c;
    cout << "choose your empty list"<<endl;
cout << "1 linked list" <<endl;
cout << "2 stack"<< endl;
cout << "3 queue"<<endl;
        cin >>c;
switch(c) {
case 1:
        cout <<"1 add new node "<<endl;
        cout <<"2 delete head" <<endl;
        cout <<"3 delete tale" <<endl;
        cout <<"4 add new node at specific position"<<endl;
        cout <<"5 delete specific node from list"<<endl;
        cout <<"6 count number of nods inside list"<<endl;
        cout <<"7 display " <<endl ;
        cout <<"8 display smallest and largest Element "<<endl;
        cout <<"9 close app" <<endl ;
        cout <<"10 add new node after tail"<<endl;
        cout <<"11 search for a node"<<endl;
while(k!=9){
        cin >>k;

switch(k){
case 1:cout <<"enter node value"<<endl;
cin >>n;
add_h(n);
break;
case 2:Delete_h();
break;
case 3:Delete_t();
break;
case 4:cout << "enter new node position and value "<<endl;
       cin >>c>>n;
       add_spe(c,n);
break;
case 5:cout <<"enter position of deleted node "<<endl;
       cin >>n;
       Delete_spe(n);
break;
case 6:cout<<"number of nodes is "<<endl;
       Count();
break;
case 7:display();
break;
case 8:cout<<"smallest number is: ";smallestElement();
       cout<<"largest number is:"; largestElement();
break;
case 10:cout<<"enter node value"<<endl;
        cin >>n;
        add_t(n);
break;
case 11:cout<<"enter the node value you looking for"<<endl;
        cin>>n;
        cout <<"node position is"<<endl;
        Search(n);
break;
break;}}
///////////////////////////////////////////////////////////////////////////
case 2:while(k!=9){
  cout <<"1 push "<<endl;
        cout <<"2 pop" <<endl;
        cout <<"3 peek" <<endl;
        cout <<"4 count number of nods inside list"<<endl;
        cout <<"5 display"<<endl;
        cout <<"9 close app" <<endl ;

        cin >>k;
switch(k){
case 1:cout <<"enter node value"<<endl;
cin >>n;
add_h(n);
break;
case 2:Delete_h();
break;
case 3:peek();
break;
case 4:cout<<"number of nodes is "<<endl;
       Count();
break;
case 5:display();
break;
break;}}
//////////////////////////////////////////////////////////////////////
case 3:while(k!=9){
  cout <<"1 enqueue "<<endl;
        cout <<"2 dequeue" <<endl;
        cout <<"3 peek" <<endl;
        cout <<"4 count number of nods inside list"<<endl;
        cout <<"5 display"<<endl;
        cout <<"9 close app" <<endl ;

        cin >>k;
switch(k){
case 1:cout <<"enter node value"<<endl;
cin >>n;
enqueue(n);
break;
case 2:Delete_h();
break;
case 3:peek();
break;
case 4:cout<<"number of nodes is "<<endl;
       Count();
break;
case 5:display();
break;
break;}
}}
  return 0;
}


