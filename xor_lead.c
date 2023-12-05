/*
Given two integers N and K, to find total number of XOR lead numbers from given range N, where (Z  ^ K) > (Z &K). Z is from 1 to N

Input:
Two integers, N and K

Sample:
Input:
N = 5, K = 2

Output:
3

Explanation:
If (1 ^ 2) > (1 & 2) -> 3 > 0 -> XOR lead number
If (2 ^ 2) > (2 & 2) -> 0 > 2 -> Not XOR lead number
If (3 ^ 2) > (3 & 2) -> 1 > 2 -> Not XOR lead number
If (4 ^ 2) > (4 & 2) -> 6 > 7 -> XOR lead number
if (5 ^ 2) > (5 & 2) -> 7 > 0 -> XOR lead number
*/

#include<stdio.h>

int main()
{
    int N,K,i,count=0;
    scanf("%d%d",&N,&K);
    
    for(i=1; i<=N; i++)
    {
        if((i^K) > (i&K))
        count++;
    }
    printf("%d\n",count);
}