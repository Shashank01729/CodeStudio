int findUnique(int *arr, int size){
  int a=0;
  for (int i = 0; i < size; i++){
        a^=arr[i];   
    }
    return a;
}

/*
we have to xor all elements in the array

E.g: 2^2^3^3^1 -----> 0^0^1 -----> 1 

Rules: 1) a^a=0
       2) 0^a=a
*/