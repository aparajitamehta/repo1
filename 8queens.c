#include <stdio.h>

int board[100][100];                               // Use global variables instead of passing them again & again
int n;
void print_board();
int issafe(int i, int j) {
int k,u,v;
for(k=0;k<n;k++)
{
if(k!=j&&board[i][k]==1||k!=i&&board[k][j]==1)
return 1;  
}
k=1;
u=i;
v=j;
while((u-k)>0)
{
if((v-k)>0)
if(board[u-k][v-k]==1)
return 1;
if((v+k)<n)
if(board[u-k][v+k]==1)
return 1;
k++;
}
while((u+k)<n)
{
if((v-k)>0)
if(board[u+k][v-k]==1)
return 1;
if((v+k)<n)
if(board[u+k][v+k]==1)
return 1;
k++;
}
return 0;
}
void print_board() {


}

int put_one_more_queen(int how_many_more) {
int i,j;

  for(i=0;i<n;i++)

for(j=0;j<n;j++)
{                                           //each cell (i,j) in the board {               // two "for loops": 0<=i<n, 0<=j<n
    if(board[i][j]==0 && issafe(i,j)) {            // if this position is not occupied and safe

      board[i][j]=1;                               // put a queen there

      if (how_many_more==1) {                      // is this the base case?
        print_board();                             // if it is, then got the solution: print it!
        return 1;                                  // inform calling function that I got solution! ***(this is the first source of a "return 1")***
      }
	  
      else {                                       // not the base case: more queens to put

        int ret;
        ret=put_one_more_queen(how_many_more-1) ;   // call recursively to place remaining (how_many_more-1) queens

        if(ret==1)                                // if called function returns 1 on finding a solution, return it to calling function:
          return 1;                                // once ret==1, all ancestors in this way (who were waiting at the recursive call just above)
                                                 // "return 1"s to their corresponding parents -> finally exiting the recursion & back to main()
        }
board[i][j]=0;

      }

      return 0;                              // no success with this (i,j): (since otherwise the function would have already returned 1)
                                                   // therefore remove the queen, try next safe position in the "for loops"
    }
                                       // no success: calling function made a mistake -> return 0 to it, so it will try next
                                                   // safe position in its for loop.

}
void print_board()
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",board[i][j])
}
printf("\n");
}
}

int main() {
	scanf("%d", &n);
	int i,j;
	for(i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			board[i][j]=0;                      //no queens initially
		}
	}
	put_one_more_queen(n);
	return 0;
}

