queue<int>Q;

void push(int x){
  Q.push(x);
  int n = Q.size()-1;
  while(n--){
    Q.push(Q.front());
    Q.pop();
  }
}

int pop(){
  int el = Q.front();
  Q.pop();
  return el;
}

int top(){
  return Q.front();
}
