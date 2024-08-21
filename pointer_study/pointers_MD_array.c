/*

pointers and multi-dimensional arrays
1. what is a one diensional array?
int		A[5] = {2, 4, 6, 8, 10}; 
int		*p = a;  
print p => the address of A[0]
print *p => the value of A[0]: 2
print	*(P+2) => the value of A[2]: 6
*(A + i) is same as A[i]
(A + 1) is same as &A[i]
 p = A; this is correct
  
 A = p; this is wrong 


2. lets create a 2D array

int B[2][3]; // in this case, B[0] and B[1] are both 1D arrays of 3 integers
//     B[0]        B[1]
//  2   3   6   4   5   8 
// 400 404  408 412 416 420
int		*p = B;
			// this is wrong due to B will return a pointer to 1D array of 3 integers,
			not just a pointer to integer

int (*p)[3] = B; // will return a pointer to 1D array of 3 integers

print B or &B[0]  => address of B[0]: 400

print *B or B[0] or &B[0][0] // 400

print B + 1 or B[1]; 400 + 4 x 3 = 412 

print	*(B+1) or B[1] or &B[1][0]  => 412
		//thi will return a pointer to integer

print	*(B+1)+2; or B[1] + 2 or &B[1][2] => 420

print	*(*B+1) => print *(&B[1][0]) => print B[1][0] => 4 

PATTEN: 
B[i][j] = *(B[i]+j) = *(*(B+i))

3. multiple dimensional array
int C[3][2][2]; 
//      C[0]             C[1]           C[2]
//   C[0][0]       
// C[]   
//  2       5   1   9    3   4   6   1   0   8   11    3
//

*/
