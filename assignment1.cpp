/* assignment 1*/
//ques 1 -> binary search algorithm 

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n :";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements in sorted order : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sorted array is :"<<" ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target;
    cout<<"enter target : ";
    cin>>target;
    int l=0;
    int h=n-1;
    while(l<=h){
    int mid=(l+h)/2;
    if(arr[mid]==target){
        cout<<"element found at index : "<<mid<<endl;
        return 0;
    }
    else if(arr[mid]<target) {
        l=mid+1;
    }
    else {
        h=mid-1;
    }
}
cout<<"target not found!"<<endl;
    return 0;
}*/


//ques 2 -> bubble sort algorithm

/*#include<iostream>
using namespace std;
int main(){
    int arr[]={64,34,25,12,22,11,90};
    int n = sizeof(arr)/4;
    //bubble sort -> stable sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){ //swap
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/


// ques 3 -> missing number
//(a)-> linear time

/*#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n : ";
	cin>>n;
	int arr[n-1];
	cout<<"enter "<<n-1<<" elements : ";
	for(int i=0;i<n-1;i++){
		cin>>arr[i];
	}
	int totalelts = n*(n+1)/2;
	int sumofarr = 0;
	for(int i=0;i<n-1;i++){
		sumofarr = sumofarr+arr[i];
	}
	int missingnum = totalelts-sumofarr;
	cout<<"missing number is : "<<missingnum;
	return 0;
}*/

//(b)-> using binary search

/*#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n : ";
	cin>>n;
	int arr[n-1];
	cout<<"enter "<<n-1<<" elements : ";
	for(int i=0;i<n-1;i++){
		cin>>arr[i];
	}
	int low=0;
	int high=n-2; //n-1 elts
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]<=mid+1){
			low=mid+1; 
		}
		else{
			high=mid-1;
		}
	}
	cout<<"missing num is : "<<low+1<<endl;
	return 0;
}*/


//ques 4 -> string
//part (a)

/*#include<iostream>
#include<cstring> // for strcat
using namespace std;
int main(){
    char str1[100], str2[100];
    cout<<"Enter first string : ";
    cin.getline(str1, 100);
    cout<<"Enter second string : ";
    cin.getline(str2, 100);
    strcat(str1, str2); // Concatenate str2 to str1
	cout<<"Concatenated string : "<<str1<< endl;
    return 0;
}*/

//part (b)

/*#include <iostream>
#include <cstring> // for strrev
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string : ";
    cin.getline(str, 100);
    strrev(str); // Reverse using strrev
    cout<<"Reversed string : "<<str<<endl;
    return 0;
}*/

//part (c)

/*#include <iostream>
using namespace std;
int main(){
    char str[200];
    int i = 0;
	int j = 0;
    cout<<"Enter a string : ";
    cin.getline(str, 200);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'){
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 
    cout<<"String without vowels : "<<str<<endl;
    return 0;
}*/

//part (d)

/*#include <iostream>
#include <cstring> // for strlen
using namespace std;
int main(){
    char str[100];
    char temp;
    cout<<"Enter a string : ";
    cin.getline(str, 100);
    int len = strlen(str);
    for(int i=0; i<len-1; i++) {
        for(int j=i+1; j<len; j++){
            if(str[i] > str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    cout<<"Sorted string : "<<str<<endl;
    return 0;
}*/

//part (e)

/*#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter an uppercase character : ";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        ch = ch + 32; // A->65 and a->97 so that's why we adding 32 which convert upper to lower
    }
    cout<<"Lowercase character : "<<ch<<endl;
    return 0;
}*/
//q5.
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   int a[n];
    for( int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout <<a[k]<<" ";
                k++;
            }
            else{
                cout<< "0 " ;
            }
        }
        cout << endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  int t=n*(n+1)/2;
   int a[t];
    for( int i=0;i<t;i++){
        cin>>a[i];
    }
     int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j||i<j){
                cout <<a[k]<<" ";
                k++;
            }
            else{
                cout<< "0 " ;
            }
        }
        cout << endl;
    }
}*/


//ques 6 -> 
//part(a) -> transpose

/*#include<iostream>
using namespace std;
int main(){
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

//part(b) -> addition of two matrix

/*#include<iostream>
using namespace std;
int main (){
    int n; 
    cout<<"enter rows : ";
    cin>>n;
    int m; 
    cout<<"enter cols : ";
    cin>>m;
    int a[n][m]; 
    cout<<"enter elts of first matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int b[n][m]; 
    cout<<"enter elts of second matrix : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    int sum[n][m]; 
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"sum of two matrix  : "<<endl;
    for(int i=0;i<n;i++){  
        for(int j=0;j<m;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
      return 0;
}*/

//part(c) -> multiplication of two matrix

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

// ques 7 -> count inversion

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"unsorted is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int count = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) count++;
        }
    }
    cout<<count;
    return 0;
}*/


//ques 8 -> distinct elts means no duplicate elts

/*#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int distinctCount = 0;
    for(int i=0; i<n; i++){
        bool isDistinct = true;
        for(int j=0; j<i; j++){
            if(arr[i] == arr[j]){
                isDistinct = false;
                break;
            }
        }
        if(isDistinct){
            distinctCount++;
        }
    }
    cout<<"Number of distinct elements : "<<distinctCount<<endl;
    return 0;
}*/