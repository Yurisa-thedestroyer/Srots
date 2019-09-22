#include <stdio.h>>
#include <string.h>
#include <ctype.h>


int PalCount(v)
{
	int c = 0; 
	
	return c;
}

void Merge(char v[], int c,int m, int f)
{
    int i, j, k; 
    int n1 = m - c + 1; 
    int n2 =  f - m; 
  
    
    int L[n1], R[n2]; 
  
    
    for (i = 0; i < n1; i++) 
        L[i] = arr[c + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    i = 0; 
    j = 0;  
    k = c;  
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
	
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
	
}

int MergSort(char v[], int c, int f)
{
	int m = (c+f)/2;
	
	MergSort(v[], c,  m);
	Mergsort(v[], m +1 , f)
	Merge(v, l,m,f);
	
	return 0;
}

int main()
{
	
	return 0;
}
