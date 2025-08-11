/*
power exoponential problem
#include<iostream>
using namespace std;

double my(double x,int n){
    if (n==0) return 1.0;
    if (x==0) return 0.0;
    if (x==1) return 1.0;
    if (x==-1 && n%2==0) return 1.0;
    long binform=n;
    if(n<0){
        x=1/x;
        binform=-binform;
    }
double ans=1;
while(binform>0){
    if(binform%2==1){
        ans*=x;
    }
    x*=x;
    binform/=2;
}
return ans;

}
int main(){
    cout<<my(2,-2)<<endl;
    return 0;
}
    */
/*
stock buy and sell problem
#include <iostream>
#include<vector>
using namespace std;
int maxpr(vector<int>& price){
 int maxpr=0,bestbuy=price[0];
 for (int i = 1; i < price.size(); i++)
 {
     if (price[i]>bestbuy)
     {
         maxpr=max(maxpr,price[i]-bestbuy);
     }

     bestbuy=min(bestbuy,price[i]);
 }
 return maxpr;

}
int main(){
 vector<int>prices={7,1,5,3,6,4};
 cout<<maxpr(prices)<<endl;
 return 0;
}
 */
/*
container with most water optimized approach
#include <iostream>
#include<vector>
using namespace std;
int maxarea(vector<int>&height){
    int maxwater=0;
    int lp=0,rp=height.size()-1;
    while(lp<rp){
        int w=rp-lp;
        int ht=min(height[rp],height[lp]);
        int currentwater=w*ht;
        maxwater=max(maxwater,currentwater);
        height[lp]<height[rp]?lp++:rp--;
    }
    return maxwater;
}
int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<maxarea(height)<<endl;
    return 0;
}
    */
/*
   brute force for product of an array expect itself
#include <iostream>
#include <vector>
using namespace std;
vector<int> product(vector<int> &nums)
{
   int n = nums.size();
   vector<int> ans(n, 1);
   for (int i = 0; i < n; i++)
   {
       for(int j=0;j<n;j++){
           if (i!=j)
           {
               ans[i]*=nums[j];
           }

       }
   }
   return ans;
}
int main(){
   vector<int> nums={1,2,3,4};
   vector<int> ans=product(nums);
   for(int i=0;i<nums.size();i++){
cout<<ans[i]<<" ";
   }

   return 0;
}

*/
/* product itself optimized approach
#include <iostream>
#include<vector>
using namespace std;

vector<int> proself(vector<int>&nums){
    int n=nums.size();
    vector<int> ans(n,1);
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    int suffix=1;
    for(int i=n-2;i>=0;i--){
        suffix*=nums[i+1];
        ans[i]*=suffix;
    }
    return ans;
}
int main(){
    vector<int> nums={1,2,3,4};
    vector<int> ans=proself(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
    */
/*
search in rotated sorted array
#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> &a, int tar)
{
 int st = 0, end = a.size() - 1;
 while (st <= end)
 {
     int mid = st + (end - st) / 2;
     if (a[mid] == tar)
     {
         return mid;
     }
     if (a[st] <= a[mid])
     {
         if (a[st] <= tar && tar <= a[mid])
         {
             end = mid - 1;
         }
         else
         {
             st = mid + 1;
         }
     }
     else
     {
         if (a[mid] <= tar && tar <= a[end])
         {
             st = mid + 1;
         }
         else
         {
             end = mid - 1;
         }
     }
 }
 return -1;
}
int main(){
 vector<int> a={3,4,5,6,7,0,1,2};
 cout<<search(a,2);
 return 0;
}
 */
/*peak index in mountain array
#include <iostream>
#include <vector>
using namespace std;
int array(vector<int> &a){
    int st=1,end=a.size()-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(a[mid-1]<a[mid]&&a[mid]>a[mid+1]){
            return mid;
        }
        else if (a[mid-1]<a[mid])
        {
            st=mid+1;
        } else{
            end=mid-1;
        }
    }

    return -1;

}
int main(){
    vector<int>a={0,3,8,9,5,2};
    cout<<array(a);
    return 0;
}
    */
