#include <iostream>
#include <vector>
#include <algorithm> // Needed for sort()


using namespace std;

void Selection_Sort(vector<int>& arr,int n){
 
    for (int i = 0; i < n - 1; ++i) {
     
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {   
                minIndex = j;
            }
        }
       
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}


void Insertion_Sort(vector<int>& arr, int n) {
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
       
        // arr[j] wala element bada hona chahiye arr[i] se then swap
        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        //j=-1 so we add j+1=0
        arr[j + 1] = temp;
    }
}

void Bubble_Sort(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) //aage wala element bada hai toh swap karo ith index se
             swap(arr[i],arr[j]);
        }
    }
}


//Partition code
int partition(vector<int>& arr, int low, int high) {
    int pivotValue = arr[high];//last index ko pivot liya hai
    int pi = low;//hume pata nahi hai pivot index to hum low ko liye hai pivot index

    for (int currentIndex = low; currentIndex < high; currentIndex++) {
        if (arr[currentIndex] < pivotValue) {
            //hum pivot se chote elements ko dundh rhe hai milte hi swap kara denge
            swap(arr[pi], arr[currentIndex]);
            pi++;
        }
    }
   
    swap(arr[pi], arr[high]);
    return pi;
}

void Quick_Sort(vector<int>& arr, int low, int high) {    
        //Base Case
        if (low>high) return;
   
        int pi = partition(arr, low, high);
        Quick_Sort(arr, low, pi - 1);
        Quick_Sort(arr, pi + 1, high);
   
}  



void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m; //r-(m+1) + 1 =r-m  ==>Last-first+1
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
     
    }
    while (i < n1) { arr[k++] = L[i++]; }
    while (j < n2) { arr[k++] = R[j++]; }
}


void Merge_Sort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        Merge_Sort(arr, low, mid);
        Merge_Sort(arr, mid + 1, high);
        merge(arr, low, mid, high); //merging the two sorted array
    }
}

//Heapify ==> Max Heap
void Heapify(vector<int>& arr,int index,int n){
  int left = 2*index + 1;
  int right= 2*index + 2;

  int maxEl=index;

  if(left < n && arr[maxEl]<arr[left])
   maxEl=left;

  if(right < n && arr[maxEl]<arr[right])
   maxEl=right;

  if(maxEl != index){
   swap(arr[maxEl],arr[index]);
   Heapify(arr,maxEl,n);  //Heapify karo Max Element ko
  }
  
}

void HeapSort(vector<int>& arr, int n) {
   //Build the Heap
   for(int i=n/2-1; i>=0 ;i--){
     Heapify(arr , i , n);
   }
   
   //Heap Sort
   for(int i=n-1;i>=0;i--){
    swap(arr[0],arr[i]); //Swap the First and Last element 
    Heapify(arr,0,i); //Perform heapify at first element and array size reduces by 1
   }
}


//BST SORT
class Node {
 public :
    int data;
    Node *left;
    Node *right;

   //constructor
   Node(int value){
        data=value;
        left=nullptr;
        right=nullptr;
    }
};

//Insert element into BST
Node* insert(Node* root,int value){
    if(root==nullptr)
     return new Node(value);

    if(value < root->data){
        //go to left side
        root->left = insert(root->left, value);
    }

    else{
        root->right = insert(root->right , value);
    }

    return root;
}

//INORDER --> <LEFT ROOT RIGHT>
void inorder(Node* root, vector<int>& result) {
    if (root == nullptr)
        return;

    inorder(root->left, result);
    result.push_back(root->data);
    inorder(root->right, result);
}

// BST Sort / Tree Sort
void bstSort(vector<int>& arr) {
    Node* root = nullptr;

    // Step 1: Insert all elements into BST
    for (int x : arr) {
        root = insert(root, x);
    }

    // Step 2: Inorder traversal
    vector<int> result;
    inorder(root, result);

    // Step 3: Copy sorted elements back
    arr = result;
}

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int> arr(n);
   
    for(int i=0;i<n;i++)
      cin>>arr[i];
     
    //Insertion_Sort(arr,n);
   
    //Selection_Sort(arr,n);
   
    //Bubble_Sort(arr,n);    

    //Insertion_Sort(arr,n);

    //Quick_Sort(arr,0,n-1);
   
    //Merge_Sort(arr,0,n-1);

    //HeapSort(arr,n);

    bstSort(arr);
   
   
   cout<<"Sorted Array: ";
    for(int x : arr)
      cout<< x <<" ";

    return 0;
}


