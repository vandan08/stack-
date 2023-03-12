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
	void push (int x){
		if(top == n-1) 
		{
			cout<<"stack overflow !!"<<endl;
			
		}
		top++;
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
		return arr[top];
	}
	
	bool empty()
	{
		return top==-1;		
	}
	
	
};


int main(){


	stack s;
	s.push(10);
	s.push(11);
	s.push(12);
	cout<<s.top_element()<<endl; // showing top element 
	
	cout<<s.empty()<<endl; // returing 0 (false ) bcuz it is not empty 
	
	s.pop();
	s.pop();
	
	cout<<s.top_element()<<endl;
	

	return 0;			
}
