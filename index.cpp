/*
largest element in array
#include<iostream>
using namespace std;
int main(){
 int lar=INT32_MIN;
 int seclar=INT32_MIN;
 int n=8;
 int arr[]={1,4,2,5,6,7,3,10};
 for(int i=0;i<n;i++){
    if (lar<arr[i])
    {
     lar=arr[i];
    }

 }
 cout<<lar;
 return 0;
}
 */

/*
second largest element in array
#include<iostream>
using namespace std;
int main(){
int lar=INT32_MIN;
int seclar=INT32_MIN;
int n=8;
int arr[]={1,4,2,5,6,7,3,10};
for(int i=0;i<n;i++){
 if (lar<arr[i])
 {
  seclar=lar;
  lar=arr[i];
 }

}
cout<<seclar<<" "<<lar;
return 0;
}
*/
/*
check if the array sorted
#include <iostream>
using namespace std;
bool sorted(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;

}
int main()
{
    int arr[] ={3,4,5,1,2};
    int n=5;
    cout<<sorted(arr,n);
    return 0;
}
*/

/*
 remove duplicates from an array
#include <iostream>
#include<vector>
using namespace std;
int removeduplicates(vector<int> &arr,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    vector<int> arr ={1,1,2,2,3,4,5};
    int n=7;
    removeduplicates(arr,n);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
    */
/*
left rotate array by first place
#include <iostream>
#include<vector>
using namespace std;
int removeduplicat(vector<int> &arr,int n){
 int temp=arr[0];
 for(int i=1;i<n;i++){
   arr[i-1]=arr[i];
   }
   arr[n-1]=temp;
 }
int main(){
 vector<int> arr={1,2,3,4,5};
 int n=arr.size();
 removeduplicat(arr,n);
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
}
 */
/*
brute force for rotate array by d place
TC-O(N+d)
SC-O(d)

#include<iostream>
#include<vector>
using namespace std;
void leftrotate(int arr[],int n,int d){
 d=d%n;
 int temp[d];
 for(int i=0;i<d;i++){
     temp[i]=arr[i];
 }
 for(int i=d;i<n;i++){
     arr[i-d]=arr[i];
 }
 for(int i=n-d;i<n;i++){
     arr[i]=temp[i-(n-d)];
 }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
 cin>>arr[i];
}
int d;
cin>>d;
leftrotate(arr,n,d);
for(int i=0;i<n;i++){
 cout<<arr[i]<<" ";
}
 return 0;
}
 */
/*
left rotate with d place optimal approach
TC-O(2N)
SC-O(1)
#include <iostream>
#include <algorithm>
using namespace std;
void leftrotate(int arr[], int n, int d)
{
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    leftrotate(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
    */
/*
brute force for moving zeros to end in array
TC-O(2N)
SC-O(N)
#include <iostream>
#include<vector>
using namespace std;
vector<int> movezeros(int n,vector<int> a){
 vector<int>temp;
 for(int i=0;i<n;i++){
     if(a[i]!=0){
         temp.push_back(a[i]);
     }
 }
 int nz=temp.size();
 for(int i=0;i<nz;i++){
     a[i]=temp[i];
 }
 for(int i=nz;i<n;i++){
     a[i]=0;
 }
 return a;
}
int main()
{
 vector<int> a={0,1,2,0,1,4,7,1,0,0,8,9};
 int n=a.size();
a = movezeros(n,a);
 for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
 }
 return 0;
}
 */
/*
Optimal approach for move array to end
TC-O(N)
SC-O(1)
#include <iostream>
#include<vector>
using namespace std;

vector<int> movezeros(int n,vector<int> a){
 int j=-1;
 for(int i=0;i<n;i++){
     if(a[i]==0){
        j=i;
        break;
     }
 }
     if(j==-1) return 0;
 for(int i=j+1;i<n;i++){
    if(a[i]!=0){
        swap(a[i],a[j]);
        j++;
    }
 }
 return a;
}
int main()
{
 vector<int> a={0,1,2,7,1,0,0,8,9};
 int n=a.size();
a = movezeros(n,a);
 for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
 }
 return 0;
} */
/*
Brute force for missing number
TC-O(n^2)
SC-O(1)
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,13};
    int n=13;
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<endl;
        }
    }
   return 0;
}
   */
/*
Optimal approach for missing number
TC-O(n)
SC-O(1)
#include<iostream>
#include<vector>
using namespace std;
int missingnum(vector<int>&a,int N){
  int xor1=0,xor2=0;
  int n=N-1;
  for(int i=0;i<n;i++){
   xor2=xor2^a[i];
   xor1=xor1^(i+1);
  }
  xor1=xor1^N;
  return xor1^xor2;
}
int main(){
 vector<int> a={1,2,3,4,5,7,8,9,10};
 int N=10;
 cout<<missingnum(a,N)<<endl;
  return 0;
}
  */
