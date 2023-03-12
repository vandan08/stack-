#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

#define n 10

class stack{
	
	int* arr;
	int top;
	
	public:
		
	stack(){
		arr= new int[n];
		top=-1;
		
	}
	
	//push operation 
	void push (){
		int x;
		if(top == n-1) 
		{
			cout<<"stack overflow !!"<<endl;
			
		}
		top++;
		cout<<"enter element to push :";
		cin>>x;
		
		arr[top]=x;	
	}
	
	//pop operation 
	void pop()
	{
		if(top==-1)
		{
			cout<<"stack is empty (underflow situation ) !!"<<endl;
		}
		 top--; //decreasing top value 
		
	}
	
	
	// searching top element in the stack 
	int top_element()
	{
		if(top==-1)
		{
			cout<<"stack is empty , no elements at the top  !!"<<endl;
			return -1;
		}
		cout<< "element at the top is : "<<arr[top]<<endl;
	}
	
	bool empty()
	{
		return top==-1;		
	}
	
	void display () 
	{
		if(empty())
		{
			cout<<"stack is empty "<<endl;
		}
		cout<<"elements are present in stack are : " <<endl;
		for(int i=0;i<=top;i++) 
		{
			cout<<arr[i]<<" ";
		}
	}
	
	
};


int main(){

int choice, flag=1;
stack s;
 while( flag == 1)
	 {
	 	 cout << "\nEnter your choice to perform operation on stack !! "<<endl;
		 cout<<"\n1.PUSH \n2.POP\n3.SHOW_TOP \n4.DISPLAY_STACK \n5.EXIT\n\n";
		 cin>>choice;
		switch (choice)
		 {
			case 1: s.push();
					break;
			
			case 2: s.pop();
					break;
					
			case 3: s.top_element();
					break;
					
			case 4: s.display();
					break;
					
			case 5: flag= 0; // if flag becomes 0 than while loop ends and we exit the program 
					break;
			
		 }
	}
	return 0;			
}
