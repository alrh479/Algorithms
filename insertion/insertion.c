#include <stdio.h>

void insertion(int* ar, int size){
	int j,t;
	for (int i = 1; i < size ; i++){
		j = i-1;
		//save ar[i] for using it later 
		//it will be changed during this while
		t = ar[i];
		//printf("t= %d \n",t);
		while (j >= 0 && ar[j] > t){ 
			ar[j+1] = ar[j];
			j--;
		}
		// send key to the last of j so it's bigger than j-1 and smaller than j 
		// see above while
		// if j doesn't change (i-1) , key (i) = ar[j+1] = ar [i]
		ar[j+1] = t;
		
	}
}


int main(){
	int array[] = {31,41,59,26,41,58};
	int size = sizeof(array) / sizeof(int);
	insertion(&array, size);
	for (int i = 0; i < size ; i++)
		printf("%d ",array[i]);
	printf("\n");
}