/*
find max consuctive ones
TC-O(n)
#include<iostream>
#include<vector>
using namespace std;
 int findMaxConsecutiveOnes(vector<int>& nums) {
     int max1=0;
     int count=0;
     for(int i=0;i<nums.size();i++){
         if(nums[i]==1){
             count++;
             max1=max(max1,count);
         }
         else{
             count=0;
         }
     }
     return max1;
 }
int main(){
vector<int> nums={1,1,0,1,1,1,0,1,1};
cout<<findMaxConsecutiveOnes(nums);
 return 0;
}
 */
/*
single number
TC-O(n)
SC-O(1)
#include<iostream>
#include<vector>
using namespace std;
int singlenumber(vector<int>&arr){
 int xorr=0;
 for(int i=0;i<arr.size();i++){
     xorr=xorr^arr[i];
 }
 return xorr;
}
int main(){
 vector<int> arr={1,1,2,3,3,4,4};
 cout<<singlenumber(arr);
 return 0;
}
 */
/*
optimal solution for maxsubarray sum with positive
TC-O(2n)
SC-O(1)
 #include<iostream>
 #include<vector>
 using namespace std;
 int maxsubarray(vector<int> a,long long k){
     int left=0,right=0;
     long long sum=a[0];
     int maxlen=0;
     int n=a.size();
     while(right<n){
         while(left<=right && sum>k){
             sum-=a[left];
             left++;
         }
         if(sum==k){
             maxlen=max(maxlen,right-left+1);
         }
         right++;
         if(right<n) sum+=a[right];
     }
     return maxlen;
 }
 int main(){
    vector<int> a={1,2,3,1,1,3,3};
    long long k=6;
    cout<<maxsubarray(a,k);
     return 0;
 }
*/
/*
brute force for check element frequency
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,1,3,2,1,1,1,1,1,1};
    int num = 1;
    int n=11;
    int count =0;
    for(int i=0;i<n;i++){
        if(num==arr[i]){
            count++;
        }
    }
    cout<<count;
    return 0;
}
  */
/*
optimized approach of element frequency using hashmap
#include <iostream>
using namespace std;
int main()
{
 int n;
 cout<<"enter size of array"<<endl;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];

 }
 int hash[13]={0};
 for(int i=0;i<n;i++){
     hash[arr[i]] += 1;
 }
 int q;
 cin>>q;
 while(q--){
     int number;
     cin>>number;
     cout<<hash[number]<<endl;
 }
 return 0;
}
 */
/*
longest subarray sum with negatives optimal approach
TC-O(n+logn)
SC-O(1)
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int longestsubarray(vector<int> a,long long k){
    map<long long ,int> presummap;
    long long sum=0;
    int maxlen=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);
        }
        long long rem=sum-k;
        if(presummap.find(rem) != presummap.end()){
            int len = i-presummap[rem];
            maxlen=max(maxlen,len);
        }
        if(presummap.find(sum)==presummap.end()){
            presummap[sum]=i;
        }
    }
    return maxlen;
}
int main(){
    vector<int> a={1,2,3,1,1,3,3};
    long long k=6;
    cout<<longestsubarray(a,k);
    return 0;
}*/

/*
count the frequency of elements in string
#include <iostream>
using namespace std;
int main(){
   string str;
   cin>>str;

   int hash[26]={0};
   for(int i=0; i<str.size();i++){
    hash[str[i]-'a'] ++;
   }
   int q;
   cin>>q;
   while(q--){
   char c;
   cin>>c;
   cout<<hash[c-'a']<<endl;
   }
    return 0;
}
    */
/*
count element frequency using map
#include <iostream>
#include <map>
using namespace std;
int main()
{
 int n;
 cin >> n;
 int arr[n];
 for (int i = 0; i < n; i++)
 {
     cin >> arr[i];
 }
 map<int, int> mpp;
 for (int i = 0; i < n; i++)
 {
     mpp[arr[i]]++;
 }
 for(auto it : mpp){
    cout<<it.first<<"->"<<it.second<<endl;
 }
 int q;
 cin >> q;
 while (q--)
 {
     int num;
     cin >> num;
     cout << mpp[num] << endl;
 }

 return 0;
}
 */
/*
count char frequency in string using map
#include <iostream>
#include <map>
using namespace std;
int main()
{
    string n;
    cin >> n;
    map<int, int> mpp;
    for (int i = 0; i < n.size(); i++)
    {
        mpp[n[i]]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << mpp[c] << endl;
    }

    return 0;
}
*/
/*
find highest/lowest frequency element
#include <iostream>
#include <map>
#include <climits>
using namespace std;

int main() {
    int arr[] = {1,1,1,1,2,2,3,3,3,3,3,5};
    map<int,int> mpp;

    for(int i=0;i<12;i++){
        mpp[arr[i]]++;
    }

    int lar = INT_MIN;
    int minn = INT_MAX;

    // find highest and lowest frequency
    for(auto it : mpp){
        lar = max(lar, it.second);
        minn = min(minn, it.second);
    }

    // print elements with highest frequency
    for(auto it : mpp){
        if(it.second == lar){
            cout << "High is " << it.first << " -> " << lar << endl;
        }
    }

    // print elements with lowest frequency
    for(auto it : mpp){
        if(it.second == minn){
            cout << "Low  is " << it.first << " -> " << minn << endl;
        }
    }

    return 0;
}
*/
/*
TC -O(nlogn)
SC- O(n)
two sum problem better approach using hashmap
#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> twosum(vector<int> &a,int tar){
    map<int,int> mp;
    for(int i=0;i<a.size();i++){
        int complement=tar-a[i];
        if(mp.find(complement)!=mp.end()){
            return {mp[complement],i};
        }
        mp[a[i]]=i;
    }
    return {};
}
int main(){
    vector<int> a={7,9,2,11};
    int tar=9;
    vector<int> ans= twosum(a,tar);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}
    */
