#include <iostream>
#include <vector>

void merge(std::vector<int>& vec, int left, int mid, int right) {
   int i, j, k;
   int n1 = mid - left + 1;
   int n2 = right - mid;
   
   std::vector<int> leftVec(n1), rightVec(n2);
   
   for(int i = 0; i < n1; i++){
   		leftVec[i] = vec[left + i];
   }
   for(int j = 0; j < n2; j++){
   		rightVec[j] = vec[mid + 1 + j];
   }
   
   i = 0;
   j = 0;
   k = left;
   
   while(i < n1 && j < n2){
   		if(leftVec[i] <= rightVec[j]){
   			vec[k] = leftVec[i];
   			i++;
		}
			else{
				vec[k] = rightVec[j];
				j++;
			}
		
		k++;
   }
   
   while(i < n1){
   		vec[k] = leftVec[i];
   		i++;
   		k++;
   }
   
   while(j < n2){
		vec[k] = rightVec[j];
		j++;
		k++;
   }
}


void mergeSort(std::vector<int>& vec, int left, int right) {
    if (left < right) {
      
        int mid = left + (right - left) / 2;

        mergeSort(vec, left, mid);
        mergeSort(vec, mid + 1, right);

        merge(vec, left, mid, right);
    }
}

int main(){
	std::vector<int> vec = {9, 78, 34, 3, 12, 24, 1};
	
	mergeSort(vec, 0, vec.size() - 1);
	
	for(int i = 0; i < vec.size(); i++){
		std::cout<<vec[i]<<"	";
	}

	return 0;
}
