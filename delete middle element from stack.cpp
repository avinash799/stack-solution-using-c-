void solve(stack<int>&inputstack,int count,int size){
    //base case
    if(count==size/2){
        inputstack.pop();
        return ;
    }

    //top ko ek variable me store kra lenge
    int num=inputstack.top();
    inputstack.pop();

    //recursive call
    solve(inputstack,count+1,size);
    //stack me variable jo store hua tha usko stack me push kr denge
    inputstack.push(num);
}
void deleteMiddle(stack<int>&inputstack,int N){
    int count=0;
    solve(inputstack,count,N);
}

/*

if(count==size/2){
    inputstack.pop();
    return ;
}
int num=inputstack.top();
inputstack.pop();
solve(inputstack,count+1,size);
inputstack.push(num);




*/