/*
two pointer approach for 2 sum problem
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> twosum(vector<int> &arr, int target)
{
 sort(arr.begin(), arr.end());
 int i = 0, j = arr.size() - 1;
 while (i < j)
 {
     int sum = arr[i] + arr[j];
     if (sum == target) return {i, j};
     else if(sum<target) i++;
     else j--;
 }
 return {};
}
int main()
{
 vector<int> arr = {7, 5, 2, 11};
 int target = 9;
 vector<int> ans = twosum(arr, target);
 cout << ans[0] << " " << ans[1];
 return 0;
}
 */
/*
TC-O(2n)
SC-O(1)
sort an array of 0's 1's 2's better approach
#include <iostream>
#include<vector>
using namespace std;
void sortarrays(vector<int> &arr){
    int count0=0,count1=0,count2=0,n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==0) count0++;
        else if(arr[i]==1) count1++;
        else count2++;
    }
    for(int i=0;i<count0;i++) arr[i]=0;
    for(int i=count0;i<count0+count1;i++) arr[i]=1;
    for(int i=count0+count1;i<n;i++) arr[i]=2;
}
int main(){
    vector<int> arr={0,1,0,1,1,2,1,2,0,0};
    sortarrays(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
    */
/*
TC-O(n)
SC-O(1)
sort an array of 0's 1's 2's optimal approach DNF algo
#include<iostream>
#include<vector>
using namespace std;
void sortarray(vector<int>& arr,int n){
 int low=0,mid=0,high=n-1;
 while(mid<=high){
     if(arr[mid]==0){
         swap(arr[low],arr[mid]);
         low++;
         mid++;
     }
     else if(arr[mid]==1) mid++;
     else {
         swap(arr[mid],arr[high]);
         high--;
     }
 }
}
int main(){
 vector<int> arr={0,1,2,1,2,0,2,1,0,1};
 int n=arr.size();
 sortarray(arr,n);
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
}
 */
/*
TC-O(n^2)
SC-O(1)
majority element > n/2 brute force
#include<iostream>
#include<vector>
using namespace std;
int majorityelement(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        int count=0;
          for(int j=0;j<arr.size();j++){
            if(arr[j]==arr[i]) count++;
            if(count>arr.size()/2) return arr[i];
          }
    }
    return -1;
}
int main(){
    vector<int> arr={1,1,1,1,1,2,2,2,0};
    cout<<majorityelement(arr);
    return 0;
}
    */
/*
TC-O(nlogn)
SC-O(n)
majority element > n/2 better approach hashing
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int majorityelement(vector<int> &arr)
{
 map<int, int> mpp;
 for (int i = 0; i < arr.size(); i++)
 {
     mpp[arr[i]]++;
 }
 for (auto it : mpp)
 {
     if (it.second > (arr.size() / 2))
         return it.first;
 }
 return -1;
}
int main()
{
 vector<int> arr = {2, 2, 2, 2, 1, 1, 0};
 cout << majorityelement(arr);
 return 0;
}
*/
/*
TC-O(n)
SC-O(1)
majority element > n/2 optimal approach moores voting algorithem
#include<iostream>
#include<vector>
using namespace std;
int majorityelement(vector<int>& arr){
    int cnt=0;
    int el;
    for(int i=0;i<arr.size();i++){
        if(cnt==0){
            cnt=1;
            el=arr[i];
        }
        else if(arr[i]==el) cnt++;
        else cnt--;
        int cnt1=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==el) cnt1++;
        }
        if(cnt1>(arr.size()/2)) return el;
    }
    return -1;
}
int main(){
     vector<int> arr = {2, 1, 1, 1, 0};
     cout<<majorityelement(arr);
    return 0;
}
    */
/*
better approach for maxsubarray sum
TC-O(n^2)
SC-O(1)
#include<bits/stdc++.h>
using namespace std;
int maxsubarraysum(int arr[],int n){
 int maxi=INT_MIN;
 for(int i=0;i<n;i++){
     int sum =0;
     for(int j=i;j<n;j++){
         sum+=arr[j];
         maxi=max(sum,maxi);
     }
 }
 return maxi;
}
int main(){
 int arr[]={-2,-3,4,-1,-2,1,5,-3};
 int n=8;
 cout<<maxsubarraysum(arr,n);
 return 0;
}
 */
