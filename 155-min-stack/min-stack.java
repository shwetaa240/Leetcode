class Pair{
    int val,minn;
    Pair(int val,int minn)
    {
        this.val=val;
        this.minn=minn;
    }
}
class MinStack {
    Stack<Pair> st=new Stack<>();
    public MinStack() {
        
    }
    
    public void push(int val) {
        int mini;
        if(st.empty())
        mini=val;
        else
        mini=Math.min(val,st.peek().minn);
        st.push(new Pair(val,mini));
    }
    
    public void pop() {
     st.pop();   
    }
    
    public int top() {
       return st.peek().val;  
    }
    
    public int getMin() {
      return st.peek().minn;   
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */