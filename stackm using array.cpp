#include<iostream>
using namespace std;
class stack{
	int s[5],top,val;
	const int size=5;
	public:
		stack(){
			top=-1;
		}
		void push(){
			if(top==size-1){
				cout<<"stack is full\n";
				return;
			}
			else{
				cout<<"enter the element to be pushed into the stack\n";
				cin>>val;
				top++;
				s[top]=val;
				cout<<val<<" inserted into the stack\n";
			}
		}
		void pop(){
			if(top==-1){
				cout<<"stack is empty\n";
				return;
			}
			else{
				cout<<s[top]<<" poped from the stack\n";
				top--;
			}
		}
		void display(){
			if(top==-1){
				cout<<"stack is empty\n";
				return;
			}
			else{
				for(int i=0;i<=top;i++){
					cout<<s[i]<<" -> ";
				}
				cout<<endl;
			}
		}
};
int main(){
	stack s;
	cout<<"stack using array\n";
	again:
	cout<<"press 1 to push,2 to pop,3 to display, 4 to exit\n";
	int ch,ch1;
	cin>>ch;
	switch(ch){
		case 1:s.push();
		break;
		case 2:s.pop();
		break;
		case 3:s.display();
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