/*
TC-O(n^2)
SC-O(1)
optimal approach for maxsubarraysum using kadanes algorithem
#include <bits/stdc++.h>
using namespace std;
long long maxsubarraysum(int arr[],int n){
    long long sum=0,maxi=LONG_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
       if(sum>maxi){
        maxi=sum;
       }
        if(sum<0) sum=0;
    }
    return maxi;
}
int main(){
 int arr[]={-2,-3,4,-1,-2,1,5,-3};
 int n=8;
 cout<<maxsubarraysum(arr,n);
 return 0;
}
 */
/*
TC-O(n)
SC-O(1)
best time to buy and sell the stock dp problem
#include <bits/stdc++.h>
using namespace std;
int maxprofit(vector<int> &prices){
    int mini=prices[0];
    int maxprofit=0;
    int n=prices.size();
    for(int i=0;i<n;i++){
        int cost = prices[i]-mini;
        maxprofit=max(maxprofit,cost);
        mini=min(mini,prices[i]);
    }
    return maxprofit;
}
int main(){
    vector<int> prices={7,1,3,11,5,9,6};
    cout<<maxprofit(prices);
    return 0;
}
    */
/*
TC-O(nlogn)
TC-O(n)
leader in an array optimal approach
#include <bits/stdc++.h>
using namespace std;
vector<int> leader(vector<int> &a){
 vector<int> ans;
 int maxi=INT_MIN;
 int n=a.size();
 for(int i=n-1;i>=0;i--){
     if(a[i]>maxi){
         ans.push_back(a[i]);
     }
     maxi=max(maxi,a[i]);
 }
 sort(ans.begin(),ans.end());
 return ans;
}
int main(){
 vector<int> a={10,22,12,3,0,6};
 vector<int> ans=leader(a);
 for(int i=0;i<ans.size();i++){
     cout<<ans[i]<<" ";
 }
 return 0;
}
 */
/*
Rearrange elements by sign of pos and neg =n/2 size
TC-O(n)
SC-O(n)
#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangearray(vector<int> &nums){
    int n=nums.size();
    vector<int> ans(n,0);
    int pos=0,neg=1;
    for(int i=0;i<n;i++) {
       if(nums[i]<0){
        ans[neg]=nums[i];
        neg+=2;
       }
       else{
        ans[pos]=nums[i];
        pos+=2;
       }
    }
    return ans;
}
int main(){
    vector<int> nums={3,1,-2,-5,2,-4};
    vector<int> ans=rearrangearray(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
    */
/*
Rearrange elements by sign of pos or neg > n/2 size
TC-O(2n)
SC-O(n)
#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangearray(vector<int> &a)
{
 vector<int> pos, neg;
 int n = a.size();
 for (int i = 0; i < n; i++)
 {
     if (a[i] > 0)
     {
         pos.push_back(a[i]);
     }
     else
     {
         neg.push_back(a[i]);
     }
 }
 if (pos.size() > neg.size())
 {
     for (int i = 0; i < neg.size(); i++)
     {
         a[2 * i] = pos[i];
         a[2 * i + 1] = neg[i];
     }
     int index = neg.size() * 2;
     for (int i = neg.size(); i < pos.size(); i++)
     {
         a[index] = pos[i];
         index++;
     }
 }

 else
 {
     for (int i = 0; i < pos.size(); i++)
     {
         a[2 * i] = pos[i];
         a[2 * i + 1] = neg[i];
     }
     int index = pos.size() * 2;
     for (int i = pos.size(); i < neg.size(); i++)
     {
         a[index] = neg[i];
         index++;
     }
 }
 return a;
}
int main(){
 vector<int> a={-1,2,3,4,-3,1};
 vector<int> ans=rearrangearray(a);
 for(int i=0;i<ans.size();i++){
     cout<<ans[i]<<" ";
 }
 return 0;
}
 */
/*
better approach for next permutation problem using stl
#include <bits/stdc++.h>
using namespace std;
 vector<int> nextpermutation(vector<int> &arr){
    next_permutation(arr.begin(),arr.end());
    return arr;
 }
int main(){
 vector<int> arr={2,1,5,4,3,0,0};
 vector<int> ans=nextpermutation(arr);
 for(int i=0;i<arr.size();i++){
    cout<<ans[i]<<" ";
 }
    return 0;
}
    */
/*
Optimal approach for next permutation
TC-O(3n)
TC-O(n)
#include <bits/stdc++.h>
using namespace std;
vector<int> nextpermutation(vector<int> &a){
 int ind=-1;
 int n=a.size();
 for(int i=n-2;i>=0;i--){
     if(a[i]<a[i+1]){
         ind=i;
         break;
     }
 }
 if(ind==-1){
     reverse(a.begin(),a.end());
     return a;
 }
 for(int i=n-1;i>ind;i--){
     if(a[i]>a[ind]){
         swap(a[i],a[ind]);
         break;
     }
 }
 reverse(a.begin()+ind+1,a.end());
 return a;
}
int main(){
vector<int> arr={2,1,5,4,3,0,0};
vector<int> ans=nextpermutation(arr);
for(int i=0;i<arr.size();i++){
 cout<<ans[i]<<" ";
}
 return 0;
}
 */
