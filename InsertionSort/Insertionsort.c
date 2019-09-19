void insertionSort(int vec[], int n)
{
int i,aux,j;
for(i = 1;i<n; i++)
{
	aux = vec[i];
	j = i-1;	

	while(j>=0 && vec[j]> aux)
	{
		vec[j+1] = vec[j];
		j = j-1;
}
	vec[j+1] = aux;
}
}
