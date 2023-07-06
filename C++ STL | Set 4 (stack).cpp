void push(stack<int> &s,int x)
{
    //Your code here
        s.push(x);

}

/*pops the top element of the
stack and returns it */
int pop(stack<int> &s)
{
    //Your code here
    if (s.size() > 0){
        int res = s.top();
        s.pop();
        return res;
    }
    return -1;
}

/*returns the size of the stack */
int getSize(stack<int> &s)
{
   //Your code here
       return s.size();

}

/*returns the top element 
of the stack */
int getTop(stack<int> &s)
{
   //Your code here
   if (s.size() > 0){
        return s.top();
    }
    return -1;
}