/*
TC-O(nlogn+n)
TC-O(1)
longest consuctive sequence better approach
#include <bits/stdc++.h>
using namespace std;
int longestconsuctiveseq(vector<int>& arr){
    sort(arr.begin(),arr.end());
    int longest=1,count=0,lastsmall=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]-1==lastsmall){
          count++;
          lastsmall=arr[i];
        }
        else if(arr[i]!=lastsmall){
            count=1;
            lastsmall=arr[i];
        }
        longest=max(longest,count);
    }
    return longest;
}
int main(){
  vector<int>arr={102,100,1,101,2,1,1,1,2};
  cout<<longestconsuctiveseq(arr);
    return 0;
}
    */
/*
TC-O(3n)
TC-O(1)
longest consuctive sequence optimal approach
#include <bits/stdc++.h>
using namespace std;
int longestconsuctiveseq(vector<int>& arr){
  int n=arr.size();
  if(n==0) return 0;
  int longest =1;
  unordered_set<int> st;
  for(int i=0;i<n;i++){
    st.insert(arr[i]);
  }
  for(auto it:st){
    if(st.find(it-1)==st.end()){
        int count=1;
        int x= it;
        while(st.find(x+1)!=st.end()){
            x++;
            count++;
        }
        longest=max(longest,count);
    }
  }
  return longest;
}
int main(){
    vector<int> arr={102,1,2,103,104,3,4,100,5};
    cout<<longestconsuctiveseq(arr);
    return 0;
}
    */
/*
set matrix zeros optimal solution
TC-O(n*m)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
 void setZeroes(vector<vector<int>>& matrix) {
     int n = matrix.size(), m = matrix[0].size();
     bool firstRow = false, firstCol = false;

     // Step 1: Mark rows and cols using first row/col
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < m; j++) {
             if (matrix[i][j] == 0) {
                 if (i == 0) firstRow = true;
                 if (j == 0) firstCol = true;
                 matrix[0][j] = 0;
                 matrix[i][0] = 0;
             }
         }
     }

     // Step 2: Set zeros based on marks
     for (int i = 1; i < n; i++) {
         for (int j = 1; j < m; j++) {
             if (matrix[i][0] == 0 || matrix[0][j] == 0)
                 matrix[i][j] = 0;
         }
     }

     // Step 3: Handle first row and column
     if (firstRow)
         for (int j = 0; j < m; j++) matrix[0][j] = 0;
     if (firstCol)
         for (int i = 0; i < n; i++) matrix[i][0] = 0;
 }
};

int main() {
 vector<vector<int>> matrix = {
     {1, 1, 1},
     {1, 0, 1},
     {1, 1, 1}
 };

 Solution obj;
 obj.setZeroes(matrix);

 cout << "Matrix after setting zeroes:\n";
 for (auto row : matrix) {
     for (auto val : row)
         cout << val << " ";
     cout << endl;
 }

 return 0;
}
*/
/*
brute force for rotate matrix by 90 degree
TC-O(n^2)
SC-O(n^2)
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> rotate90(vector<vector<int>>& matrix){
    int n=matrix.size();
    vector<vector<int>> ans(n,vector<int>(n));
    for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix.size();j++){
        ans[j][n-i-1]=matrix[i][j];
    }
}
return ans;
}
int main(){
   vector<vector<int>> matrix={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
   };
  vector<vector<int>> ans=rotate90(matrix);
  for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[0].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
    return 0;
}
    */

/*
Rotate matrix by 90 degree optimal solution
TC-O(n^2)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
void rotate90(vector<vector<int>>& matrix){
    int n=matrix.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}
int main(){
   vector<vector<int>> matrix={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
   };
   rotate90(matrix);
    for (auto row : matrix) {
        for (auto val : row)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}
    */
/*
Spiral Matrix Problem
#include <bits/stdc++.h>
using namespace std;
vector<int> spiralmatrix(vector<vector<int>> &mat)
{
 int n = mat.size();
 int m = mat[0].size();
 int left = 0, right = n - 1;
 int top = 0, bottom = n - 1;
 vector<int> ans;
 while (left <= right && top <= bottom)
 {
     for (int i = left; i <= right; i++)
     {
         ans.push_back(mat[top][i]);
     }
     top++;
     for (int i = top; i <= bottom; i++)
     {
         ans.push_back(mat[i][right]);
     }
     right--;
     if (top <= bottom)
     {
         for (int i = right; i >= left; i--)
         {
             ans.push_back(mat[bottom][i]);
         }
         bottom--;
     }
     if (left <= right)
     {
         for (int i = bottom; i >= top; i--)
         {
             ans.push_back(mat[i][left]);
         }
         left++;
     }
 }
 return ans;
}
int main()
{
vector<vector<int>> mat={
 {1,2,4},
 {5,6,8},
 {3,4,5}
};
vector<int> ans=spiralmatrix(mat);
for(int i=0;i<ans.size();i++){
 cout<<ans[i]<<" ";
}
 return 0;
}
 */
/*
Better approach for subarrays equals to sum k
TC-O(n^2)
TC-O(n)
#include <bits/stdc++.h>
using namespace std;
int subarraysequalstok(vector<int> &arr,int k){
    int count=0;
    for(int i=0;i<arr.size();i++){
        int sum=0;
        for(int j=i;j<arr.size();j++){
            sum+=arr[j];
            if(sum==k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> arr={1,2,3,-3,1,1,1,4,2,-3};
    int k=3;
    cout<<subarraysequalstok(arr,k);
    return 0;
}
    */
/*
optimal sol for subarrays equals to sum k
TC-O(n)
TC-O(n)
#include <bits/stdc++.h>
using namespace std;
int subarraysequalstok(vector<int> &arr, int k)
{
 unordered_map<int,int> mpp;
 mpp[0]=1;
 int presum=0,count=0;
 for(int i=0;i<arr.size();i++){
     presum+=arr[i];
     int remove=presum-k;
     count+=mpp[remove];
     mpp[presum]+=1;
 }
 return count;
}
int main(){
 vector<int> arr={1,2,3,-3,1,1,1,4,2,-3};
 int k=3;
 cout<<subarraysequalstok(arr,k);
 return 0;
}
 */
/*
pascal triangle given element at Row N and Column R
TC-O(n)
#include<bits/stdc++.h>
using namespace std;
int funnCr(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
 int main(){
    int n=4;
    int r=2;
    cout<<funnCr(n,r)<<" ";
    return 0;
 }
    */
/*
pascal triangle given element at Row N and Column R
TC-O(n)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;

void funnCr(int n)
{
 int res = 1;
 cout << res << " ";
 for (int i = 1; i < n; i++)
 {
     res = res * (n - i);
     res = res / i;
     cout << res << " ";
 }
}

int main()
{
 int n = 4;
 funnCr(n);
 return 0;
}
*/
/*
pascal triangle given element at Row N and Column R
TC-O(n^2)
SC-O(n)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for (int row = 1; row <= numRows; row++) {
            vector<int> temp;
            long long res = 1; // first element of every row is 1
            temp.push_back(res);

            for (int col = 1; col < row; col++) {
                res = res * (row - col);
                res = res / col;
                temp.push_back(res);
            }
            ans.push_back(temp);
        }

        return ans;
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    vector<vector<int>> triangle = obj.generate(n);

    cout << "\nPascal's Triangle:\n";
    for (auto &row : triangle) {
        for (auto &num : row) cout << num << " ";
        cout << endl;
    }
    return 0;
}
*/
/*
brute force for majority element n/3
TC-O(n^2)
TC-O(1)
#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> arr) {
    vector<int> ans;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int count = 0;

        // skip already processed elements
        bool already = false;
        for (int x : ans) {
            if (x == arr[i]) {
                already = true;
                break;
            }
        }
        if (already) continue;

        // count frequency of arr[i]
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        // check if it appears more than n/3 times
        if (count > n / 3)
            ans.push_back(arr[i]);
    }

    return ans;
}

int main() {
    vector<int> arr = {1,1, 1, 1,1, 2,2,2, 4, 2, 2, 5, 7};
    vector<int> res = majorityElement(arr);

    if (res.empty()) cout << "No majority element";
    else {
        for (int x : res)
            cout << x << " ";
    }

    return 0;
}
*/
/*
better approach for majority element n/3
TC-O(n)
TC-O(n)
#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &arr) {
    unordered_map<int, int> freq;
    vector<int> ans;
    int n = arr.size();

    // Count how many times each element appears
    for (int x : arr)
        freq[x]++;

    // Check which elements appear more than n/3 times
    for (auto it : freq) {
        if (it.second > n / 3)
            ans.push_back(it.first);
    }

    return ans;
}

int main() {
    vector<int> arr = {1,1, 1, 1, 2, 4, 2, 2, 5, 7};
    vector<int> res = majorityElement(arr);

    for (int x : res)
        cout << x << " ";

    return 0;
}
    */
/*
optimal for majority element n/3
TC-O(n)
TC-O(1)
#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
 int n = nums.size();
 int count1 = 0, count2 = 0;
 int candidate1 = INT_MIN, candidate2 = INT_MIN;

 // Step 1: Find two possible candidates
 for (int num : nums) {
     if (num == candidate1)
         count1++;
     else if (num == candidate2)
         count2++;
     else if (count1 == 0) {
         candidate1 = num;
         count1 = 1;
     } else if (count2 == 0) {
         candidate2 = num;
         count2 = 1;
     } else {
         count1--;
         count2--;
     }
 }

 // Step 2: Verify the candidates
 count1 = count2 = 0;
 for (int num : nums) {
     if (num == candidate1) count1++;
     else if (num == candidate2) count2++;
 }

 vector<int> ans;
 if (count1 > n / 3) ans.push_back(candidate1);
 if (count2 > n / 3) ans.push_back(candidate2);

 return ans;
}

int main() {
 vector<int> arr = {1, 1, 1, 2, 4, 2, 2, 5, 7};
 vector<int> res = majorityElement(arr);

 for (int x : res)
     cout << x << " ";

 return 0;
}
*/
/*
TC-O(n^3)
TC-O(n)
brute force for 3 sum
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threesum(vector<int> arr)
{
    set<vector<int>> st;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            for (int k = j+1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> ls={arr[i],arr[j],arr[k]};
                    sort(ls.begin(),ls.end());
                    st.insert(ls);
                }
            }
        }
    }
     vector<vector<int>> ans(st.begin(),st.end());
     return ans;
}
int main()
{
     vector<int> arr = {-1, -2, 2, 5, 4, -4, -3, -4, 7, 8};
 vector<vector<int>> ans = threesum(arr);

 for (auto triplet : ans) {
     for (auto num : triplet) {
         cout << num << " ";
     }
     cout << endl;
 }

 return 0;
}
    */
