/*1)There is a  colony of 8 cells arranged in a straight line where each day every cell competes with its adjacent cells(neighbour).
Each day, for each cell, if its neighbours are both active or both inactive, the cell becomes inactive the next day,.otherwiseitbecomes active the
next day.

Assumptions:
The two cells on the ends have single adjacent cell, so the other adjacent cell can be assumsed to be always inactive.
Even after updating the cell state. consider its pervious state for updating the state of other cells. Update the cell informationofallcells 
simultaneously.Write a fuctioncellCompete which takes takes one 8 element array of integers cells representing the current state of 8 cells and 
one integer days representing te number of days to simulate.
An integer value of 1 represents an active cell and value of 0 represents an inactive cell.
*/
#include<iostream>
using namespace std;
int main()
{
    int  arr[8];
    int  temp[8];
    int   i;
    for(i=0;i<8;i++)
    {
        cin>>arr[i];
    }
    int d;
    cin>>d;
    while(d--)
     {
         for(i=0;i<8;i++)
         {
             if(i==0)
temp[i]=(arr[i+1]);
else if(i==7)
temp[i]=(arr[i-1]);
else
temp[i]=((arr[i-1])^(arr[i+1]));
   
         }
         for(i=0;i<8;i++)
         {
             arr[i]=temp[i];
         }
     }
      for(i=0;i<8;i++)
         {
            cout<<arr[i];
         }
return 0;
}
