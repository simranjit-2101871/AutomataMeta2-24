/* QUESTION--> A cloud computing company can accomodate various requiremnets for resources.The company system runs two services,for load 
balancing purpose the load of  the resources gets transferred to the servers one by one,intially the first request goes to server 1,the next 
request goes to server 2,and so on. The requests serves  are of two types :i:e,one for memeory allocation(denoted by a positive number) 
and the other for memory deallocation(represented by a negative number)

Write an algorithim  to find the total number of the memeory units allocated and deallocated by the server 1 after processing all the 
requests

INPUT
The first line of the input consisists of an integer req_size, representing the number of request (N).The second line consists of N space seprated integers -re1,req2....
representing the requests for the allocation/deallication of the respective memory units.
*/


// NOTE-->in automata or any other competetive programming platg=form modify this code for N inputs//
#include<iostream>
using namespace std;
int alloc_dealloc(int a[],int size){
    int server_1=0;
    for(int i=0;i<size;i++){
        if(i%2== 0){
            if(a[i]>0){
                server_1=server_1+1;
            }
            else{
                server_1=server_1-1;;
            }
            
        }
        else{
            continue;
        }
    }
    return server_1;//total allocated memory in numerical or unit from wil be return to the calling function
}
int main(){
    //it repsents the allocation and deallaocarion of mememory
    int array[]={1,2,8,5,-2,-4,6};
    
    int n=7;
    int result=alloc_dealloc(array,n);
    cout<<"The total memmory allocated by the server at the end is="<<result<<endl;
    
    return 0;
}