/*
TC-O(n^2)
TC-O(n)
better approach for 3 sum
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threesum(vector<int> arr, int n) {
 set<vector<int>> st;

 for (int i = 0; i < n; i++) {
     set<int> hashset;
     for (int j = i + 1; j < n; j++) {
         int third = -(arr[i] + arr[j]);
         if (hashset.find(third) != hashset.end()) {
             vector<int> temp = {arr[i], arr[j], third};
             sort(temp.begin(), temp.end());
             st.insert(temp);
         }
         hashset.insert(arr[j]);
     }
 }

 vector<vector<int>> ans(st.begin(), st.end());
 return ans;
}

int main() {
 vector<int> arr = {-1, -2, 2, 5, 4, -4, -3, -4, 7, 8};
 int n = arr.size();
 vector<vector<int>> ans = threesum(arr, n);

 for (auto triplet : ans) {
     for (auto num : triplet) {
         cout << num << " ";
     }
     cout << endl;
 }

 return 0;
}
*/
/*
TC-O(n^2)
TC-O(n)
Optimal approach for 3 sum
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threesum(vector<int> arr, int n) {
vector<vector<int>> ans;
sort(arr.begin(),arr.end());
for(int i=0;i<n;i++){
    if(i>0 && arr[i]==arr[i-1]) continue;
    int j=i+1;
    int k=n-1;
    while(j<k){
        int sum=arr[i]+arr[j]+arr[k];
        if(sum<0){
            j++;
        }
        else if(sum>0){
            k--;
        }
        else {
            vector<int> temp={arr[i],arr[j],arr[k]};
            ans.push_back(temp);
            j++;
            k--;
            while(j<k && arr[j]==arr[j-1]) j++;
            while(j<k && arr[k]==arr[k+1]) k--;
         }
    } 
}
return ans;
}
int main(){
 vector<int> arr = {-1, -2, 2, 5, 4, -4, -3, -4, 7, 8};
 int n = arr.size();
 vector<vector<int>> ans = threesum(arr, n);

 for (auto triplet : ans) {
     for (auto num : triplet) {
         cout << num << " ";
     }
     cout << endl;
 }

 return 0;
}
 */
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
/*
another code for insertion sort
    #include<iostream>
    using namespace std;
    void bubb(int arr[],int n){
        for(int i=0;i<=n-1;i++){
            int j=i;
            while(j>0  &&  arr[j-1]>arr[j]){
               int temp=arr[j-1];
               arr[j-1]=arr[j];
               arr[j]=temp;
                j--;
            }

            }
        }
    int main(){
         int n=6;
         int arr[]={9,13,20,24,46,4};
         bubb(arr,n);
         for (int i = 0; i < n; i++)
         {
            cout<<arr[i]<<" ";
         }
        return 0;
     }
     */
/*
quick sort algorithem
#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
int pivot = arr[low];
int i = low;
int j = high;
while (i < j)
{
    while (arr[i] <= pivot && i <= high - 1)
    {
        i++;
    }
    while (arr[j] > pivot && j >= low + 1)
    {
        j--;
    }
    if (i < j) swap(arr[i], arr[j]);
}
swap(arr[low], arr[j]);
return j;
}
void qs(vector<int> &arr, int low, int high)
{
if (low < high)
{
    int pindex = partition(arr, low, high);
    qs(arr, low, pindex - 1);
    qs(arr, pindex + 1, high);
}
}
vector<int> quicksort(vector<int> arr)
{
qs(arr, 0, arr.size() - 1);
return arr;
}
int main()
{
vector<int> arr = {3, 4, 5, 6, 7, 8, 1};
arr = quicksort(arr);
 for (int i = 0; i < arr.size(); i++)
{
    cout << arr[i] << " ";
}
}
*/
/*
linear search in an array
#include<iostream>
#include<vector>
using namespace std;
int linearsearch(int n,int num,vector<int>& arr){
    for(int i=0;i<num;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={2,3,4,5,7,8,9};
    int num=2;
    int n=arr.size();
    cout<<linearsearch(n,num,arr);
    return 0;
}
    */
