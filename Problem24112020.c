// problem statement

/* X is an integer stream of N numbers. You have to select 2 data P and Q such that A<= (P+Q) <=B.
Write an algorithm / pseudo code/ C program how many ways you can select P & Q.
The time complexity must be n log n. */

/* Author: Md Atikul Islam
   Created: 11/24/2020
   Time complexity: nlog(n)
*/
#include<stdio.h>
#include<stdlib.h>
int X [] ={3,4,1,2,5,6,4,7,10,8}; // X is an integer stream of N numbers
int N = 10; //
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int main()
{
    qsort (X, N, sizeof(int), compare);
    int i, P, Q;
    int ans = 0;
    int A = 5;
    int B = 10;
    int left_border=N, right_border = -1;
    int begin, end, mid;
    for(i = 0 ; i<N; i++)
    {
        right_border = -1;
        //binary search begin
        begin = i+1;
        end = N-1;
        while(begin<end)
        {
            mid = (begin + end)/2;
            P = X[i];
            Q = X[mid];
            if(P+Q>=A &&  P+Q<=B)
            {
                begin = mid + 1;
                if(begin>right_border)
                {
                    right_border = mid;
                }
            }
            else
            {
                end = mid - 1;
            }
        }
        //binary search end
        left_border = N;
        begin = i+1;
        end = N-1;
        // binary search begin
        while(begin<end)
        {
            mid = (begin + end)/2;
             P = X[i];
            Q = X[mid];
            if(P+Q>=A &&  P+Q<=B)
            {
                end = mid ;
                if(end<left_border)
                {
                    left_border = mid;
                }
            }
            else
            {
                end = mid - 1;
            }
        }
        // binary search end
        if(left_border!=N && right_border != -1)
        {
            ans = ans + (right_border - left_border ) + 1;
        }

    }
    printf("ways you can select P & Q = %d ", ans);


}
