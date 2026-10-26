
 #include<iostream>
 using namespace std;
int  findUnique(int arr[],int n){
    for(int i =0; i<=n; i++){
        bool unique = true;
        for(int j=0; j<n; j++){
            if(i != j && arr[i] == arr[j]){
            unique = false;
            break; 
            }
           
        }
        if(unique){
         return   arr[i];
    }
    
}
return -1;
}
 int main(){
   int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin >> arr[i] ;

    }
  int ans = findUnique(arr,n);
  cout << "Unique Element ->" << ans << endl;
 }