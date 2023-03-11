#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Queue {
    public:
	    stack<int> stack1, stack2;
        void push(int x){
		      while (!stack1.empty()) {
			      stack2.push(stack1.top());
			      stack1.pop();
		      }
		      stack1.push(x);
		      while (!stack2.empty()) {
			      stack1.push(stack2.top());
			      stack2.pop();
		      }
	      }

  int popQueue(){
	    if (stack1.empty()) {
			  cout << "Q is Empty";
                                       
		  }

    	int x = stack1.top();
		  stack1.pop();
		  return x;
	}
};

int main(){
	Queue queue;
  queue.push(6);
  queue.push(13);
  queue.push(8);

  cout << queue.popQueue() << '\n';
  cout << queue.popQueue() << '\n';
	cout << queue.popQueue() << '\n';

	return 0;
}

