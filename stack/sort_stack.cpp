void sortedInsert(stack<int> &stack, int num){
    // base case
    if(stack.empty() or (!stack.empty() and stack.top() < num)){
        stack.push(num);
        return;
    }
    
    int val = stack.top();
    stack.pop();
    
    sortedInsert(stack, num);
    stack.push(val);
}

void sortStack(stack<int> &stack)
{
    // base case
    if(stack.empty()){
        return;
    }
    
    int num = stack.top();
    stack.pop();
    
    sortStack(stack);
    
    sortedInsert(stack, num);
}