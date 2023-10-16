#include<iostream>
using namespace std;
class queue{
	int q[5],front,rear,val;
	const int size=5;
	public:
		queue(){
			front=-1;
			rear=-1;
		}
		void push(){
			if(rear==size-1){
				cout<<"queue is full\n";
				return;
			}
			else{
				cout<<"enter the element to be pushed into the stack\n";
				cin>>val;
				rear++;
				q[rear]=val;
				cout<<val<<" inserted into the queue\n";
			}
		}
		void pop(){
			if(front==rear){
				cout<<"queue is empty\n";
				return;
			}
			else{
				cout<<q[front]<<" poped from the queue\n";
				front++;
			}
		}
		void display(){
			if(front==rear){
				cout<<"queue is empty\n";
				return;
			}
			else{
				for(int i=front;i<=rear;i++){
					if(i!=-1){
					cout<<q[i]<<" -> ";
				    }
				}
				cout<<endl;
			}
		}
};
int main(){
	queue q;
	cout<<"queue using array\n";
	again:
	cout<<"press 1 to push,2 to pop,3 to display, 4 to exit\n";
	int ch,ch1;
	cin>>ch;
	switch(ch){
		case 1:q.push();
		break;
		case 2:q.pop();
		break;
		case 3:q.display();
		break;
		case 4:goto end;
		break;
	}
	cout<<"press 1 to perform more operations\n";
	cin>>ch1;
	if(ch1==1){
		goto again;
	}
	end:
return 0;		
}
