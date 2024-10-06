/*Given two string PARENTS AND SUB containing only english alphabet,write a program to count the number of occurences of SUB and PARENT NEGLECTING 
THE CASE OF THEM

THE INPUT FUCNTION stringoccurencecount consists of parent and sub.The lenght of sub may or may not be greater than the length of parent.The f
unction rreturns the number of occurences of sub and PARENT
*/


#include<bits/stdc++.h>
using namespace std;
int stringOccurrenceCount(char *Parent, char *Sub)
{
Parent=strlwr(Parent);
Sub=strlwr(Sub);
int M=strlen(Sub);
int N=strlen(Parent);
int result = 0;
for (int i = 0; i <= N - M; i++)
{
int j;
for (j = 0; j < M; j++)
if (Parent[i+j] != Sub[j])
break;

if (j == M)
{
result++;
}
}
return result;
}
int main()
{
char Parent [] = "abcABCzgdfabcabc";
char Sub []= "ABCabc";
cout << stringOccurrenceCount(Parent, Sub);
return 0;
}