/*
Uninon of an array
TC- O(n1+n2)
SC- O(n1+n2)
#include<iostream>
#include<vector>
using namespace std;
vector<int> sortedarray(vector<int> a,vector<int> b){
int n1=a.size();
int n2=b.size();
int i=0;
int j=0;
vector<int> unionarr;
while(i<n1 && j<n2){
 if(a[i]<=b[j]){
     if(unionarr.size()==0 || unionarr.back()!=a[i]){
         unionarr.push_back(a[i]);
     }
     i++;
 }
 else{
     if(unionarr.size()==0 || unionarr.back()!=b[j]){
         unionarr.push_back(b[j]);
     }
     j++;
 }
}
while(j<n2){
if(unionarr.size()==0 || unionarr.back()!=b[j]){
         unionarr.push_back(b[j]);
     }
     j++;
}
while(i<n1){
   if(unionarr.size()==0 || unionarr.back()!=a[i]){
         unionarr.push_back(a[i]);
     }
     i++;
}
return unionarr;

}

int main(){
vector<int> a={1,1,2,3,4,5};
vector<int> b={2,3,4,4,5,6,8,9};
vector<int> uni= sortedarray(a,b);
for(int i=0;i<uni.size();i++){
 cout<<uni[i]<<" ";
}
 return 0;
}
 */
/*
intersection of an array optimal
TC- O(n1+n2)
SC- O(1)
#include <iostream>
#include <vector>
using namespace std;
vector<int> intersection(vector<int> &a, vector<int> &b, int n)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n && j < n)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }

    return ans;
}

int main()
{
    vector<int> a = {1, 1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 4, 4, 5, 6, 8, 9};
    int n = min(a.size(), b.size());
    vector<int> uni = intersection(a, b, n);
    for (int i = 0; i < uni.size(); i++)
    {
        cout << uni[i] << " ";
    }
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

/*
Sum of first N numbers using parametarised way

#include <iostream>
using namespace std;
void f(int i, int sum) {
 if (i < 1){
     cout <<sum;
      return;
 }
 f(i - 1, sum + i);
}

int main() {
 int i;
 cout<<"enter i"<<endl;
 cin >> i;
 f(i, 0);
 return 0;
}
 */
/*
Sum of first N numbers using functional way
 #include <iostream>
using namespace std;
int f(int n) {
 if (n==0) return 0;
 return n + f(n - 1);
}

int main() {
 int n=5;
 cout<<f(n) << endl; // Output: 15
 return 0;
}
 */
/*
factorial of a number using functional way
 #include <iostream>
using namespace std;
int f(int n) {
 if (n==1) return 1;
 return n * f(n - 1);
}

int main() {
 int n=5;
 cout<<f(n) << endl; // Output: 120
 return 0;
}
 */
/*
Reverse an array using recursion with two pointers
#include <iostream>
using namespace std;

void f(int arr[], int l, int r)
{
    if (l >= r)
        return;
    swap(arr[l], arr[r]);
    f(arr, l + 1, r - 1);
}

int main()
{
    int arr[] = {4, 2, 5, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    f(arr, 0, n - 1);

    // Print reversed array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; output: 5 4 5 2 4
    }
    cout << endl;

    return 0;
}
    */
/*
Reverse an array using recursion with one pointer
#include <iostream>
using namespace std;

void f(int arr[], int i, int n) {
    if (i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    f(arr,i+1,n);
}

int main() {
  int n;
  cout<<"enter array size :";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++) cin>>arr[i];
  f(arr,0,n);
   for(int i=0;i<n;i++) cout<<arr[i]; // input: 1 2 3 4 5 output: 5 4 3 2 1
    return 0;
}
    */
/*
Check if a string is a palindrome using recursion
#include <iostream>
#include <string>
using namespace std;
bool f(int i,string &s){
 if(i>=s.size()/2) return true;
 if(s[i]!=s[s.size()-i-1]) return false;
 return f(i+1,s);
}
int main() {
string s="madam";  //output: true
cout<<f(0,s);

 return 0;
}
 */
/*
Check if a number is a palindrome using recursion
#include <iostream>
using namespace std;
int reverseNumber(int num, int rev = 0)
{

   if (num == 0)
       return rev;

   return reverseNumber(num / 10, rev * 10 + num % 10);
}

bool isPalindrome(int num)
{
   if (num < 0)
       return false;
   return num == reverseNumber(num);
}

int main()
{
   int n;
   cout << "Enter a number: ";
   cin >> n;
   if (isPalindrome(n))
       cout << n << " is a palindrome\n";
   else
       cout << n << " is not a palindrome\n";
   return 0;
}
*/
/*
Check if a number is an Armstrong number
#include <iostream>
using namespace std;
int main(){
    int num = 123;
    int sum = 0;
    int original=num;
    while(num!=0){
        int digit =num % 10;
        int cube = digit * digit * digit;
         sum += cube;
        num /= 10;
    }
    if(original==sum) {
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }
    return 0;
}
    */
/*
 nth fibonacci number
#include <iostream>
using namespace std;
int f(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int last = f(n - 1);
    int slast = f(n - 2);
    return last + slast;
}
int main()
{
    int n = 4;
    cout << f(n) << endl;

    return 0;
}
    */