/*Bubble sort O(n^2)
#include <iostream>
#include <vector>
using namespace std;
int bubblesort(int arr[], int n)
{
 for (int i = 0; i < n - 1; i++)
 {
     for (int j = 0; j < n - i - 1; j++)
     {
         if (arr[j] > arr[j + 1])
         {
             swap(arr[j], arr[j + 1]);
         }
     }
 }
}
void print(int arr[],int n){
 for (int i = 0; i < n; i++)
 {
     cout<<arr[i]<<" ";
 }

}
int main(){
 int arr[]={4,1,2,3,5,5,4,7,8,9};
int n=10;
bubblesort(arr,n);
print(arr,n);
 return 0;
}
 */
/*Selection sort
#include <iostream>
#include <vector>
using namespace std;
int sesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int small = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
        }
        swap(arr[i], arr[small]);
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {4, 1, 2, 3, 5, 5, 4, 7, 8, 9};
    int n = 10;
    sesort(arr, n);
    print(arr, n);
    return 0;
}
    */
/*Insertion sort
#include <iostream>
#include <vector>
using namespace std;
void inssort(int arr[], int n){
 for(int i=1;i<n;i++){
     int curr=arr[i];
     int prev=i-1;
     while (prev>=0 && arr[prev]>curr)
     {
         arr[prev+1]=arr[prev];
         prev--;
     }
     arr[prev+1]=curr;
 }
}
void print(int arr[], int n)
{
 for (int i = 0; i < n; i++)
 {
     cout << arr[i] << " ";
 }
}
int main()
{
 int arr[] = {4, 1, 2, 3, 5, 5, 4, 7, 8, 9};
 int n = 10;
 inssort(arr, n);
 print(arr, n);
 return 0;
}
 */
/* linear search in 2d array

#include<iostream>
using namespace std;
bool sear(int mat[][3],int row,int col,int key){

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
    if (mat[i][j]==key)
        {
            return true;
        }

    }

}

return false;
}

int main(){
int mat[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
int row=4;
int col=3;
cout<< sear( mat,row,col, 12);

    return 0;
}
    */
/* code for maximum row sum
    #include<iostream>
    using namespace std;
    int sear(int mat[][3],int row,int col){
        int maxrowsum=INT8_MIN;
    for(int i=0;i<row;i++){
        int rowsum=0;
        for(int j=0;j<col;j++){
        rowsum+=mat[i][j];
        }
        maxrowsum=max(maxrowsum,rowsum);
    }
    return maxrowsum;
    }

    int main(){
        int mat[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
        int row=4;
        int col=3;
        cout<< sear( mat,row,col);

            return 0;
    }
            */

/*
Diagonal sum in 2d array
#include<iostream>
using namespace std;
 int diagonalsum(int mat[][4],int n){
 int sum=0;
 for(int i=0;i<n;i++){
  sum += mat[i][i];
  if (i  != n-i-1)
  {
     sum+=mat[i][n-i-1];
  }

 }
 return sum;
 }

 int main(){
  int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  int n=4;
     cout<< diagonalsum( mat,n);

         return 0;
 }
 */

 /* 
 recursion use to print N to 1 
#include <iostream>
using namespace std;
void f(int n){
    if(n<1) return;
    cout<<n<<endl;
    f(n-1);
}
int main()
{
    int n;
    cin>>n;
  f(n);

    return 0;
}
    */
   /*
   print 1 to n using recursion backtraking

#include <iostream>
using namespace std;
void f(int i,int n){
    if(i<1) return;
    f(i-1,n);
    cout<<i<<endl;
}
int main()
{
    int n;
    cin>>n;
  f(n,n);

    return 0;
}
    */
   
   /*
   n to 1 by backtraking
   #include <iostream>
using namespace std;

void f(int i, int n) {
    if (i > n) return;     // base case
    f(i + 1, n);           // go deeper first
    cout << i << endl;     // print while coming back
}

int main() {
    int n;
    cin >> n;
    f(1, n);
    return 0;
}

   */
