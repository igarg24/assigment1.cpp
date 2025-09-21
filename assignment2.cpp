//ques 1 -> menu drive program

/*#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int choice;
    int arr[size]; 
    int n;   
    do{
        cout<<"MENU"<<endl;
        cout<<"1.CREATE"<<endl;
        cout<<"2.DISPLAY"<<endl;
        cout<<"3.INSERT"<<endl;
        cout<<"4.DELETE"<<endl;
        cout<<"5.LINEAR SEARCH"<<endl;
        cout<<"6.EXIT"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice){
            case 1 : { // CREATE
                cout<<"Enter number of elements : ";
                cin>>n;
                if(n>size){
                    cout<<"Too many elements!"<<endl;
                    n = 0;
                    break;
                }
                else{
                cout<<"Enter "<<n<<" elements : ";
                for(int i=0; i<n; i++)
                    cin>>arr[i];
                cout<<"Array created"<<endl;
                break;
            }
        }

            case 2 : { // DISPLAY
                if(n==0){
                    cout<<"Array is empty!"<<endl;
                } 
				else{
                    cout<<"Array elements : ";
                    for(int i=0; i<n; i++){
                        cout<<arr[i]<< " ";
                    }
                    cout<<endl;
                }
                break;
            }

            case 3 : { // INSERT
                if(n>=size){
                    cout<<"Array full! Cannot insert."<<endl;
                    break;
                }
                int pos;
                int val;
                cout<<"Enter position : ";
                cin>>pos;
                if(pos<1 || pos>n+1){
                    cout<<"Invalid position!"<<endl;
                    break;
                }
                cout<<"Enter value : ";
                cin>>val;
                for(int i=n; i>=pos; i--)
                    arr[i] = arr[i-1];
                arr[pos-1] = val;
                n++;
                cout<<"Inserted successfully"<<endl;
                break;
            }

            case 4 : { // DELETE
                if(n==0){
                    cout<<"Array empty! Cannot delete"<<endl;
                    break;
                }
                int pos;
                cout<<"Enter position : ";
                cin>>pos;
                if(pos<1 || pos>n){
                    cout<<"Invalid position!"<<endl;
                    break;
                }
                for(int i=pos-1; i<n-1; i++)
                    arr[i] = arr[i+1];
                n--;
                cout<<"Deleted successfully"<<endl;
                break;
            }

            case 5 : { // LINEAR SEARCH
                if(n==0){
                    cout<<"Array empty!"<<endl;
                    break;
                }
                int key;
				int found = 0;
                cout<<"Enter value to search : ";
                cin>>key;
                for(int i=0; i<n; i++){
                    if(arr[i] == key){
                        cout<<"Found at position "<<i+1<<endl;
                        found = 1;
                        break;
                    }
                }
                if(!found)
                    cout<<"Not found"<<endl;
                break;
            }

            case 6 : //exit
                cout<<"Exiting"<<endl;
                break;

            default :
                cout<<"Invalid choice!"<<endl;
        }
    } while(choice!=6);
    return 0;
}*/


//ques 2 -> removing duplicates from array

/*#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of your array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                arr[j]=-999; 
            }
        }
    }
    cout<<"Array after removing duplicates : ";
    for(int i=0; i<n; i++){
        if(arr[i] != -999){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}*/


//ques 4 -> reverse, transpose, multiplication
//part(a) -> reverse

/*#include<iostream>
using namespace std;
int main(){
	int n;
    cout<<"enter n : ";
    cin>>n;
    int arr[n];
    cout<<"actual array is : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int i= 0;
    int j= n-1;
    while(i<j){
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<"reverse array is :"<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
	return 0;
}*/

//part(b) -> multiplication of 2 matrix

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter rows of 1st matrix : ";
    cin>>n;
    int m;
    cout<<"enter columns of 1st matrix : ";
    cin>>m;

    int p;
    cout<<"enter rows of 2nd matrix : ";
    cin>>p;
    int q;
    cout<<"enter columns of 2nd matrix : ";
    cin>>q;

    if(m==p){
    int arr[n][m];
    cout<<"enter elements of first matrix : "<<endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            cin>>arr[i][j];
        }
    }
    int brr[p][q];
     cout<<"enter elements of second matrix : "<<endl;
     for(int i=0;i<=p-1;i++){
        for(int j=0;j<=q-1;j++){
            cin>>brr[i][j];
        }
    }
    int res[n][q];
     for(int i=0;i<=n-1;i++){
          for(int j=0;j<=q-1;j++){
            res[i][j]=0;
            //res[i][j]=arr[i][0]*brr[0][j]+arr[i][1]*brr[1][j]+......
            for(int k=0;k<=p-1;k++){
                res[i][j]=res[i][j]+arr[i][k]*brr[k][j];
            }
        }
    }
    //print
    cout<<"matrix multiplicaton is : "<<endl;
    for(int i=0;i<=n-1;i++){
          for(int j=0;j<=q-1;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
    else{  //(m!=p)
        cout<<"error! matrix not multiplied"<<endl;
    }
    return 0;
}*/

//part(c) -> transpose of two matrix

/*#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter rows : ";
    cin>>n;
    int m;
    cout<<"enter columns : ";
    cin>>m;
    int a[n][m]; 
    cout<<"enter elts of matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int atranspose[n][m];
     for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            atranspose[i][j]=a[i][j];
        }
    }
    cout<<"transpose of matrix is : "<<endl; 
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cout<<atranspose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/


//ques 5 -> row sum and coloumn sum

/*#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    int m;
    cout<<"Enter number of columns : ";
    cin>>m;
    int arr[n][m]; 
    cout<<"Enter elements of matrix : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Sum of each row : "<<endl;
    for(int i=0; i<n; i++){
        int rowSum = 0;
        for(int j=0; j<m; j++){
            rowSum += arr[i][j];
        }
        cout<<"Row "<<i + 1<<" = "<<rowSum<<endl;
    }
    cout<<"Sum of each column : "<<endl;
    for(int j=0; j<m; j++){
        int colSum = 0;
        for(int i=0; i<n; i++){
            colSum += arr[i][j];
        }
        cout<<"Column "<<j + 1<<" = "<<colSum<<endl;
    }
    return 0;
}*/