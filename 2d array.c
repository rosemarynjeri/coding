//array in c 2D arrays
#include <stdio.h>
int main(int argc, char** argv)
{
	int i,j;
	int marks[2][3]= {{50,90,60},{87,23,75}};
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			

			
			printf("marks[%d][%d]=%d\n",i,j, marks[i][j]);
			
			
		}
	}
	return 0;
}