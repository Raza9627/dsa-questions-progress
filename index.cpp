// till this phase1
/*
largest element in array
#include<iostream>
using namespace std;
int main(){
 int lar=INT32_MIN;
 int seclar=INT32_MIN;
 int n=8;
 int candidates[]={1,4,2,5,6,7,3,10};
 for(int i=0;i<n;i++){
    if (lar candidates[i])
    {
     lar candidates[i];
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
int candidates[]={1,4,2,5,6,7,3,10};
for(int i=0;i<n;i++){
 if (lar candidates[i])
 {
  seclar=lar;
  lar candidates[i];
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
bool sorted(int candidates[],int n){
    for (int i = 1; i < n; i++)
    {
        if candidates[i]> candidates[i-1]){

        }
        else{
            return false;
        }
    }
    return true;

}
int main()
{
    int candidates[] ={3,4,5,1,2};
    int n=5;
    cout<<sorted candidates,n);
    return 0;
}
*/

/*
 remove duplicates from an array
#include <iostream>
#include<vector>
using namespace std;
int removeduplicates(vector<int>  candidates,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if candidates[i]! candidates[j]){
         candidates[i+1] candidates[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    vector<int> candidates ={1,1,2,2,3,4,5};
    int n=7;
    removeduplicates candidates,n);
    for(int i=0;i<5;i++){
        cout< candidates[i]<<" ";
    }
    return 0;
}
    */
/*
left rotate array by first place
#include <iostream>
#include<vector>
using namespace std;
int removeduplicat(vector<int>  candidates,int n){
 int temp candidates[0];
 for(int i=1;i<n;i++){
 candidates[i-1] candidates[i];
   }
 candidates[n-1]=temp;
 }
int main(){
 vector<int> candidates={1,2,3,4,5};
 int n candidates.size();
 removeduplicat candidates,n);
 for(int i=0;i<n;i++){
     cout< candidates[i]<<" ";
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
void leftrotate(int candidates[],int n,int d){
 d=d%n;
 int temp[d];
 for(int i=0;i<d;i++){
     temp[i] candidates[i];
 }
 for(int i=d;i<n;i++){
     candidates[i-d] candidates[i];
 }
 for(int i=n-d;i<n;i++){
     candidates[i]=temp[i-(n-d)];
 }
}
int main(){
int n;
cin>>n;
int candidates[n];
for(int i=0;i<n;i++){
 cin> candidates[i];
}
int d;
cin>>d;
leftrotate candidates,n,d);
for(int i=0;i<n;i++){
 cout< candidates[i]<<" ";
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
void leftrotate(int candidates[], int n, int d)
{
    reverse candidates, candidates + d);
    reverse candidates + d, candidates + n);
    reverse candidates, candidates + n);
}
int main()
{
    int n;
    cin >> n;
    int candidates[n];
    for (int i = 0; i < n; i++)
    {
        cin >> candidates[i];
    }
    int d;
    cin >> d;
    leftrotate candidates, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << candidates[i] << " ";
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
    int candidates[]={1,2,3,4,5,6,7,8,9,10,11,13};
    int n=13;
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if candidates[j]==i){
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
max cosuctive ones 3
TC-O(n^2)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int> candidates, int k){
    int maxi = 0;
    for (int i = 0; i < candidates.size(); i++){
        int zeros = 0;
        for (int j = i; j < candidates.size(); j++){
            if  candidates[j] == 0){
                zeros++;
            }
            if(zeros>k){
                break;
            }
            maxi=max(maxi,j-i+1);
        }
    }
    return maxi;
}
int main()
{
    vector<int> candidates = {0,1,1,1,0,0,0,1,1,1,1};
    int k=2;
    cout << findMaxConsecutiveOnes candidates,k);
    return 0;
}
    */
/*
max cosuctive ones 3 optimal
TC-O(n)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int> candidates, int k){
int maxi=0;
int zeros=0;
int left=0;
for(int right=0;right candidates.size();right++){
 if candidates[right]==0){
     zeros++;
 }
    while(zeros>k){
   if candidates[left]==0){
             zeros--;
         }
         left++;
       }

     maxi=max(maxi,right-left+1);

}
return maxi;
}
int main()
{
 vector<int> candidates = {0,1,1,1,0,0,0,1,1,1,1};
 int k=2;
 cout << findMaxConsecutiveOnes candidates,k);
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
int singlenumber(vector<int> candidates){
 int xorr=0;
 for(int i=0;i candidates.size();i++){
     xorr=xorr candidates[i];
 }
 return xorr;
}
int main(){
 vector<int> candidates={1,1,2,3,3,4,4};
 cout<<singlenumber candidates);
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
pair<int,int> maxsubarray(vector<int> a,long long k){
     int left=0,right=0;
     long long sum=a[0];
     int n=a.size();
     while(right<n){
         while(left<=right && sum>k){
             sum-=a[left];
             left++;
         }
         if(sum==k){
             return {left,right};
         }
         right++;
         if(right<n) sum+=a[right];
     }
     return {-1,-1};
 }
 int main(){
    vector<int> a={1,2,3,1,1,3,3};
    long long k=10;
    pair<int,int> pairofmaxsubarray=maxsubarray(a,k);
    cout<<pairofmaxsubarray.first<<" "<<pairofmaxsubarray.second;
     return 0;
 }
*/
/*
brute force for check element frequency
#include<iostream>
using namespace std;
int main(){
    int candidates[]={1,2,1,3,2,1,1,1,1,1,1};
    int num = 1;
    int n=11;
    int count =0;
    for(int i=0;i<n;i++){
        if(num= candidates[i]){
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
 int candidates[n];
 for(int i=0;i<n;i++){
     cin> candidates[i];

 }
 int hash[13]={0};
 for(int i=0;i<n;i++){
     hash candidates[i]] += 1;
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
 int candidates[n];
 for (int i = 0; i < n; i++)
 {
     cin >> candidates[i];
 }
 map<int, int> mpp;
 for (int i = 0; i < n; i++)
 {
     mpp candidates[i]]++;
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
    int candidates[] = {1,1,1,1,2,2,3,3,3,3,3,5};
    map<int,int> mpp;

    for(int i=0;i<12;i++){
        mpp candidates[i]]++;
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
vector<int> twosum(vector<int>  candidates, int target)
{
 sort candidates.begin(), candidates.end());
 int i = 0, j = candidates.size() - 1;
 while (i < j)
 {
     int sum = candidates[i] + candidates[j];
     if (sum == target) return {i, j};
     else if(sum<target) i++;
     else j--;
 }
 return {};
}
int main()
{
 vector<int> candidates = {7, 5, 2, 11};
 int target = 9;
 vector<int> ans = twosum candidates, target);
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
void sortarrays(vector<int>  candidates){
    int count0=0,count1=0,count2=0,n candidates.size();
    for(int i=0;i<n;i++){
        if candidates[i]==0) count0++;
        else if candidates[i]==1) count1++;
        else count2++;
    }
    for(int i=0;i<count0;i++) candidates[i]=0;
    for(int i=count0;i<count0+count1;i++) candidates[i]=1;
    for(int i=count0+count1;i<n;i++) candidates[i]=2;
}
int main(){
    vector<int> candidates={0,1,0,1,1,2,1,2,0,0};
    sortarrays candidates);
    for(int i=0;i candidates.size();i++){
        cout< candidates[i]<<" ";
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
void sortarray(vector<int>& candidates,int n){
 int low=0,mid=0,high=n-1;
 while(mid<=high){
     if candidates[mid]==0){
         swap candidates[low] candidates[mid]);
         low++;
         mid++;
     }
     else if candidates[mid]==1) mid++;
     else {
         swap candidates[mid] candidates[high]);
         high--;
     }
 }
}
int main(){
 vector<int> candidates={0,1,2,1,2,0,2,1,0,1};
 int n candidates.size();
 sortarray candidates,n);
 for(int i=0;i<n;i++){
     cout< candidates[i]<<" ";
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
int majorityelement(vector<int>& candidates){
    for(int i=0;i candidates.size();i++){
        int count=0;
          for(int j=0;j candidates.size();j++){
            if candidates[j]= candidates[i]) count++;
            if(count candidates.size()/2) return candidates[i];
          }
    }
    return -1;
}
int main(){
    vector<int> candidates={1,1,1,1,1,2,2,2,0};
    cout<<majorityelement candidates);
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
int majorityelement(vector<int>  candidates)
{
 map<int, int> mpp;
 for (int i = 0; i < candidates.size(); i++)
 {
     mpp candidates[i]]++;
 }
 for (auto it : mpp)
 {
     if (it.second >  candidates.size() / 2))
         return it.first;
 }
 return -1;
}
int main()
{
 vector<int> candidates = {2, 2, 2, 2, 1, 1, 0};
 cout << majorityelement candidates);
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
int majorityelement(vector<int>& candidates){
    int cnt=0;
    int el;
    for(int i=0;i candidates.size();i++){
        if(cnt==0){
            cnt=1;
            el candidates[i];
        }
        else if candidates[i]==el) cnt++;
        else cnt--;
        int cnt1=0;
        for(int i=0;i candidates.size();i++){
            if candidates[i]==el) cnt1++;
        }
        if(cnt1> candidates.size()/2)) return el;
    }
    return -1;
}
int main(){
     vector<int> candidates = {1,2,4,7,5,4,4,4,4,4};
     cout<<majorityelement candidates);
    return 0;
}
    */
/*
better approach for maxsubarray sum
TC-O(n^2)
SC-O(1)
#include<bits/stdc++.h>
using namespace std;
int maxsubarraysum(int candidates[],int n){
 int maxi=INT_MIN;
 for(int i=0;i<n;i++){
     int sum =0;
     for(int j=i;j<n;j++){
         sum+ candidates[j];
         maxi=max(sum,maxi);
     }
 }
 return maxi;
}
int main(){
 int candidates[]={-2,-3,4,-1,-2,1,5,-3};
 int n=8;
 cout<<maxsubarraysum candidates,n);
 return 0;
}
*/
/*
TC-O(n)
SC-O(1)
optimal approach for maxsubarraysum using kadanes algorithem
#include <bits/stdc++.h>
using namespace std;
long long maxsubarraysum(int candidates[],int n){
    long long sum=0,maxi=LONG_MIN;
    for(int i=0;i<n;i++){
        sum+ candidates[i];
       if(sum>maxi){
        maxi=sum;
       }
        if(sum<0) sum=0;
    }
    return maxi;
}
int main(){
 int candidates[]={-2,-3,4,-1,-2,1,5,-3};
 int n=8;
 cout<<maxsubarraysum candidates,n);
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
 vector<int> nextpermutation(vector<int>  candidates){
    next_permutation candidates.begin() candidates.end());
    return candidates;
 }
int main(){
 vector<int> candidates={2,1,5,4,3,0,0};
 vector<int> ans=nextpermutation candidates);
 for(int i=0;i candidates.size();i++){
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
vector<int> candidates={2,1,5,4,3,0,0};
vector<int> ans=nextpermutation candidates);
for(int i=0;i candidates.size();i++){
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
int longestconsuctiveseq(vector<int>& candidates){
    sort candidates.begin() candidates.end());
    int longest=1,count=0,lastsmall=INT_MIN;
    for(int i=0;i candidates.size();i++){
        if candidates[i]-1==lastsmall){
          count++;
          lastsmall candidates[i];
        }
        else if candidates[i]!=lastsmall){
            count=1;
            lastsmall candidates[i];
        }
        longest=max(longest,count);
    }
    return longest;
}
int main(){
  vector<int candidates={102,100,1,101,2,1,1,1,2};
  cout<<longestconsuctiveseq candidates);
    return 0;
}
    */
/*
TC-O(3n)
TC-O(1)
longest consuctive sequence optimal approach
#include <bits/stdc++.h>
using namespace std;
int longestconsuctiveseq(vector<int>& candidates){
  int n candidates.size();
  if(n==0) return 0;
  int longest =1;
  unordered_set<int> st;
  for(int i=0;i<n;i++){
    st.insert candidates[i]);
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
    vector<int> candidates={102,1,2,103,104,3,4,100,5};
    cout<<longestconsuctiveseq candidates);
    return 0;
}
    */
// till this phase 2
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
     for (auto data : row)
         cout << data << " ";
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
        for (auto data : row)
            cout << data << " ";
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
int subarraysequalstok(vector<int>  candidates,int k){
    int count=0;
    for(int i=0;i candidates.size();i++){
        int sum=0;
        for(int j=i;j candidates.size();j++){
            sum+ candidates[j];
            if(sum==k){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> candidates={1,2,3,-3,1,1,1,4,2,-3};
    int k=3;
    cout<<subarraysequalstok candidates,k);
    return 0;
}
    */
/*
optimal sol for subarrays equals to sum k
TC-O(n)
TC-O(n)
#include <bits/stdc++.h>
using namespace std;
int subarraysequalstok(vector<int>  candidates, int k)
{
 unordered_map<int,int> mpp;
 mpp[0]=1;
 int presum=0,count=0;
 for(int i=0;i candidates.size();i++){
     presum+ candidates[i];
     int remove=presum-k;
     count+=mpp[remove];
     mpp[presum]+=1;
 }
 return count;
}
int main(){
 vector<int> candidates={1,2,3,-3,1,1,1,4,2,-3};
 int k=3;
 cout<<subarraysequalstok candidates,k);
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

vector<int> majorityElement(vector<int> candidates) {
    vector<int> ans;
    int n = candidates.size();

    for (int i = 0; i < n; i++) {
        int count = 0;

        // skip already processed elements
        bool already = false;
        for (int x : ans) {
            if (x == candidates[i]) {
                already = true;
                break;
            }
        }
        if (already) continue;

        // count frequency of candidates[i]
        for (int j = 0; j < n; j++) {
            if  candidates[i] == candidates[j])
                count++;
        }

        // check if it appears more than n/3 times
        if (count > n / 3)
            ans.push_back candidates[i]);
    }

    return ans;
}

int main() {
    vector<int> candidates = {1,1, 1, 1,1, 2,2,2, 4, 2, 2, 5, 7};
    vector<int> res = majorityElement candidates);

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

vector<int> majorityElement(vector<int>  candidates) {
    unordered_map<int, int> freq;
    vector<int> ans;
    int n = candidates.size();

    // Count how many times each element appears
    for (int x : candidates)
        freq[x]++;

    // Check which elements appear more than n/3 times
    for (auto it : freq) {
        if (it.second > n / 3)
            ans.push_back(it.first);
    }

    return ans;
}

int main() {
    vector<int> candidates = {1,1, 1, 1, 2, 4, 2, 2, 5, 7};
    vector<int> res = majorityElement candidates);

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
 vector<int> candidates = {1, 1, 1, 2, 4, 2, 2, 5, 7};
 vector<int> res = majorityElement candidates);

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
vector<vector<int>> threesum(vector<int> candidates)
{
    set<vector<int>> st;
    for (int i = 0; i < candidates.size(); i++)
    {
        for (int j = i+1; j < candidates.size(); j++)
        {
            for (int k = j+1; k < candidates.size(); k++)
            {
                if  candidates[i] + candidates[j] + candidates[k] == 0)
                {
                    vector<int> ls= candidates[i] candidates[j] candidates[k]};
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
     vector<int> candidates = {-1, -2, 2, 5, 4, -4, -3, -4, 7, 8};
 vector<vector<int>> ans = threesum candidates);

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

vector<vector<int>> threesum(vector<int> candidates, int n) {
 set<vector<int>> st;

 for (int i = 0; i < n; i++) {
     set<int> hashset;
     for (int j = i + 1; j < n; j++) {
         int third = - candidates[i] + candidates[j]);
         if (hashset.find(third) != hashset.end()) {
             vector<int> temp =  candidates[i], candidates[j], third};
             sort(temp.begin(), temp.end());
             st.insert(temp);
         }
         hashset.insert candidates[j]);
     }
 }

 vector<vector<int>> ans(st.begin(), st.end());
 return ans;
}

int main() {
 vector<int> candidates = {-1, -2, 2, 5, 4, -4, -3, -4, 7, 8};
 int n = candidates.size();
 vector<vector<int>> ans = threesum candidates, n);

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
vector<vector<int>> threesum(vector<int> candidates, int n) {
vector<vector<int>> ans;
sort candidates.begin() candidates.end());
for(int i=0;i<n;i++){
    if(i>0 && candidates[i]= candidates[i-1]) continue;
    int j=i+1;
    int k=n-1;
    while(j<k){
        int sum candidates[i] candidates[j] candidates[k];
        if(sum<0){
            j++;
        }
        else if(sum>0){
            k--;
        }
        else {
            vector<int> temp= candidates[i] candidates[j] candidates[k]};
            ans.push_back(temp);
            j++;
            k--;
            while(j<k && candidates[j]= candidates[j-1]) j++;
            while(j<k && candidates[k]= candidates[k+1]) k--;
         }
    }
}
return ans;
}
int main(){
 vector<int> candidates = {-1, -2, 2, 5, 4, -4, -3, -4, 7, 8};
 int n = candidates.size();
 vector<vector<int>> ans = threesum candidates, n);

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
brute force for 4 sum
TC-O(n^4)
SC-O(n)
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> foursum(vector<int>  candidates, int target)
{
    int n = candidates.size();
    set<vector<int>> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    long long sum candidates[i] candidates[j];
                    sum+ candidates[k];
                    sum+ candidates[l];
                   if(sum==target){
                    vector<int> temp= candidates[i] candidates[j] candidates[k] candidates[l]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                   }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
int main()
{
 vector<int> candidates = {-1, -2, 2, 5, 4, -4, -3, -4, 7, 8};
 int target=0;
 vector<vector<int>> ans = foursum candidates, target);
 for (auto triplet : ans) {
     for (auto num : triplet) {
         cout << num << " ";
     }
     cout<<endl;
    }
    return 0;
}
    */
/*
better approach for 4 sum
TC-O(n^3)
SC-O(n)
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> foursum(vector<int> &nums, int target)
{
 int n = nums.size();
 set<vector<int>> st;
 for (int i = 0; i < n; i++)
 {
     for (int j = i + 1; j < n; j++)
     {
         set<long long> hashset;
         for (int k = j + 1; k < n; k++)
         {
             long long sum = nums[i] + nums[j];
             sum += nums[k];
             long long fourth = target - (sum);
             if (hashset.find(fourth) != hashset.end())
             {
                 vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};
                 sort(temp.begin(), temp.end());
                 st.insert(temp);
             }
             hashset.insert(nums[k]);
         }
     }
 }
 vector<vector<int>> ans(st.begin(), st.end());
 return ans;
}
int main()
{
 vector<int> candidates = {-1, -2, 2, 5, 4, -4, -3, -4, 7, 8};
 int target = 0;
 vector<vector<int>> ans = foursum candidates, target);
 for (auto triplet : ans)
 {
     for (auto num : triplet)
     {
         cout << num << " ";
     }
     cout << endl;
 }
 return 0;
}
 */
/*
optimal approach for 4 sum
TC-O(n^3)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> foursum(vector<int>  candidates, int target)
{
    int n = candidates.size();
    sort candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && candidates[i] == candidates[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j != (i + 1) && candidates[j] == candidates[j - 1])
                continue;
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                long long sum = candidates[i] + candidates[j];
                sum += candidates[k];
                sum += candidates[l];
                if (sum == target)
                {
                    vector<int> temp =  candidates[i], candidates[j], candidates[k], candidates[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && candidates[k] == candidates[k - 1])
                        k++;
                    while (k < l && candidates[l] == candidates[l + 1])
                        l--;
                }
                else if (sum < target)
                {
                    k++;
                }
                else
                    l--;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> candidates = {-1, -2, 2, 5, 4, -4, -3, -4, 7, 8};
    int target =0;
    vector<vector<int>> ans = foursum candidates, target);
    for (auto triplet : ans)
    {
        for (auto num : triplet)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
    */
/*
brute force for subarray xor
TC: O(n³)
SC: O(1)
#include <bits/stdc++.h>
using namespace std;
int subarrayxor(vector<int> nums, int target)
{
    int count = 0;
    for (int i = 0; i < nums.size();i++){
        for(int j=i;j<nums.size();j++){
            int xr=0;
            for(int k=i;k<=j;k++){
                xr=xr^nums[k];
            }
                if(xr==target){
                    count++;

            }
        }
    }
    return count;
}
int main()
{
    vector<int> nums = {4, 2, 2, 6, 4};
    int target=6;
    cout<<subarrayxor(nums,target);
    return 0;
}
    */
/*
better approach for subarray xor
TC: O(n^2)
SC: O(1)
#include <bits/stdc++.h>
using namespace std;

int subarrayxor(vector<int> nums, int target)
{
 int count = 0;
 for (int i = 0; i < nums.size(); i++) {
      int xr = 0;
     for (int j = i; j < nums.size(); j++) {
           xr^=nums[j];

         if (xr == target)
             count++;
     }
 }
 return count;
}

int main()
{
 vector<int> nums = {4, 2, 2, 6, 4};
 int target = 6;
 cout << subarrayxor(nums, target);
 return 0;
}
 */
/*
  optimal approach for subarray xor
TC: O(n)
SC: O(n)
#include <bits/stdc++.h>
using namespace std;

int subarrayxor(vector<int> nums, int k)
{
 int xr=0;
 map<int,int>mpp;
 mpp[xr]++;
 int cnt=0;
 for(int i=0;i<nums.size();i++){
     xr=xr^nums[i];
     int x=xr^k;
     cnt+=mpp[x];
     mpp[xr]++;
 }

 return cnt;
}

int main()
{
 vector<int> nums = {4, 2, 2, 6, 4};
 int k = 6;
 cout << subarrayxor(nums, k);
 return 0;
}
*/
/*
  optimal approach for largest subarray with sum 0
TC: O(n)
SC: O(n)
#include <bits/stdc++.h>
using namespace std;

int largestSubarraySum0(vector<int>& nums) {
    unordered_map<int, int> mp;  // stores first index of each prefix sum
    int sum = 0, maxLen = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (sum == 0)
            maxLen = i + 1;  // subarray from 0 to i

        if (mp.find(sum) != mp.end())
            maxLen = max(maxLen, i - mp[sum]);
        else
            mp[sum] = i;  // store first occurrence
    }
    return maxLen;
}

int main() {
    vector<int> nums = {15, -2, 2, -8, 1, 7, 10, 23};
    cout << largestSubarraySum0(nums);
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
count inversion brute force
TC-O(N^2)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> countinvrsions(vector<int>& arr){
    vector<pair<int,int>> p;
for(int i=0;i<arr.size();i++){
    for(int j=i+1;j<arr.size();j++){
        if(i<j && arr[i]>arr[j]){
        p.push_back({arr[i],arr[j]});
    }
}
}
return p;
}
int main(){
vector<int>arr={5,3,2,4,1};
vector<pair<int,int>> ans=countinvrsions(arr);
for(int i=0;i<ans.size();i++){
    cout<<ans[i].first<<','<<ans[i].second<<" ";
}
}
*/
/*
count inverions optimal
TC-O(NlogN)
SC-O(n)
#include <bits/stdc++.h>
using namespace std;
int merge(vector<int>& arr,int low,int mid,int high){
vector<int> temp;
int left=low;
int right=mid+1;
int cnt=0;
while(left<=mid && right<=high){
if(arr[left]<=arr[right]){
    temp.push_back(arr[left]);
    left++;
}
else {
    temp.push_back(arr[right]);
    right++;
    cnt+=(mid-left+1);
}
}
while(left<=mid){
temp.push_back(arr[left]);
left++;
}
while(right<=high){
    temp.push_back(arr[right]);
    right++;
}
for(int i=low;i<=high;i++){
    arr[i]=temp[i-low];
}
return cnt;
}
int mergeSort(vector<int>&arr,int low,int high){
int cnt=0;
if(low>=high) return cnt;
int mid=(low+high)/2;
cnt+=mergeSort(arr,low,mid);
cnt+=mergeSort(arr,mid+1,high);
cnt+=merge(arr,low,mid,high);
return cnt;
}
int countinvrsions(vector<int>& arr){
int n=arr.size();
mergeSort(arr,0,n-1);
}
int main(){
vector<int>arr={5,3,2,4,1};
 cout<<countinvrsions(arr);
return 0;
}
*/
/*
lower bound in sorted array
TC-O(nlogn)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int lowerbound(vector<int>&nums,int target){
int low=0,high=nums.size()-1;
while(low<=high){
 int mid=low+(high-low)/2;
 if(nums[mid]==target) return mid;
 else if(nums[mid]<target) low=mid+1;
 else high=mid-1;
}
return low;
}
int main(){
 vector<int> candidates={1,3,5,8};
 int target=5;
 cout<<lowerbound, candidates,target);
 return 0;
}
 */
/*
upper bound in sorted array
TC-O(nlogn)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int upperbound(vector<int>&nums,int target){
int low=0,high=nums.size()-1;
while(low<=high){
 int mid=low+(high-low)/2;
 if(nums[mid]<=target) low=mid+1;
 else high=mid-1;
}
return low;
}
int main(){
 vector<int> candidates={1,3,5,5,8};
 int target=5;
 cout<<lowerbound candidates,target);
 return 0;
}
*/
/*
search insert position in the sorted array
#include <bits/stdc++.h>
using namespace std;
int search(vector<int>&nums,int x){
    int ans;
int low=0,high=nums.size()-1;
while(low<=high){
 int mid=low+(high-low)/2;
 if(nums[mid]>=x) {
    ans=mid;
 high=mid-1;
 }
  else{
    low=mid+1;
  }
}
return ans;
}
int main(){
 vector<int> nums={1,2,4,7};
 int x=2;
 cout<<search(nums,x);
 return 0;
}
 */
/*
occurence of element in sorted array
TC-O(logn)
TC-O(1)
#include <bits/stdc++.h>
using namespace std;
int firstocc(vector<int> &nums, int x)
{
    int l = 0, r = nums.size() - 1,ans=-1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if(nums[mid]==x){
           ans=mid;
           r=mid-1;
        }
        else if(nums[mid]<x){
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;
}
    int lastocc(vector<int> &nums,int x){
        int l = 0, r = nums.size() - 1,ans=-1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if(nums[mid]==x){
           ans=mid;
           l=mid+1;
        }
        else if(nums[mid]<x){
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;
    }
int main()
{
    vector<int> nums = {1, 2, 4, 5, 5, 5,5, 6};
    int x = 7;
    int first=firstocc(nums,x);
    int last=lastocc(nums,x);
    if(first==-1){
        cout<<"0";
    }
    else cout<<last-first+1;
    return 0;
}
    */
/*
search in rotated sorted array
TC-O(nlogn)
SC-O(1)
#include <bits/stdc++.h>
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
/*
search in rotated sorted array variation 2
TC-O(logn)
SC-O(1)
#include<bits/stdc++.h>
using namespace std;
int search(vector<int> &a, int tar)
{
int st = 0, end = a.size() - 1;
while (st <= end)
{
  int mid = st + (end - st) / 2;
  if (a[mid] == tar)
  {
      return true;
  }
  if (a[st] == a[mid] && a[mid]==a[end])
  {
      st++;
      end--;
  }
  else if(a[st]<=a[mid]){
    if(a[st]<=tar && tar<a[mid]){
        end=mid-1;
    }
    else {
        st=mid+1;
    }
  }
  else {
    if(a[mid]<tar && tar<=a[end]) {
        st=mid+1;
    }
    else {
        end=mid-1;
    }
  }
}
  return false;
}
int main(){
vector<int> a={3,4,5,6,7,0,1,2};
cout<<search(a,2);
return 0;
}
*/
/*
finding minimum element in rotated sorted array
TC-O(logn)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int minimumelementinsorted(vector<int>  candidates)
{
    int low = 0, high = candidates.size() - 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if  candidates[mid] > candidates[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return candidates[low];
}
int main()
{
    vector<int> candidates = {3, 4, 5, 6, 7, 1, 2};
    cout << minimumelementinsorted candidates);
    return 0;
}
    */
/*
How many times the array is rotated
TC-O(logn)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;

 int findRotations(vector<int>& candidates) {
     int low = 0;
     int high = candidates.size() - 1;

     while (low < high) {
         int mid = low + (high - low) / 2;
         if  candidates[mid] > candidates[high]) {
             low = mid + 1;
         } else {
             high = mid;
         }
     }

     return low;
 }

int main() {

 vector<int> candidates = {4,5,6,7,0,1,2,3};

 int rotations = findRotations candidates);

 cout << rotations << endl;
 return 0;
}
*/
/*
singleNonDuplicate in sorted array
TC-O(logn)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

int singleNonDuplicate(vector<int>& candidates) {
    // Get the size of the array
    int n = candidates.size();

    // Edge case: only one element in the array
    if (n == 1) return candidates[0];

    // Edge case: first element is the unique one
    if  candidates[0] != candidates[1]) return candidates[0];

    // Edge case: last element is the unique one
    if  candidates[n - 1] != candidates[n - 2]) return candidates[n - 1];

    // Initialize binary search bounds (exclude first and last index)
    int low = 1, high = n - 2;

    // Perform binary search
    while (low <= high) {
        // Calculate middle index
        int mid = (low + high) / 2;

        // Check if middle element is the unique one
        if  candidates[mid] != candidates[mid + 1] && candidates[mid] != candidates[mid - 1]) {
            return candidates[mid];
        }

        // If mid is in the left half (pairing is valid)
        if ((mid % 2 == 1 && candidates[mid] == candidates[mid - 1]) ||
            (mid % 2 == 0 && candidates[mid] == candidates[mid + 1])) {
            // Move to the right half
            low = mid + 1;
        }
        // If mid is in the right half (pairing broken earlier)
        else {
            // Move to the left half
            high = mid - 1;
        }
    }

    // Dummy return (not reachable if input is valid)
    return -1;
   }
};

int main() {
    // Input array with all elements appearing twice except one
    vector<int> candidates = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};

    // Call the function and store the result
    Solution obj;

    int ans = obj.singleNonDuplicate candidates);

    // Print the result
    cout << "The single element is: " << ans << "\n";

    return 0;
}
*/
/*
peak index in mountain array brute
TC-O(n)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int peakindex(vector<int> &a){
  for(int i=0;i<a.size();i++){
    if((i==0 || a[i-1]<a[i]) && (i==a.size()-1 || a[i]>a[i+1]))
    return i;
  }
}
int main(){
    vector<int>a={0,1,3,8,9,5,2};
    cout<<peakindex(a);
    return 0;
}
    */

/*
peak index in mountain array binary search
TC-O(logn)
SC-O(1)
#include <iostream>
#include <vector>
using namespace std;
int array(vector<int> &nums){
  int n=nums.size();
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        int low=1,high=n-2;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
            else if(nums[mid]>nums[mid-1]) low=mid+1;
            else high=mid-1;
        }
        return 0;
}
int main(){
    vector<int>nums={0,1,2,1,3,8,9,5,2};
    cout<<array(nums);
    return 0;
}
 */
/*
brute force for finding square root
TC-O(n)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int findsquareroot(int n){
    int ans=0;
    if(n==1) return 1;
    for(int i=2;i*i<=n;i++){
      ans=i;
    }
    return ans;
}
int main(){
    cout<<findsquareroot(45);
    return 0;
}
    */
/*
optimal approach for finding square root
TC-O(logn)
SC-O(1)

#include <bits/stdc++.h>
using namespace std;
int findsquareroot(int n)
{
int low=1,high=n,ans=1;
while(low<=high){
 long long mid=low+(high-low)/2;
 long long data=(mid*mid);
 if(data<=n){
  low=mid+1;
 }
 else {
     high=mid-1;
 }
}
return high;
}
int main()
{
 cout << findsquareroot(1);
 return 0;
}
 */
/*
finding the nth element sqrt brute force
TC-O(n)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int nthelement(int n,int m){
    for(int i=1;i<=m;i++){
     long long power =pow(i,n);
     if(power==m) return i;
     if(power>m) break;
    }
    return -1;
}
int main(){
    cout<<nthelement(4,16);
    return 0;
}
    */
/*
finding the nth element sqrt
TC-O(logn)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int nthelement(int n, int m){
    int low =1,high=m;
    while(low<=high){
        int mid=low+(high-low)/2;
         int ans=1;
        for(int i=1;i<=n;i++){
            ans=ans*mid;
            if(ans>m) break;
        }
        if(ans==m) return mid;
        else if(ans>m) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main(){
    cout<<nthelement(4,255);
    return 0;
}
    */
/*
brute force for koko eating bananas
#include <bits/stdc++.h>
using namespace std;
int calculatehours(vector<int> &piles,int hourstaken){
 long long th=0;

 for(int i=0;i<piles.size();i++){
     th += ceil((double)piles[i] / hourstaken);
 }

 return th;
}
int koko(vector<int> & piles,int hours){
 int maxpile=*max_element(piles.begin(),piles.end());
for(int i=1;i<= maxpile;i++){
int hourly = calculatehours(piles,i);
if(hourly<=hours) return i;
}
return maxpile;
}
int main(){
 vector<int> piles={7,15,6,3};
 int hours =8;
 cout<<koko(piles,hours);
 return 0;
}
 */
/*
binary search for koko eating bananas
#include <bits/stdc++.h>
using namespace std;

int calculatehours(vector<int> &piles, int hourstaken)
{
    long long th = 0;

    for (int i = 0; i < piles.size(); i++)
    {
        th += ceil((double)piles[i] / hourstaken);
    }

    return th;
}

int koko(vector<int> &piles, int h)
{
    int maxpile = *max_element(piles.begin(), piles.end());
    int low = 1, high = maxpile, ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int hours = calculatehours(piles, mid);

        if (hours <= h)
        {
            ans = mid;          // store speed
            high = mid - 1;     // try smaller speed
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;  // if ans = -1 → no valid speed
}

int main()
{
    vector<int> piles = {7, 15, 6, 3};
    int h = 8;

    int result = koko(piles, h);

    if(result == -1)
        cout << "No possible speed";
    else
        cout << result;

    return 0;
}
    */
/*
Min days to make m bouqetts brute
TC-O(maxi-mini+1)*n
#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int>  candidates, int day, int m, int k)
{
    int cnt = 0, bouq = 0;
    for (int i = 0; i < candidates.size(); i++)
    {
        if  candidates[i] <= day)
        {
            cnt++;
        }
        else
        {
            bouq += (cnt / k);
            cnt = 0;
        }
    }
    bouq += (cnt / k);
    if (bouq >= m) return true;
    else return false;
}
int minDays(vector<int>  candidates, int m, int k)
{
    if ((long long)m * k > candidates.size())
        return -1;
    int mini = *min_element candidates.begin(), candidates.end());
    int maxi = *max_element candidates.begin(), candidates.end());
    for (int day = mini; day <= maxi; day++)
    {
        if (possible candidates, day, m, k))
            return day;
    }
    return -1;
}
    int main(){
     vector<int> bloomDay={7,7,7,7,13,11,12,7};
     int m=2;
     int k=3;
     cout<<minDays(bloomDay,m,k);
     return 0;
    }
*/
/*
Min days to make m bouqetts optimal
TC-O(n*log(maxi-mini+1))
#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int>  candidates, int day, int m, int k)
{
    int cnt = 0, bouq = 0;
    for (int i = 0; i < candidates.size(); i++)
    {
        if  candidates[i] <= day)
        {
            cnt++;
        }
        else
        {
            bouq += (cnt / k);
            cnt = 0;
        }
    }
    bouq += (cnt / k);
    if (bouq >= m) return true;
    else return false;
}
int minDays(vector<int>  candidates, int m, int k)
{
s
}
    int main(){
     vector<int> bloomDay={7,7,7,7,13,11,12,7};
     int m=2;
     int k=3;
     cout<<minDays(bloomDay,m,k);
     return 0;
    }
*/
/*
finding the smallest divisor
TC-O(n*maxi)
#include <bits/stdc++.h>
using namespace std;
 int smallestDivisor(vector<int> & candidates,int thresold){
    int maxi=*max_element candidates.begin() candidates.end());
    for(int d=1; d<=maxi; d++){
        int sum=0;
       for(int i=0; i candidates.size();i++){
        sum+=ceil((double candidates[i]/d);
       }
       if(sum<=thresold){
        return d;
       }
    }
    return -1;
 }
 int main(){
    vector<int> candidates={1,2,5,9};
    int thresold=6;
    cout<<smallestDivisor candidates,thresold);
    return 0;
 }
    */
/*finding the smallest divisor optimal
TC-O(n*log(maxi))
#include <bits/stdc++.h>
using namespace std;
int possible(vector<int>  candidates,int mid){
    int sum=0;
     for(int i=0; i candidates.size();i++){
        sum+=ceil((double candidates[i]/mid);
}
 return sum;
}
 int smallestDivisor(vector<int> & candidates,int thresold){
    int low=1;
    int high=*max_element candidates.begin() candidates.end());
    while(low<=high){
        int mid =(low+high)/2;
        if(possible candidates,mid) <= thresold){
            high=mid-1;
        }
        else low=mid+1;
    }
    return low;
 }
 int main(){
    vector<int> candidates={1,2,5};
    int thresold=6;
    cout<<smallestDivisor candidates,thresold);
    return 0;
 }
    */
/*
capacity to ship packages within D days
TC-O(maxi-mini+1)*O(n)
#include <bits/stdc++.h>
using namespace std;
int possible(vector<int> & nums,int low){
 int dayss=1;
 int load=0;
 for(int i=0;i<nums.size();i++){
  if(load + nums[i]>low){
     dayss++;
     load=nums[i];
  }
  else load+=nums[i];
 }
 return dayss;
}
int shipDays(vector<int> &nums, int days)
{
 int ans=0;;
 int mini = *max_element(nums.begin(), nums.end());
 int maxi = accumulate(nums.begin(),nums.end(),0);
 for(int cap=mini; cap<=maxi; cap++){
     int daysReq=possible(nums,cap);
   if(daysReq<=days){
   return cap;
   }
 }
 return -1;
}
int main()
{
 vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 int days = 5;
 cout << shipDays(nums, days);
}
 */
/*
capacity to ship packages within D days optimal
TC-O(log(maxi-mini)+1)*O(n)
#include <bits/stdc++.h>
using namespace std;
int possible(vector<int> &nums, int low)
{
    int dayss = 1;
    int load = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (load + nums[i] > low)
        {
            dayss++;
            load = nums[i];
        }
        else
            load += nums[i];
    }
    return dayss;
}
int shipDays(vector<int> &nums, int days)
{
    int mini = *max_element(nums.begin(), nums.end());
    int maxi = accumulate(nums.begin(), nums.end(), 0);
    while (mini <= maxi)
    {
        int mid = (mini + maxi) / 2;
        if(possible(nums,mid)<=days){
            maxi=mid-1;
        }
        else mini=mid+1;
    }
    return mini;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    cout << shipDays(nums, days);
}
    */
/*
finding the kth positive missing number brute force
TC-O(n)
#include <bits/stdc++.h>
using namespace std;
int kthpositive(vector<int> &nums, int k){
for(int i=0; nums.size();i++){
 if(nums[i]<=k){
     k++;
 }
 else break;
}
return k;
}

int main(){
 vector<int> nums={4,7,9,10};
 int k=8;
 cout<<kthpositive(nums,k);
 return 0;
}
 */
/*
finding the kth positive missing number optimal
TC-O(logN)
#include <bits/stdc++.h>
using namespace std;
int kthpositive(vector<int> &nums, int k)
{
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int missing =nums[mid]-(mid+1);
        if(missing<k) low =mid+1;
        else high=mid-1;
    }
    return low+k;
}

int main()
{
    vector<int> nums = {4, 7, 9, 10};
    int k = 8;
    cout << kthpositive(nums, k);
    return 0;
}
    */

/*
TC-O(max-min)*O(n)
// Class to solve the Aggressive Cows problem
class Solution {
public:
    bool canPlace(vector<int>& stalls, int cows, int d) {
        int count = 1;
        int lastPos = stalls[0];

        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - lastPos >= d) {
                count++;
                lastPos = stalls[i];
            }
            if (count >= cows) return true;
        }
        return false;
    }

    int aggressiveCows(vector<int>& stalls, int cows) {
        sort(stalls.begin(), stalls.end());

        int n = stalls.size();
        int maxDist = stalls[n - 1] - stalls[0];

        int ans = 0;

        for (int d = 1; d <= maxDist; d++) {
            if (canPlace(stalls, cows, d)) {

            ans = d;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> stalls = {0,3,4,7,10,12};
    int cows = 4;

    Solution obj;
    cout << obj.aggressiveCows(stalls, cows) << endl;

    return 0;
}
*/
/*

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPlace(vector<int>& stalls, int cows, int d) {
        int lastPos = stalls[0];

        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - lastPos >= d) {
                count++;
                lastPos = stalls[i];
            }
            if (count >= cows) return true;
        }
        return false;
    }

    int aggressiveCows(vector<int>& stalls, int cows) {
        sort(stalls.begin(), stalls.end());

        int low = 1;
        int ans = 0;

        while (low <= high) {
            // Find mid distance
            int mid = low + (high - low) / 2;

            if (canPlace(stalls, cows, mid)) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> stalls = {1, 2, 8, 4, 9};
    int cows = 3;

    Solution obj;

    cout << obj.aggressiveCows(stalls, cows) << endl;
    return 0;
}
*/
/*
brute force for the book allocation problem
TC-O(high-low)+1 * O(N)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int possible(vector<int> candidates,int pages){
    int stu=1,pagesstudent=0;
    for(int i=0;i candidates.size();i++){
        if(pagesstudent + candidates[i]<=pages){
            pagesstudent+ candidates[i];
        }
        else {
            stu++;
            pagesstudent candidates[i];
        }
    }
    return stu;
}
int bookallocation(vector<int>  candidates, int students){
    int low=*max_element candidates.begin() candidates.end());
    int high =accumulate candidates.begin() candidates.end(),0);
    for(int pages=low;pages<=high;pages++){
       int capStudent= possible candidates,pages);
       if(capStudent==students){
       return pages;
       }
    }
}
int main(){
    vector<int> candidates={25,46,28,49,24};
    int students=4;
    cout<<bookallocation candidates,students);
    return 0;
}
    */
/*
Optimal approach for book allocation problem
TC-O(log(high-low)+1) * O(N)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int possible(vector<int>  candidates, int pages)
{
 int stu = 1, pagesstudent = 0;
 for (int i = 0; i < candidates.size(); i++)
 {
     if (pagesstudent + candidates[i] <= pages)
     {
         pagesstudent += candidates[i];
     }
     else
     {
         stu++;
         pagesstudent = candidates[i];
     }
 }
 return stu;
}
int bookallocation(vector<int>  candidates, int students){
int low=*max_element candidates.begin() candidates.end());
 int high =accumulate candidates.begin() candidates.end(),0);
 while (low<=high)
 {
     int mid=(low+high)/2;
     int capStudents=possible candidates,mid);
     if(capStudents > students){
         low=mid+1;
     }
     else high=mid-1;
 }
 return low;
}
int main(){
 vector<int> candidates={25,46,28,49,24};
 int students=4;
 cout<<bookallocation candidates,students);
 return 0;
}
 */
/*
finding the median of two sorted arrays brute force approach
TC-O(n+m)
SC-O(n+m)
#include <bits/stdc++.h>
using namespace std;
double median(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size(), m = arr2.size();
    int i = 0, j = 0;
    vector<int> arr3;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
        }
        else
        {
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n)
    {
        arr3.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        arr3.push_back(arr2[j]);
        j++;
    }
    int total = arr3.size();
    if (total % 2 == 1)
    {
        return arr3[total / 2];
    }
    else
    {
        return (arr3[total / 2 - 1] + arr3[total / 2]) / 2.0;
    }
}
int main()
{
    vector<int> arr1 = {2, 4, 6};
    vector<int> arr2 = {1, 3};
    cout << median(arr1, arr2);
    return 0;
}
    */
/*
finding the median of two sorted arrays better approach
TC-O(n+m)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
double median(vector<int> &arr1, vector<int> &arr2)
{
 int n = arr1.size(), m = arr2.size();
 int total = n + m;
 int idx1 = (total - 1) / 2;
 int idx2 = total / 2;
 int i = 0, j = 0;
 int pre = 0, curr = 0, cnt = 0;
 while (i < n && j < m)
 {
     pre = curr;
     if (arr1[i] <= arr2[j])
     {
         curr = arr1[i];
         i++;
     }
     else
     {
         curr = arr2[j];
         j++;
     }
     if (cnt == idx2)
     {
         break;
     }
     cnt++;
 }

 while(cnt<idx2 && i<n){
     pre=curr;
     curr=arr1[i];
     i++;
     cnt++;
 }
 while(cnt<idx2 && j<m){
     pre=curr;
     curr=arr2[j];
     j++;
     cnt++;
 }
 if(total%2==1) return curr;
 return(pre+curr)/2.0;
}


int main()
{
 vector<int> arr1 = {2, 4, 6};
 vector<int> arr2 = {1, 3,5};
 cout << median(arr1, arr2);
 return 0;
}
 */
/*
finding the median of two sorted arrays optimal approach
TC-O(log(min(n,m)))
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
double median(vector<int> &a, vector<int> &b){
    int n=a.size();
    int m=b.size();
    if(n>m) return median(b,a);
    int low=0,high=n;
    int left=(n+m+1)/2;
    while(low<=high){
        int mid1=(low+high)/2;
        int mid2=left-mid1;
        int l1=INT_MIN, l2=INT_MIN;
        int r1=INT_MAX,r2=INT_MAX;
        if(mid1<n) r1=a[mid1];
        if(mid2<m) r2=b[mid2];
        if(mid1-1 >=0) l1=a[mid1-1];
        if(mid2-1 >=0) l2=b[mid2-1];
        if(l1<=r2 && l2<=r1){
            if((n+m)%2==1) {
            return max(l1,l2);
            }
            return ((double)(max(l1,l2) + min(r1,r2)))/2.0;

        }
        else if(l1>r2) high=mid1-1;
        else low=mid1+1;
    }
    return 0;
}
int main()
{
    vector<int> a = {2, 4, 6};
    vector<int> b = {1, 3};
    cout << median(a, b);
    return 0;
}
*/
/*
finding the kth element between two sorted arrays
TC-O(log(min(n,m)))
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int median(vector<int> &a, vector<int> &b ,int n1 ,int n2, int k){
    if(n1>n2) return median(b,a,n2,n1,k);
    int low=max(0,k-n2),high=min(n1,k);
    int left=k;
    int n=n1+n2;
    while(low<=high){
        int mid1=(low+high)/2;
        int mid2=left-mid1;
        int l1=INT_MIN, l2=INT_MIN;
        int r1=INT_MAX,r2=INT_MAX;
        if(mid1<n1) r1=a[mid1];
        if(mid2<n2) r2=b[mid2];
        if(mid1-1 >=0) l1=a[mid1-1];
        if(mid2-1 >=0) l2=b[mid2-1];
        if(l1<=r2 && l2<=r1){
            return max(l1,l2);
        }
        else if(l1>r2) high=mid1-1;
        else low=mid1+1;
    }
    return 0;
}
int main()
{
    vector<int> a = {2, 4, 6};
    vector<int> b = {1, 3};
    int n1= a.size();
    int n2= b.size();
    int k=5;
    cout << median(a, b,n1,n2,k);
    return 0;
}
    */
/*
brute force for the problem row with max1s
TC-O(n^2)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
 int index = -1, cnt_max = 0;
 for (int i = 0; i < n; i++){
     int cnt_ones=0;
     for (int j = 0; j < m; j++){
            cnt_ones+=matrix[i][j];
         }
         if(cnt_ones > cnt_max) {
         cnt_max=cnt_ones;
          index=i;
         }
 }
 return index;
}
int main()
{
 vector<vector<int>> matrix = {
     {1, 1, 0},
     {1, 0, 1},
     {1, 1, 1}};
 int n = matrix.size();
 int m = matrix[0].size();
 cout << rowWithMax1s(matrix, n, m);
 return 0;
}
 */
/*
optimal approach for the problem row with max1s
TC-O(n*log(m))
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    int index = -1;
    int maxones = 0;
    for (int i = 0; i < n; i++)
    {
        int ones = 0;
        int low = 0, high = m - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (matrix[i][mid] == 1)
            {
                ones = m - mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        if (ones > maxones)
        {
            maxones = ones;
            index = i;
        }
    }
    return index;
}
int main()
{
    vector<vector<int>> matrix = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}};
    int n = matrix.size();
    int m = matrix[0].size();
    cout << rowWithMax1s(matrix, n, m);
    return 0;
}
    */
/*
search in a matrix brute force
TC-O(n*m)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target){
 int n=matrix.size();
 int m=matrix[0].size();
 for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             if(matrix[i][j]==target) return true;
         }
 }
 return false;
}
int main()
{
 vector<vector<int>> matrix = {
     {1, 3, 5},
     {7, 13, 15},
     {17, 24, 37}
 };
 int target =40;
 cout <<searchMatrix(matrix,target);
 return 0;
}
 */
/*
search in a matrix better approach
TC-O(n * logm)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target){
    int m=matrix.size();
    int n=matrix[0].size();
    for(int i=0;i<m;i++){
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(matrix[i][mid]==target) {
                return true;
            }
            else if(matrix[i][mid]<target){
                low=mid+1;
            }
            else high=mid-1;
        }
    }
    return false;
}
int main()
{
 vector<vector<int>> matrix = {
     {1, 3, 5},
     {7, 13, 15},
     {17, 24, 37}
 };
 int target =13;
 cout <<searchMatrix(matrix,target);
 return 0;
}
 */
/*
search in a matrix optimal approach
TC-O(log(m*n))
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int low = 0, high = m * n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int row = mid / m;
        int col = mid % m;
        if (matrix[row][col] == target)
        {
            return true;
        }
        else if (matrix[row][col] < target)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {7, 13, 15},
        {17, 24, 37}};
    int target = 13;
    cout << searchMatrix(matrix, target);
    return 0;
}
    */
/*
search in a matrix 2 brute approach
TC-O(m*n)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
bool searchMatrix2(vector<vector<int>> &matrix, int target){
 int n=matrix.size();
 int m=matrix[0].size();
 for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
         if(matrix[i][j]==target){
             return true;
         }
     }
 }
 return false;
}
int main(){
    vector<vector<int>> matrix = {
     {1, 4, 7,11,15},
     {2,5,8,12,19},
     {3,6,9,16,22},
     {10,13,14,17,24},
     {18,21,23,26,30}
 };
 int target = 45;
 cout << searchMatrix2(matrix, target);
 return 0;
}
 */
/*
search in a matrix 2 better approach
TC-O(n)*O(logM)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
pair<int,int> searchMatrix2(vector<vector<int>> &matrix, int target){
    int n=matrix.size();
    int m=matrix[0].size();
    int low=0,high=m-1;
    for(int i=0;i<n;i++){
          int low=0,high=m-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(matrix[i][mid]==target){
            return {i,mid};
        }
        else if(matrix[i][mid]<target){
            low=mid+1;
        }
        else high=mid-1;
    }
    }
    return {-1,-1};
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};
    int target =110;
    pair<int,int> pair = searchMatrix2(matrix, target);
    cout<<pair.first<<" "<<pair.second;
    return 0;
}
    */
/*
search in a matrix 2 optimal approach
TC-O(log(M*n))
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
pair<int, int> searchMatrix2(vector<vector<int>> &matrix, int target)
{
 int m = matrix.size();
 int n = matrix[0].size();
 int low = 0, high = m - 1;
 while (low < n && high >= 0)
 {
     if (matrix[low][high] == target)
     {
         return {low, high};
     }
     else if (matrix[low][high] < target)
     {
         low++;
     }
     else
         high--;
 }
 return {-1, -1};
}
int main()
{
 vector<vector<int>> matrix = {
     {1, 4, 7, 11, 15},
     {2, 5, 8, 12, 19},
     {3, 6, 9, 16, 22},
     {10, 13, 14, 17, 24},
     {18, 21, 23, 26, 30}};
 int target = 231;
 pair<int, int> pair = searchMatrix2(matrix, target);
 cout << pair.first << " " << pair.second;
 return 0;
}
 */
/*
find peak element in 2d array optimal
TC-O(log m*n)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int possible(vector<vector<int>> mat,int col,int n,int m){
int Maxvalue=-1;
int Index=-1;
for(int i=0;i<n;i++){
if(mat[i][col]>Maxvalue){
    Maxvalue=mat[i][col];
    Index=i;
}
}
return Index;
}
vector<int> findPeakGrid(vector<vector<int>> &mat){
    int n=mat.size();
    int m=mat[0].size();
    int low=0,high=m-1;
    while(low<=high){
        int mid=(low+high)/2;
        int row=possible(mat,mid,n,m);
        int left=mid-1>=0 ? mat[row][mid-1] :-1;
        int right=mid+1<m ? mat[row][mid+1] :-1;
        if(mat[row][mid]>left && mat[row][mid] > right){
            return {row, mid};
        }
        else if(mat[row][mid]<left) high=mid-1;
        else low=mid+1;
    }
    return {-1,-1};
}
int main(){
    vector<vector<int>> mat = {
        {10, 20, 15},
        {21, 30, 14},
        {7, 16, 32}};

    vector<int> board= findPeakGrid(mat);
    for(int i=0;i<2;i++){
     cout<<board[i]<<" ";
    }
    return 0;
}
    */
/*
brute force for median median matrix
TC-O(M*N*(log(M*N)))
SC-O(n*m)
#include <bits/stdc++.h>
using namespace std;
int medianmatrix(vector<vector<int>> mat,int m,int n){
vector<int> candidates;
for(int i=0;i<n;i++){
 for(int j=0; j<m;j++){
 candidates.push_back(mat[i][j]);
 }
}
sort candidates.begin() candidates.end());
return candidates.size()/2];
}
int main(){
 vector<vector<int>> mat = {
     {1,4,9},
     {2,5,6},
     {3,7,8}};
int m=mat.size();
int n=mat[0].size();
cout<<medianmatrix(mat,m,n);
 return 0;
}
 */
/*
optimal approach for median median matrix
O(rows × log(max - min) × log(cols))
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int minimum(vector<vector<int>>& matrix,int m){
    int l=INT_MAX;
    for(int i=0;i<m;i++){
        l=min(l,matrix[i][0]);
    }
    return l;
}
int maximum(vector<vector<int>>& matrix,int m,int n){
    int h=INT_MIN;
    for(int i=0;i<m;i++){
        h=max(h,matrix[i][n-1]);
    }
    return h;
}
int countingva(vector<int> &row,int mid){
    int low=0,high=row.size()-1;
    while(low<=high){
        int m=(low+high)/2;
        if(row[m]<=mid){
            low=m+1;
        }
        else high=m-1;
    }
return low;
}
int findMedian(vector<vector<int>>& matrix) {
int m=matrix.size();
int n=matrix[0].size();
int low=minimum(matrix,m);
int high=maximum(matrix,m,n);
int required=(n*m)/2;
while(low<=high){
    int mid=(low+high)/2;
    int count=0;
    for(int i=0;i<m;i++){
        count+=countingva(matrix[i],mid);
    }
   if(count<=required){
    low=mid+1;
   }
   else high=mid-1;
}
return low;
}
int main(){
    vector<vector<int>> matrix = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };
    cout << "Median: " <<findMedian(matrix) << endl;
    return 0;
}
    */
/*
Bubble sort O(n^2)
#include <iostream>
#include <vector>
using namespace std;
int bubblesort(int candidates[], int n)
{
for (int i = 0; i < n - 1; i++)
{
for (int j = 0; j < n - i - 1; j++)
{
   if  candidates[j] > candidates[j + 1])
   {
       swap candidates[j], candidates[j + 1]);
   }
}
}
}
void print(int candidates[],int n){
for (int i = 0; i < n; i++)
{
cout< candidates[i]<<" ";
}

}
int main(){
int candidates[]={4,1,2,3,5,5,4,7,8,9};
int n=10;
bubblesort candidates,n);
print candidates,n);
return 0;
}
*/
/*Selection sort
#include <iostream>
#include <vector>
using namespace std;
int sesort(int candidates[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int small = i;
        for (int j = i + 1; j < n; j++)
        {
            if  candidates[j] < candidates[small])
            {
                small = j;
            }
        }
        swap candidates[i], candidates[small]);
    }
}
void print(int candidates[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << candidates[i] << " ";
    }
}
int main()
{
    int candidates[] = {4, 1, 2, 3, 5, 5, 4, 7, 8, 9};
    int n = 10;
    sesort candidates, n);
    print candidates, n);
    return 0;
}
    */
/*Insertion sort
#include <iostream>
#include <vector>
using namespace std;
void inssort(int candidates[], int n){
 for(int i=1;i<n;i++){
     int curr candidates[i];
     int prev=i-1;
     while (prev>=0 && candidates[prev]>curr)
     {
         candidates[prev+1] candidates[prev];
         prev--;
     }
     candidates[prev+1]=curr;
 }
}
void print(int candidates[], int n)
{
 for (int i = 0; i < n; i++)
 {
     cout << candidates[i] << " ";
 }
}
int main()
{
 int candidates[] = {4, 1, 2, 3, 5, 5, 4, 7, 8, 9};
 int n = 10;
 inssort candidates, n);
 print candidates, n);
 return 0;
}
 */
/*
another code for insertion sort
    #include<iostream>
    using namespace std;
    void bubb(int candidates[],int n){
        for(int i=0;i<=n-1;i++){
            int j=i;
            while(j>0  &&  candidates[j-1] candidates[j]){
               int temp candidates[j-1];
             candidates[j-1] candidates[j];
             candidates[j]=temp;
                j--;
            }

            }
        }
    int main(){
         int n=6;
         int candidates[]={9,13,20,24,46,4};
         bubb candidates,n);
         for (int i = 0; i < n; i++)
         {
            cout< candidates[i]<<" ";
         }
        return 0;
     }
     */
/*
quick sort algorithem
#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>  candidates, int low, int high)
{
int pivot = candidates[low];
int i = low;
int j = high;
while (i < j)
{
    while  candidates[i] <= pivot && i <= high - 1)
    {
        i++;
    }
    while  candidates[j] > pivot && j >= low + 1)
    {
        j--;
    }
    if (i < j) swap candidates[i], candidates[j]);
}
swap candidates[low], candidates[j]);
return j;
}
void qs(vector<int>  candidates, int low, int high)
{
if (low < high)
{
    int pindex = partition candidates, low, high);
    qs candidates, low, pindex - 1);
    qs candidates, pindex + 1, high);
}
}
vector<int> quicksort(vector<int> candidates)
{
qs candidates, 0, candidates.size() - 1);
return candidates;
}
int main()
{
vector<int> candidates = {3, 4, 5, 6, 7, 8, 1}; candidates = quicksort candidates);
 for (int i = 0; i < candidates.size(); i++)
{
    cout << candidates[i] << " ";
}
}
*/
/*
linear search in an array
#include<iostream>
#include<vector>
using namespace std;
int linearsearch(int n,int num,vector<int>& candidates){
    for(int i=0;i<num;i++){
        if candidates[i]==num){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> candidates={2,3,4,5,7,8,9};
    int num=2;
    int n candidates.size();
    cout<<linearsearch(n,num candidates);
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
#include<bits/stdc++.h>
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
    vector<int> a = {1,2,2,1};
    vector<int> b = {2,2};
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

void f(int candidates[], int l, int r)
{
    if (l >= r)
        return;
    swap candidates[l], candidates[r]);
    f candidates, l + 1, r - 1);
}

int main()
{
    int candidates[] = {4, 2, 5, 4, 5};
    int n = sizeof candidates) / sizeof candidates[0]);

    f candidates, 0, n - 1);

    // Print reversed array
    for (int i = 0; i < n; i++)
    {
        cout << candidates[i] << " "; output: 5 4 5 2 4
    }
    cout << endl;

    return 0;
}
    */
/*
Reverse an array using recursion with one pointer
#include <iostream>
using namespace std;

void f(int candidates[], int i, int n) {
    if (i >= n/2) return;
    swap candidates[i], candidates[n-i-1]);
    f candidates,i+1,n);
}

int main() {
  int n;
  cout<<"enter array size :";
  cin>>n;
  int candidates[n];
  for(int i=0;i<n;i++) cin> candidates[i];
  f candidates,0,n);
   for(int i=0;i<n;i++) cout< candidates[i]; // input: 1 2 3 4 5 output: 5 4 3 2 1
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
// string data structure 14/6/26
/*
removeOuterParentheses approach
TC-O(n)
SC-O(1)
#include<bits/stdc++.h>
using namespace std;
 string removeOuterParentheses(string s) {
    string ans;
    int balance=0;
 for(int i=0;i<s.size();i++){
    if(s[i]=='('){
        if(balance>0){
            ans+='(';
        }
        balance++;
    }
    else {
        balance--;
        if(balance>0){
            ans+=')';
        }
        else{

        }
    }
}
return ans;
 }
 int main() {
    string s = "(()())(())";

    cout << "The result is: " << removeOuterParentheses(s) << endl;

    return 0;
}
    */
/*
reverseWords in string
TC-O(n)
SC-O(n)
#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
stringstream ss(s);
string ans;
vector<string> words;
string word;

while(ss >> word){
    words.push_back(word);
}
reverse(words.begin(), words.end());

for(auto w : words){
    if(!ans.empty()) ans += " ";
    ans += w;
}
return ans;
}
 int main() {
    string s = " amazing coding skills ";
    cout <<reverseWords(s) << endl;
 }
 */
/*
reverseWords in string optimal
TC-O(n)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s) {
int i=0,j=0,n=s.size();
while(i<n && s[i]==' '){
 i++;
}
while(i<n){
 while(i<n && s[i]!=' '){
     s[j]=s[i];
     j++;
     i++;
 }
 while(i<n && s[i]==' '){
     i++;
 }
 if(i<n){
     s[j]=' ';
     j++;
 }
}
s.resize(j);

reverse(s.begin(),s.end());

int start=0;
for(int end=0; end<=s.size(); end++){
 if(end==s.size() || s[end]==' '){
     reverse(s.begin()+start,s.begin()+end);
     start=end+1;
 }
}
return s;
}
int main() {
 string s = " hello world ";
 cout <<reverseWords(s) << endl;
}
*/
/*
finding largest odd substr
TC-O(n)
SC-O(n)
#include <bits/stdc++.h>
using namespace std;
string largestOddNumber(string num) {
   for(int i=num.size()-1;i>=0;i--){
    if((num[i]-'0')%2==1){
        return num.substr(0,i+1);
   }
    }
    return "";
}
    int main(){
       string num="42067";
        cout<<largestOddNumber(num);
        return 0;
    }
        */
/*
longest common prefix
TC-O(n*m)
Sc-O(1)
#include <bits/stdc++.h>
using namespace std;
int mini(vector<string>& strs,int n){
int mini=INT_MAX;
for(int i=0;i<n;i++){
mini=min(mini,(int)strs[i].size());
}
return mini;
}
string longestCommonPrefix(vector<string>& strs) {
int n=strs.size();
int m=mini(strs,n);
string ans;
for(int j=0;j<m;j++){
 char ch=strs[0][j];
 for(int i=1;i<n;i++){
    if(j>=strs[i].size() || strs[i][j] !=ch){
     return ans;
    }
 }
 ans+=ch;
}
return ans;
}
int main(){
vector<string> strs = {"interview", "internet", "internal", "interval"};
cout<<longestCommonPrefix(strs);
return 0;
}
*/
/*
longest common prefix sorting approach
TC-O(N * log N + M)
SC-O(M)
#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty()) return "";
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last =strs[strs.size()-1];
    string ans;
    int minLength=min(first.size(),last.size());
    for(int i=0;i<minLength;i++){
        if(first[i]!=last[i]) break;
        ans+=first[i];
    }
    return ans;
}
int main()
{
    vector<string> strs = {"interview", "internet", "internal", "interval"};
    cout << longestCommonPrefix(strs);
    return 0;
}
*/
/*
isomorphic string
TC-O(n)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
 bool isIsomorphic(string s, string t) {
        int m1[256] = {0}, m2[256] = {0};
                    int n = s.size();

          for (int i = 0; i < n; ++i) {
              if (m1[s[i]] != m2[t[i]]) return false;
              m1[s[i]] = i + 1;
              m2[t[i]] = i + 1;
          }

          return true;
    }
    int main(){
        string s="egg";
        string t="add";
        cout<<isIsomorphic(s,t);
        return 0;
    }
        */
/*

rotate string brute force
TC-O(n^2)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
bool rotateString(string s, string goal)
{
if (s.size() != goal.size())
 return false;
if (s == goal)
 return true;
for (int i = 0; i < s.size(); i++)
{
 char ch = s[0];
 for (int j = 1; j < s.size(); j++)
 {
     s[j - 1] = s[j];
     if (j == s.size() - 1)
     {
         s[j] = ch;
         if (s == goal)
             return true;
     }
 }
}
return false;
}
int main()
{
string s = "rotation";
string goal = "tionrota";
cout << rotateString(s, goal);
return 0;
}
*/
/*
rotate string optimal
TC-O(n)
SC-O(n)
#include <bits/stdc++.h>
using namespace std;
bool rotateString(string s, string goal)
{
    if (s.size() != goal.size())
        return false;
    if (s == goal)
        return true;
    if ((s + s).find(goal) != string::npos)
    {
        return true;
    }
    return false;
}
int main()
{
    string s = "rotation";
    string goal = "tionrota";
    cout << rotateString(s, goal);
    return 0;
}
    */
/*
is anagram problem
TC-O(n)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
 int m1[26]={0};
 int m2[26]={0};
 if(s.size()!=t.size()) return false;
 for(int i=0;i<s.size();i++){
    m1[s[i]-'a']++;
    m2[t[i]-'a']++;
 }
 for(int i=0;i<26;i++){
     if(m1[i]!=m2[i]) return false;
 }
return true;
 }
 int main()
{
 string s = "rotation";
 string t = "tionrota";
 cout << isAnagram(s, t);
 return 0;
}
 */
/*
frequency sort problem
Tc-O(k+k*logk)
SC-O(k)
#include <bits/stdc++.h>
using namespace std;
 string frequencySort(string s) {
    unordered_map<char,int> m;
     for(char ch :s){
        m[ch]++;
     }
     vector<pair<char,int>> v(m.begin(),m.end());
     sort(v.begin(),v.end(),[](pair<char,int>& a,pair<char,int>& b){
        return a.second > b.second;
     });
     string ans;
     for(auto p:v){
        ans+=string(p.second,p.first);
     }
     return ans;
    }
 int main()
{
 string s = "Aabb";
 cout << frequencySort(s);
 return 0;
}
 */
/*
max depth of parnthesis
TC-O(n)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int maxDepth(string s){
int maxi=0;
int count=0;
for(int i=0;i<s.size();i++){
    if(s[i]=='('){
    count++;
    maxi=max(count,maxi);
    }
    else if(s[i]==')'){
        count--;
    }
}
return maxi;
}
int main(){
    string s = "(1+(2*3)+((8)/4))+1";
    cout << maxDepth(s);
    return 0;
}
    */
/*
roman to integer
TC-O(N)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s) {
 int res=0;
unordered_map<char, int> roman = {
         {'I', 1}, {'V', 5}, {'X', 10},
         {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
     };
 for(int i=0;i<s.size()-1;i++){
     if(roman[s[i]]<roman[s[i+1]]){
         res -= roman[s[i]];
     }
     else {
         res+=roman[s[i]];
     }
 }
  return res + roman[s.back()];
 }
 int main(){
     string s = "LVIII";
     cout<<romanToInt(s);
     return 0;
 }
     */
/*
my atoi problem
TC-O(N)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int myAtoi(string s) {

    int i = 0;
    int n = s.size();

    while(i < n && s[i] == ' ')
        i++;

    int sign = 1;

    if(i < n && (s[i] == '+' || s[i] == '-')) {
        if(s[i] == '-') sign = -1;
        i++;
    }

    long long ans = 0;

    while(i < n && s[i] >= '0' && s[i] <= '9') {

        ans = ans * 10 + (s[i] - '0');

        if(sign * ans >= INT_MAX)
            return INT_MAX;

        if(sign * ans <= INT_MIN)
            return INT_MIN;

        i++;
    }

    return sign * ans;
}

int main(){
string s = " -042";
cout << myAtoi(s);
return 0;
}
*/
/*
count substrings in a string
TC-o(n^3)
SC-O(k)
#include <bits/stdc++.h>
using namespace std;
int countsubstrings(string s, int K)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            string sub = s.substr(i, j - i + 1);
            int freq[26] = {0};
            int distinct = 0;
            for (int k = 0; k < sub.size(); k++)
            {
                if (freq[sub[k] - 'a'] == 0)
                    distinct++;
                freq[sub[k] - 'a']++;
            }
            if(distinct==K) ans++;
        }

    }
    return ans;
}
int main()
{
    string s = "pqpqs";
    int k = 2;
    cout << countsubstrings(s, k);
    return 0;
}
    */
/*
count substrings in a string better approach
TC-o(n^2)
SC-O(k)
#include <bits/stdc++.h>
using namespace std;
int countsubstrings(string s, int K){
 int ans=0;
 for(int i=0;i<s.size();i++){
     unordered_map<char,int> mp;
     for(int j=i;j<s.size();j++){
         mp[s[j]]++;
         if(mp.size()==K){
          ans++;
         }
         else if(mp.size()>K) {
             break;
         }
         }
     }

 return ans;
}
int main()
{
 string s = "abcbaa";
 int k = 3;
 cout << countsubstrings(s, k);
 return 0;
}
*/
/*
count substrings in a string better approach
TC-o(n)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int atMostKdistinct(string s, int k)
{
    int l = 0, r = 0, maxlen = 0;
    unordered_map<char, int> mpp;
    while (r < s.size())
    {
        mpp[s[r]]++;
        while (mpp.size() > k)
        {
            mpp[s[l]]--;
            if (mpp[s[l]] == 0)
            {
                mpp.erase(s[l]);
            }
            l++;
        }
         maxlen +=(r - l + 1);
        r++;

    }
    return maxlen;
}
int countsubstrings(string s,int k){
    return atMostKdistinct(s,k)-atMostKdistinct(s,k-1);
}
int main()
{
    string s = "abcbaa";
    int k = 3;
    cout << "Count: " << countsubstrings(s, k) << endl;
    return 0;
}
    */
/*
longest palindrome substring
TC-O(n^3)
SC-O(n)
#include <bits/stdc++.h>
using namespace std;
string longestPalindrome(string s){
string longest="";
for(int i=0;i<s.size();i++){
 string ans;
 for(int j=i;j<s.size();j++){
     ans+=s[j];
   string temp=ans;
   reverse(temp.begin(),temp.end());
   if(ans==temp){
     if(ans.length()>longest.length()){
         longest=ans;
     }
   }
 }
}
return longest;
}

int main()
{
 string s = "cbbd";
 cout << longestPalindrome(s) << endl;
 return 0;
}
 */
/*
longest palindrome substring better
TC-O(n^2)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
string longestPalindrome(string s){
int start=0;
int maxlen=1;
int n=s.size();
for(int center =0;center<n;center++){
 int l=center;
 int r=center;
 while(l>=0 && r<n && s[l]==s[r]){
     int len=r-l+1;
     if(len>maxlen){
         maxlen=len;
         start=l;
     }
     l--;
     r++;
 }
 l=center;
 r=center+1;
 while(l>=0 && r<n && s[l]==s[r]){
     int len=r-l+1;
     if(len>maxlen){
         maxlen=len;
         start=l;
     }
     l--;
     r++;
 }
}
return s.substr(start,maxlen);
}

int main()
{
 string s = "babad";
 cout << longestPalindrome(s) << endl;
 return 0;
}
 */
/*
beauty sum problem
TC-O(n^2)
SC-O(k)
#include <bits/stdc++.h>
using namespace std;

int beautySum(string s){
    int beauty=0;
    for(int i=0;i<s.size();i++){
    unordered_map<char,int> mp;
    for(int j=i;j<s.size();j++){
        mp[s[j]]++;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(auto it:mp){
            maxi=max(maxi,it.second);
            mini=min(mini,it.second);
        }
        beauty+=maxi-mini;
    }
}
return beauty;
}
int main(){
    string  s = "aabcbaa";
    cout << beautySum(s) << endl;
    return 0;
}
    */

// Link list start 19/06/206
/*
code to convert array to linklist
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertarr2ll(vector<int>  candidates){
Node* head=new Node candidates[0]);
Node* mover=head;
for(int i=1;i candidates.size();i++){
    Node* temp= new Node candidates[i]);
    mover->next =temp;
    mover=temp;
}
return head;
}
int main(){
   vector<int> candidates={2,5,8,7};
   Node* head = convertarr2ll candidates);
   cout<<head->data;
    return 0;
}
    */
/*
code to traverse linklist
#include <bits/stdc++.h>
using namespace std;
class Node{
 public:
 int data;
 Node* next;

 public:
 Node(int data1,Node* next1){
     data=data1;
     next=next1;
 }
 public:
 Node(int data1){
     data=data1;
     next=nullptr;
 }
};
Node* convertarr2ll(vector<int>  candidates){
Node* head=new Node candidates[0]);
Node* mover=head;
for(int i=1;i candidates.size();i++){
 Node* temp= new Node candidates[i]);
 mover->next =temp;
 mover=temp;
}
return head;
}
int main(){
vector<int> candidates={2,5,8,7};
Node* head = convertarr2ll candidates);
Node* temp=head;
while(temp != nullptr){
 cout<<temp->data<<" ";
 temp=temp->next;
}
 return 0;
}
 */
/*
finding the length of ll
#include <bits/stdc++.h>
using namespace std;
class Node{
 public:
 int data;
 Node* next;

 public:
 Node(int data1,Node* next1){
     data=data1;
     next=next1;
 }
 public:
 Node(int data1){
     data=data1;
     next=nullptr;
 }
};
Node* convertarr2ll(vector<int>  candidates){
Node* head=new Node candidates[0]);
Node* mover=head;
for(int i=1;i candidates.size();i++){
 Node* temp= new Node candidates[i]);
 mover->next =temp;
 mover=temp;
}
return head;
}
int lengthofll(Node* head){
 int cnt=0;
   Node* temp=head;
while(temp != nullptr){
 temp=temp->next;
 cnt++;
}
return cnt;
}
int main(){
vector<int> candidates={2,5,8,7};
Node* head = convertarr2ll candidates);
cout<<lengthofll(head);
 return 0;
}
 */
/*
delete the head from linked list
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertarr2ll(vector<int>  candidates){
Node* head=new Node candidates[0]);
Node* mover=head;
for(int i=1;i candidates.size();i++){
    Node* temp= new Node candidates[i]);
    mover->next =temp;
    mover=temp;
}
return head;
}
void print(Node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* deletehead(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}
int main(){
   vector<int> candidates={2,5,8,7};
   Node* head = convertarr2ll candidates);
    head =deletehead(head);
    print(head);
    return 0;
}
    */
/*
delete the node from ll
#include <bits/stdc++.h>
using namespace std;
class Node{
 public:
 int data;
 Node* next;

 public:
 Node(int data1,Node* next1){
     data=data1;
     next=next1;
 }
 public:
 Node(int data1){
     data=data1;
     next=nullptr;
 }
};

void deleteNode(Node* node) {
 Node* temp=node->next;
 node->data=temp->data;
 node->next=temp->next;
 delete temp;
}
void traverse(Node* head){
 while(head != NULL){
     cout<<head->data<<" ";
     head=head->next;
 }
 cout<<endl;
}
int main(){

 Node* first=new Node(10);
 Node* second=new Node(20);
 Node* third=new Node(30);
 Node* fourth=new Node(40);

 first->next=second;
 second->next=third;
 third->next=fourth;

 Node* head=first;

 cout<<"Before: ";
 traverse(head);

 deleteNode(second);

 cout<<"After: ";
 traverse(head);
 return 0;
}
 */
/*
inserting ele before value x
#include <bits/stdc++.h>
using namespace std;
class Node{
 public:
 int data;
 Node* next;

 public:
 Node(int data1,Node* next1){
     data=data1;
     next=next1;
 }
 public:
 Node(int data1){
     data=data1;
     next=nullptr;
 }
};

Node* insertbeforevaluex(Node* head,int x,int el) {
 if(head==NULL){
     return NULL;
 }
 if(head->data==x){
       return new Node(el,head);
 }
 Node* temp=head;
 while(temp->next!=NULL){
     if(temp->next->data == x){
       Node* y=new Node(el,temp->next);
       temp->next=y;
       break;
     }
     temp=temp->next;
 }
 return head;
}
void traverse(Node* head){
 while(head != NULL){
     cout<<head->data<<" ";
     head=head->next;
 }
 cout<<endl;
}
int main(){

 Node* first=new Node(10);
 Node* second=new Node(20);
 Node* third=new Node(30);
 Node* fourth=new Node(40);

 first->next=second;
 second->next=third;
 third->next=fourth;

 Node* head=first;



head= insertbeforevaluex(head,10,90);

 cout<<"After: ";
 traverse(head);
 return 0;
}
 */
/*
insert at kth element
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *insertatkth(Node *head, int el, int k)
{
    if (head == NULL)
    {
        if (k == 1)
            return new Node(el);
        else
            return head;
    }
    if (k == 1)
    {
       return new Node(el,head);
    }
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k - 1)
        {
            Node *y = new Node(el);
            y->next = temp->next;
            temp->next = y;
            break;
        }
        temp = temp->next;
    }
    return head;
}
void traverse(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);

    first->next = second;
    second->next = third;
    third->next = fourth;

    Node *head = first;

    head = insertatkth(head, 900, 6);

    cout << "After: ";
    traverse(head);
    return 0;
}
    */
/*
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
void traverse(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
// find the middle node TC-O(N) SC-O(1)
Node *findmiddle(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *temp = head;
    int n = 0;
    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    int mid = n / 2 + 1;
    temp = head;
    while (temp != NULL)
    {
        mid = mid - 1;
        if (mid == 0)
        {
            break;
        }
        temp = temp->next;
    }
}
// optimal for find middle node TC-O(N) SC-O(1)
Node *findmiddleoptimal(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
// Reverse LL brute force TC-O(N) SC-O(N)
Node *reversell(Node *head)
{
    stack<int> st;
    Node *temp = head;
    while (temp != NULL)
    {
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}
// Reverse LL optimal approach TC-O(N) SC-O(1)
Node *reverseLL(Node *head)
{
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL)
    {
        Node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}
// Reverse LL recursive approach TC-O(N) SC-O(N)
Node *reversellrecursive(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *newHead = reversellrecursive(head->next);

    Node *front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}
// detect the cycle in ll
bool detectcycle(Node *head)
{
    map<Node *, int> mpp;
    Node *temp = head;
    while (temp != NULL)
    {
        if (mpp.find(temp) != mpp.end())
        {
            return true;
        }
        mpp[temp] = 1;
        temp = temp->next;
    }
    return false;
}
// Optimal approach for detect cycle TC-O(n) SC-O(1)
bool detectcycle1(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
// starting point of the loop brute force
Node *startingpointofloop(Node *head)
{
    map<Node *, int> mpp;
    Node *temp = head;

    while (temp != NULL)
    {
        if (mpp.find(temp) != mpp.end())
        {
                }
        mpp[temp] = 1;
        temp = temp->next;
    }
    return NULL;
}
// starting point of the loop optimal approach TC-O(n) SC-O(1)
Node *startingpointofloop1(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}
// length of the loop TC-O(nlogn) SC-O(n)
int lengthofloop(Node *head)
{
    map<Node *, int> mpp;
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (mpp.find(temp) != mpp.end())
        {
            return cnt - mpp[temp];
        }
        mpp[temp] = cnt;
        temp = temp->next;
    }
    return 0;
}
// length of the loop TC-O(n) SC-O(1)
int lengthofloopoptimal(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            slow = fast->next;
            int cnt = 0;
            while (slow != fast)
            {
                cnt++;
                slow = slow->next;
            }
            return cnt + 1;
        }
    }
    return 0;
}
// check the ll palindrome or not brute TC-O(N) SC-O(N)
bool checkpalindrome(Node *head)
{
    vector<int> ans;
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        ans.push_back(temp->data);
        temp = temp->next;
    }
    int i = 0, j = ans.size() - 1;
    while (i <= j)
    {
        if (ans[i] != ans[j])
        {
            return false;
        }
        else
            i++;
        j--;
    }
    return true;
}
// check the ll palindrome optimalTC-O(N) SC-O(1)
Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
bool checkpalindrome2(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    Node *slow = head;
    Node *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *newhead = reverse(slow->next);
    Node *first = head;
    Node *second = newhead;
    while (second != NULL)
    {
        if (first->data != second->data)
        {
            reverse(newhead);
            return false;
        }
        first = first->next;
        second = second->next;
    }
    reverse(newhead);
    return true;
}
// odd even ll brute force TC-O(N) SC-O(N)
Node *oddEvenList(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *temp = head;
    vector<int> ans;
    while (temp != NULL && temp->next != NULL)
    {
        ans.push_back(temp->data);
        temp = temp->next->next;
    }
    if (temp)
        ans.push_back(temp->data);
    temp = head->next;
    while (temp != NULL && temp->next != NULL)
    {
        ans.push_back(temp->data);
        temp = temp->next->next;
    }
    if (temp)
        ans.push_back(temp->data);
    temp = head;
    int i = 0;
    while (temp != NULL)
    {
        temp->data = ans[i];
        temp = temp->next;
        i++;
    }
    return head;
}
// odd even ll optimal TC-O(N) SC-O(1)
Node *oddEvenListoptimal(Node *head)
{
    if (head == NULL && head->next == NULL)
    {
        return head;
    }
    Node *Odd = head;
    Node *Even = head->next;
    Node *evenhead = head->next;
    while (Even != NULL && Even->next != NULL)
    {
        Odd->next = Odd->next->next;
        Even->next = Even->next->next;
        Odd = Odd->next;
        Even = Even->next;
    }
    Odd->next = evenhead;
    return head;
}
// delete nth node from end brute force TC-O(L++) SC-O(1)
Node *removeNthFromEnd(Node *head, int n)
{
    if (head == NULL)
    {
        return head;
    }
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    if (cnt == n)
    {
        Node *newHead = head->next;
        delete head;
        return newHead;
    }
    int res = cnt - n;
    temp = head;
    while (temp != NULL)
    {
        res--;
        if (res == 0)
        {
            break;
        }
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    return head;
}
// delete nth node from end optimal
Node *removeNthFromEndopt(Node *head, int n){
    if (head == NULL){
        return head;
    }
    Node *fast = head;
    for (int i = 1; i <= n; i++){
        fast = fast->next;
    }
    if(fast==NULL){
        Node* newhead=head->next;
        delete head;
        return newhead;
    }
    Node *slow = head;
    while (fast->next!= NULL){
        slow = slow->next;
        fast = fast->next;
    }
    Node *deletenode = slow->next;
    slow->next = slow->next->next;
    delete deletenode;
    return head;
}
//delete the middle node optimal
Node* deleteMiddle(Node* head) {
    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* deleteNode= prev->next;
    prev->next=prev->next->next;
    delete deleteNode;
    return head;
    }
// Sort LL brute TC-O(NlogN) SC-O(N)
 Node* sortList(Node* head) {
    if(head==NULL || head->next==NULL){
        return head;
    }
   vector<int> ans;
   Node* temp=head;
   while(temp!=NULL){
    ans.push_back(temp->data);
    temp=temp->next;
   }
   sort(ans.begin(),ans.end());
   int i=0;
   temp=head;
   while(temp!=NULL){
    temp->data=ans[i];
    i++;
    temp=temp->next;
   }
   return head;
    }
 //sort ll optimal TC-O(NlogN) SC-O(logN)
    Node* findMiddle(Node* head) {
        Node* slow = head;
        Node* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
    Node* merge(Node* left, Node* right) {
        if (left == NULL)
            return right;
        if (right == NULL)
            return left;
        if (left->data <= right->data) {
            left->next = merge(left->next, right);
            return left;
        }
        else {
            right->next = merge(left, right->next);
            return right;
        }
    }
    Node* sortList2(Node* head) {
        if (head == NULL || head->next == NULL)
            return head;
        Node* mid = findMiddle(head);
        Node* rightHead = mid->next;
        mid->next = NULL;
        Node* left = sortList2(head);
        Node* right = sortList2(rightHead);
        return merge(left, right);
    }
// sort ll of 0s,1s,2s overwrite method
Node* sort1s2s0s(Node* head){
if(head==NULL || head->next==NULL){
    return head;
}
int zero=0,one=0,two=0;
Node* temp=head;
while(temp!=NULL){
    if(temp->data==0){
        zero++;
    }
    else if(temp->data==1){
        one++;
    }
    else {
        two++;
    }
temp=temp->next;
}
temp=head;
while(zero>0){
    temp->data=0;
    zero--;
    temp=temp->next;
}
while(one>0){
    temp->data=1;
    one--;
    temp=temp->next;
}
while(two>0){
    temp->data=2;
    two--;
    temp=temp->next;
}
return head;
}
//sort 0 1 2 optimal
Node* sort1s2s0ss(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
Node* zeroHead=NULL;
Node* zeroTail=NULL;
Node* oneHead=NULL;
Node* oneTail=NULL;
Node* twoHead=NULL;
Node* twoTail=NULL;
Node* temp=head;
while(temp!=NULL){
    Node* nextNode=temp->next;
    temp->next=NULL;
    if(temp->data==0){
        if(zeroHead==NULL){
        zeroHead=temp;
        zeroTail=temp;
        }
      else {
        zeroTail->next=temp;
        zeroTail=temp;
      }
    }
    else if(temp->data==1){
        if(oneHead==NULL){
        oneHead=temp;
        oneTail=temp;
        }
      else {
        oneTail->next=temp;
        oneTail=temp;
      }
    }
    else {
        if(twoHead==NULL){
            twoHead=temp;
            twoTail=temp;
        }
        else {
            twoTail->next=temp;
            twoTail=temp;
        }
    }
    temp=nextNode;
}
if(zeroTail!=NULL){
zeroTail->next=(oneHead!=NULL)?oneHead:twoHead;
}
if(oneTail!=NULL){
oneTail->next=twoHead;
}
if(twoTail!=NULL){
    twoTail->next=NULL;
}
if(zeroHead!=NULL){
    return zeroHead;
}
else if(oneHead!=NULL){
    return oneHead;
}
else return twoHead;
}
//intersection of two LL brute force
    Node* collison(Node* headA,Node* headB,int d){
        while(d){
        d--;
        headA=headA->next;
        }
        while(headA!=headB){
           headA=headA->next;
           headB=headB->next;
        }
        return headA;
    }
    Node *getIntersectionNode(Node *headA, Node *headB) {
    int n=0;
    Node* temp=headA;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
     int m=0;
    temp=headB;
    while(temp!=NULL){
        m++;
        temp=temp->next;
    }
    if(n>m){
        return collison(headA,headB,n-m);
    }
    else return collison(headB,headA,m-n);
    }
//Add 1 to a number represented by LL O(N ) O(1)
Node* reverse1(Node* head){
     Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node* add1number(Node* head){
  head=reverse1(head);
  Node* temp=head;
  int carry=1;
  while(temp!=NULL){
    int sum=temp->data+carry;
    temp->data=sum%10;
    carry=sum/10;
    if(carry==0){
        break;
    }
    temp=temp->next;
  }
  head=reverse1(head);
  if(carry){
    Node* newNode= new Node(1);
    newNode->next=head;
    head=newNode;
  }
  return head;
}
//add two numbers in ll
Node* addtwonum(Node* l1, Node* l2){
Node* dummyNode=new Node(-1);
Node* curr=dummyNode;
int carry=0;
while(l1!=NULL || l2!=NULL){
    int x=0;
    int y=0;
    if(l1!=NULL) x=l1->data;
    if(l2!=NULL) y=l2->data;
int sum=x+y+carry;
carry=sum/10;
curr->next=new Node(sum%10);
curr=curr->next;

if(l1!=NULL) l1=l1->next;
if(l2!=NULL) l2=l2->next;
}
if(carry){
    curr->next=new Node(carry);
}
return dummyNode->next;
}
//rotates ll k times
Node* RotateLLktimes(Node* head,int k){
if(head==NULL || head->next==NULL){
return head;
}
Node* temp=head;
int length=0;
while(temp!=NULL){
length++;
temp=temp->next;
}
if(k%length==0){
    return head;
}
k=k%length;
Node* fast=head;
int cnt=0;
while(cnt!=k){
    fast=fast->next;
    cnt++;
}
Node* slow=head;
while(fast->next!=NULL){
slow=slow->next;
fast=fast->next;
}
Node* nextNode=slow->next;
slow->next=nullptr;
Node* newhead=nextNode;
while(nextNode->next!=NULL){
    nextNode=nextNode->next;
}
nextNode->next=head;
return newhead;
}

int main(){
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *four = new Node(4);
    Node *fifth = new Node(5);
    Node *sixth = new Node(6);
    first->next = second;
    second->next = third;
    third->next = four;
    four->next = fifth;
    fifth->next = sixth;
    sixth->next = nullptr;
    Node *head = first;
    head = flattenLinkedList(head);
    traverse(head);
    return 0;
}
*/
// DLL
/*
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1,Node* back1)
    {
        data = data1;
        next = next1;
        back=back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back=nullptr;
    }
};
Node* arraytoDll(vector<int> candidates){
    Node* head=new Node candidates[0]);
    Node* prev=head;
    for(int i=1;i candidates.size();i++){
        Node* temp=new Node candidates[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void traverse(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
//deleting head
Node* deletehead(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
  Node* prev=head;
   head=head->next;
   head->back=nullptr;
   prev->next=nullptr;
   delete prev;
   return head;
}
//deleting tail of dll
Node* deleteTail(Node* head){
if(head==NULL || head->next==NULL){
    return NULL;
}
Node* prev=head;
Node* temp=head;
while(temp->next!= NULL){
    temp=temp->next;
}
prev=temp->back;
prev->next=nullptr;
temp->back=nullptr;
delete temp;
return head;
}
//delete the kth element of dll
Node* deletekth(Node* head,int k){
if(head==NULL){
    return NULL;
}
if(k==1){
if(head->next==NULL){
    return NULL;
}
else {
Node* prev=head;
head=head->next;
prev->next=nullptr;
head->back=nullptr;
delete prev;
return head;
}
}
Node* temp=head;
int cnt=0;
while(temp!=NULL){
    cnt++;
    if(cnt==k){
    if(temp->next==NULL){
        Node* prev=temp->back;
        prev->next=nullptr;
        temp->back=nullptr;
        delete temp;
        break;
    }
    else {
    Node* prev=temp->back;
    Node* front=temp->next;
    prev->next=front;
    front->back=prev;
    delete temp;
    break;
    }
    }
    temp=temp->next;
}
 return head;
}
//Node deletion
void deleteNode(Node* temp){
    Node* prev=temp->back;
    Node* front=temp->next;
    if(front==NULL){
        temp->back=nullptr;
        prev->next=nullptr;
        delete temp;
    }
    prev->next=front;
    front->back=prev;
    temp->next=temp->back=nullptr;
    delete temp;
}
//insert at head
Node* insertathead(Node* head,int el){
Node* newHead=new Node(el,head,nullptr);
head->back=newHead;
return newHead;
}
//insert as a tail
Node* insertattail(Node* head,int el){
    if(head==NULL){
    return new Node(el,nullptr,nullptr);
}
Node* temp=head;
while(temp->next!=NULL){
 temp=temp->next;
}
Node* newTail=new Node(el,nullptr,temp);
temp->next=newTail;
return head;

}
//inserting before kth node
Node* insertbeforekth(Node* head,int el,int k){
    if(head==NULL){
        return new Node(el,nullptr,nullptr);
    }
    if(k==1){
    Node* headx=new Node(el,head,nullptr);
    head->back=headx;
    head=head->back;
    return head;
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
    if(cnt==k){
    Node* prev=temp->back;
    Node* newinsert=new Node(el,temp,prev);
    prev->next=newinsert;
    temp->back=newinsert;
    return head;
    }
    temp=temp->next;
    }
}
//insert before given node
void insertbeforenode(Node* node,int data){
    Node* prev=node->back;
    Node* newnode=new Node(data,node,prev);
    prev->next=newnode;
    node->back=newnode;
}
//delete all occurence of key TC-O(N) SC-O(1)
Node* deleteoccurence(Node* head,int key){
Node* temp=head;
while(temp!=NULL){
if(temp->data==key){
if(temp==head){
head=head->next;
}
Node* nextNode=temp->next;
Node* prevnode=temp->back;
if(nextNode) nextNode->back=prevnode;
if(prevnode) prevnode->next=nextNode;
free(temp);
temp=nextNode;
}
else temp=temp->next;
}
return head;
}
//find the sum pairs TC-O(N) SC-O(1)
vector<pair<int,int>> pairsum(Node* head,int sum){
vector<pair<int,int>> ans;
Node* left=head;
Node* temp=head;
while(temp->next!=NULL){
temp=temp->next;
}
Node* right=temp;
while(left->data<right->data){
if(left->data+right->data==sum){
ans.push_back({left->data,right->data});
left=left->next;
right=right->back;
}
else if(left->data+right->data<sum){
left=left->next;
}
else right=right->back;
}
return ans;
}
//remove duplicates from dll coptimal
Node* removeduplicates(Node* head){
if(head==NULL || head->next==NULL){
return head;
}
Node* temp1=head;
Node* temp2=head->next;
Node* prev=NULL;
while(temp2!=NULL){
if(temp1->data!=temp2->data){
temp1=temp1->next;
temp2=temp2->next;
}
else {
prev=temp2;
temp2=temp2->next;
temp1->next=temp2;
if(temp2!=NULL) temp2->back=temp1;
delete prev;
}
}
return head;
}
int main(){
vector<int>  candidates={1,2,2,4,5,8,7,7};
Node* head=arraytoDll candidates);
head=removeduplicates(head);
traverse(head);
    return 0;
}
*/
/*
Reverse the DLL
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1,Node* back1)
    {
        data = data1;
        next = next1;
        back=back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back=nullptr;
    }
};
Node* arraytoDll(vector<int> candidates){
    Node* head=new Node candidates[0]);
    Node* prev=head;
    for(int i=1;i candidates.size();i++){
        Node* temp=new Node candidates[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void traverse(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
//brute force TC-O(2N),SC-O(N)
Node* reversethedll(Node* head){
Node* temp=head;
stack<int> st;
while(temp!=NULL){
    st.push(temp->data);
    temp=temp->next;
}
temp=head;
while(temp!=NULL){
    temp->data=st.top();
    st.pop();
    temp=temp->next;
}
return head;
}
//Optimal TC-O(N),SC-O(1)
Node* reversethedll2(Node* head){
Node* current=head;
Node* last=NULL;
while(current!=NULL){
    last=current->back;
    current->back=current->next;
    current->next=last;
    current=current->back;
}
head=last->back;
return head;
}
int main(){
vector<int>  candidates={1,2,4,7,8};
Node* head=arraytoDll candidates);
head=reversethedll2(head);
traverse(head);
    return 0;
}
    */
// RECURSION 1 JULY
/*
#include <bits/stdc++.h>
using namespace std;
// implementation of atoi TC-O(N) SC-O(N)
const int INT_MIN_VAL = -2147483648;
const int INT_MAX_VAL = 2147483647;
int helper(const string &s, int i, long long num, int sign) {
    if (i >= s.size() || !isdigit(s[i]))

    return (int)(sign * num);
    num = num * 10 + (s[i] - '0');

    if (sign * num <= INT_MIN_VAL) return INT_MIN_VAL;
    if (sign * num >= INT_MAX_VAL) return INT_MAX_VAL;

    return helper(s, i + 1, num, sign);
}
int myAtoi(string s, int i = 0) {
    while (i < s.size() && s[i] == ' ') i++;

    int sign = 1;
    if (i < s.size() && (s[i] == '+' || s[i] == '-')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    return helper(s, i, 0, sign);
}
//pow(x,n) brute force
double pow(int x,int n){
if(n==0 || x==1.0){
    return 1;
}
long long N=n;
if(N<0){
    x=1/x;
    N=-N;
}
double ans=1;
while(N>0){
    ans*=x;
    N--;
}
return ans;
}
//pow(x,n) recursive
double power(int x,long long n){
    if(n==0 || x==1.0){
        return 1;
    }
    double half=power(x,n/2);
    if(n%2==0){
        return half*half;
    }
    return half*half*x;
}
double mypow(int x,int n){
long long N=n;
if(N<0){
    x=1/x;
    N=-N;
}
return power(x,N);
}
//count good numbers recursion
    long long power(long long x,long long n){
        if(n==0) return 1;
        long long half=power(x,n/2);
        long long ans=(half*half)%MOD;
        if(n%2==1) ans=(ans*x)%MOD;
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
        long long odd=n/2;
        long long evenWays=power(5,even);
        long long oddWays=power(4,odd);
        return (evenWays+oddWays)%MOD;
    }

int main() {
    int n=4;
    cout<<countGoodNumbers(n) << endl;
    return 0;
}
*/
/*
TC-O(N^2)
SC-O(N)
sort the stack using recursion
#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> &st, int topval){
if(st.empty() || st.top()<=topval){
st.push(topval);
return;
}
int val=st.top();
st.pop();
insert(st,topval);
st.push(val);
}
void sortStack(stack<int> &st){
if(st.empty()){
    return;
}
int topval=st.top();
st.pop();
sortStack(st);

insert(st,topval);
}
int main() {
    stack<int> st;
    st.push(4);
    st.push(3);
    st.push(7);
    st.push(1);
   sortStack(st);
   while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
   }
    return 0;
}
    */
/*
TC-O(N^2)
SC-O(N)
reverse the stack using recursion
#include <bits/stdc++.h>
using namespace std;
void insert(stack<int> st,int val){
if(st.empty()){
 st.push(val);
 return;
}
int topval=st.top();
st.pop();
insert(st,val);
st.push(topval);
}
void reverseStack(stack<int> st){
if(st.empty()){
 return;
}
int topval=st.top();
st.pop();
reverseStack(st);

insert(st,topval);
}
int main() {
 stack<int> st;
 st.push(4);
 st.push(3);
 st.push(7);
 st.push(1);
reverseStack(st);
while(!st.empty()){
 cout<<st.top()<<" ";
 st.pop();
}
 return 0;
}
 */
/*
brute force for generating strings
TC-O(2^n * O(N))
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
vector<string> generatebinarystrings(int n){
vector<string> result;
for(int i=0;i<pow(2,n);i++){
    int num=i;
    string s="";
for(int j=0;j<n;j++){
s=char((num%2)+'0')+s;
num=num/2;
}
bool ok=true;
for(int j=0;j<n-1;j++){
    if(s[j]=='1' && s[j+1]=='1'){
        ok=false;
        break;
    }
}
if(ok) result.push_back(s);
}
return result;
}
int main(){
    int n=3;
    vector<string> ans=generatebinarystrings(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
    */
/*
optimal using recursion
#include <bits/stdc++.h>
using namespace std;
void generatebinarystrings(int n,string s,vector<string> &ans){
if(s.length()==n){
 ans.push_back(s);
 return;
}
generatebinarystrings(n,s+'0',ans);

if(s.empty() || s.back()!='1'){
 generatebinarystrings(n,s+'1',ans);
}
}
int main(){
 int n=3;
 vector<string> ans;
 generatebinarystrings(n,"",ans);
 for(string x:ans){
     cout<<x<<endl;
 }
 return 0;
}
 */
/*
power set problem using recursion
#include <bits/stdc++.h>
using namespace std;
void solve(string s,string output,int index,vector<string> &ans){
if(index >= s.length()){
    if(output.size()>0){
        ans.push_back(output);
    }
    return;
}
    //exclude
    solve(s,output,index+1,ans);
    //include
    char element=s[index];
    output.push_back(element);
   solve(s,output,index+1,ans);

}
vector<string> getsubsequences(string s){
string output="";
vector<string> ans;
int index=0;
solve(s,output,index,ans);
return ans;
}
int main(){
string s="aa";
vector<string> ans=getsubsequences(s);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}
*/
/*
TC-O(2^(2n) * n)
SC-O(n)
brute force for generatung the paranthesis
#include <bits/stdc++.h>
using namespace std;
void generateparanthesis(int n, string s,vector<string>&ans){
if(s.length()==2*n){
    int cnt=0;
    for(int i=0;i<2*n;i++){
     if(s[i]=='(') cnt++;
     else cnt--;
     if(cnt<0) return;
    }
    if(cnt==0) ans.push_back(s);;
    return;
}
generateparanthesis(n,s+'(',ans);
generateparanthesis(n,s+')',ans);
}
int main(){
int n=3;
vector<string> ans;
generateparanthesis(n,"",ans);
for(string x:ans){
    cout<<x<<" ";
}
return 0;
}
*/
/*
for parathesis generate recursion
TC-O(2^N)
SC-O(c*N)
#include <bits/stdc++.h>
using namespace std;
void generateparanthesis(int n, string s,vector<string>&ans,int close,int open){
if(s.length()==2*n){
    ans.push_back(s);;
    return;
}
if(open<n){
generateparanthesis(n,s+'(',ans,close,open+1);
}
if(close<open){
generateparanthesis(n,s+')',ans,close+1,open);
}
}
int main(){
int n=2;
vector<string> ans;
generateparanthesis(n,"",ans,0,0);
for(string x:ans){
    cout<<x<<" ";
}
return 0;
}
*/
/*
TC-O(2^N)
SC-O(N)
subsequence sum equals to k
#include<bits/stdc++.h>
using namespace std;
int countsubsum(int idx,vector<int>&nums,int sum,int k){
if(idx==nums.size()){
    if(sum==k){
        return 1;
    }
    return 0;
}
int take=countsubsum(idx+1,nums,sum+nums[idx],k);

int notTake=countsubsum(idx+1,nums,sum,k);
return take+notTake;
}
int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 5;
    cout << countsubsum(0,nums,0,k) << endl;
    return 0;
}
    */
/*
check if there exist subsequence sum equals to k
#include<bits/stdc++.h>
using namespace std;
bool countsubsum(int idx,vector<int>&nums,int sum,int k){
if(idx==nums.size()){
 return sum==k;
}
if(countsubsum(idx+1,nums,sum+nums[idx],k)) return true;
if(countsubsum(idx+1,nums,sum,k)) return true;

return false;
}
int main() {
 vector<int> nums = {1, 2, 3, 4, 5};
 int k = 19;
 cout << countsubsum(0,nums,0,k) << endl;
 return 0;
}
 */
/*
combination sum 1
#include<bits/stdc++.h>
using namespace std;
void findcombinations(int idx,vector<int>& arr,int target,vector<vector<int>>&ans,vector<int> ds){
 if(idx==arr.size()){
     if(target==0){
         ans.push_back(ds);
     }
     return;
 }
 if(arr[idx]<=target){
     ds.push_back(arr[idx]);
     findcombinations(idx,arr,target-arr[idx],ans,ds);
     ds.pop_back();
 }
 findcombinations(idx+1,arr,target,ans,ds);
 }
public:
 vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
 vector<vector<int>> ans;
 vector<int> ds;
 findcombinations(0,candidates,target,ans,ds);
 return ans;
 }
 */
/*
combination sum 2
#include <bits/stdc++.h>
using namespace std;
void findcombinations(int idx, vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int>& res)
{
    if (target == 0)
    {
        ans.push_back(res);
        return;
    }
    for (int i = idx; i < candidates.size(); i++)
    {
        if (i > idx && candidates[i] == candidates[i - 1])
            continue;
        if (candidates[i] > target)
            break;

        res.push_back(candidates[i]);
        findcombinations(i + 1, candidates, target - candidates[i], ans, res);
        res.pop_back();
    }
}
vector<vector<int>> combinationsum2(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> res;
    sort(candidates.begin(), candidates.end());
    findcombinations(0, candidates, target, ans, res);
    return ans;
}
int main()
{
    vector<int> candidates = {1, 1, 1, 2, 2};
    int target = 4;
    vector<vector<int>> ans = combinationsum2(candidates, target);
   for(auto &v:ans){
    for(int x:v) cout<<x<<" ";
    cout<<endl;
   }
    return 0;
}
    */
/*
subset sum 1
#include <bits/stdc++.h>
using namespace std;
void solve(int idx,vector<int>&nums,vector<int>&res,int sum){
if(idx>=nums.size()){
    res.push_back(sum);
    return;
}

solve(idx+1,nums,res,sum+nums[idx]);
solve(idx+1,nums,res,sum);
}
vector<int> subseq(vector<int> &nums){
vector<int> res;
solve(0,nums,res,0);
sort(res.begin(),res.end());
return res;
}
int main()
{
    vector<int> candidates = {1,2,2};
    vector<int> ans = subseq(candidates);
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
    return 0;
}
    */
/*
subsets 2 where duplicates combination not allowed
   #include <bits/stdc++.h>
using namespace std;
void solve(int idx,vector<int> nums,vector<int>&res,vector<vector<int>>&ans){
    ans.push_back(res);
  for (int i = idx; i < nums.size(); i++)
    {
        if (i > idx && nums[i] == nums[i - 1])
            continue;
        res.push_back(nums[i]);
        solve(i + 1, nums, res,ans);
        res.pop_back();
    }
}
vector<vector<int>> subseq(vector<int> &nums){
vector<int> res;
vector<vector<int>>ans;

solve(0,nums,res,ans);
return ans;
}
int main()
{
    vector<int> candidates = {1,2,2};
    vector<vector<int>> ans = subseq(candidates);
    for(auto &v:ans){
    for(int x:v) cout<<x<<" ";
    cout<<endl;
    }
    return 0;
}
    */
/*
combination sum 3 recursion
#include <bits/stdc++.h>
using namespace std;
void solve(int idx,int k,int target,vector<int>& ds, vector<vector<int>>& ans){
if(ds.size()==k){
    if(target==0) ans.push_back(ds);
    return;
}
for(int i=idx;i<=9;i++){
    ds.push_back(i);
    solve(i+1,k,target-i,ds,ans);
    ds.pop_back();
}
}
vector<vector<int>> combinationSum3(int k, int n){
    vector<vector<int>> ans;
    vector<int> ds;
    solve(1, k, n, ds, ans);
    return ans;
}
int main()
{
    int k = 3;
    int n = 9;
    vector<vector<int>> ans = combinationSum3(k, n);
    for (auto &v : ans)
    {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
}
    */
/*
letter combinations problem
#include <bits/stdc++.h>
using namespace std;
void solve(int idx,string digits,string curr,vector<string>& ans,vector<string> keypad){
if(idx>=digits.size()){
 ans.push_back(curr);
 return;
}
int digit=digits[idx]-'0';
string letter=keypad[digit];
for(int i=0;i<letter.size();i++){
curr.push_back(letter[i]);
solve(idx+1,digits,curr,ans,keypad);
curr.pop_back();
}
}
vector<string> letterCombinations(string digits) {
 vector<string> ans;
 vector<string> keypad={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
 string curr;
 solve(0,digits,curr,ans,keypad);
 return ans;
 }
int main(){
 string digis="23";
 vector<string> ans=letterCombinations(digis);
 for(int i=0;i<ans.size();i++){
     cout<<ans[i]<<" ";
 }
}
 */
/*
palindrome partitioning
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string& s,int l,int r){
while(l<r){
    if(s[l]!=s[r]) return false;
    l++;r--;
}
return true;
}
void solve(int idx,string s,vector<string> &curr,vector<vector<string>>&ans){
    if(idx==s.size()){
        ans.push_back(curr);
        return;
    }
    for(int i=idx;i<s.size();i++){
    if(isPalindrome(s,idx,i)){
        curr.push_back(s.substr(idx,i-idx+1));
        solve(i+1,s,curr,ans);
        curr.pop_back();
    }
    }
}
vector<vector<string>> partition(string s){
vector<vector<string>> ans;
vector<string> curr;
solve(0,s,curr,ans);
return ans;
}
int main(){
    string s = "aab";
    vector<vector<string>> ans = partition(s);
    for (auto &v : ans){
        for (string x : v)
            cout << x << " ";
        cout << endl;
    }
}
    */
/*
Word search in 2d recursion
TC-O(N*M*3^L)
SC-O(L)
#include <bits/stdc++.h>
using namespace std;
bool helper(vector<vector<char>>& board, string word,int i,int j,int n,int m,int k){
 if(k>=word.size()) return true;
 if(i<0 || i>=n || j<0 || j>=m || board[i][j]=='.' || word[k]!=board[i][j]) return false;
 if(word.size()==1 && word[k]==board[i][j]) return true
 bool temp=false;
 int x[4]={0,0,-1,1};
 int y[4]={-1,1,0,0};
 for(int index=0;index<4;index++){
     temp=temp || helper(board,word,i+x[index],j+y[index],n,m,k+1);
 }
 board[i][j]=word[k];
 return temp;
}
bool exist(vector<vector<char>>& board, string word) {
 int n=board.size();
 if(n==0) return false;
 int m=board[0].size();
 if(word.size()==0) return false;
 for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
         if(word[0]==board[i][j]){
             if(helper(board,word,i,j,n,m,0)) return true;
         }
     }
 }
 return false;
 }
int main(){
 vector<vector<char>> board={
     {'A','B','C','E'},
     {'S','F','C','S'},
     {'A','D','E','E'},
 };
 string word="ABCCED";
 cout<<exist(board,word);
 return 0;
}
 */
/*
N queen problem
#include <bits/stdc++.h>
using namespace std;
bool isSafe(int row,int col,vector<string> board,int n){
int duprow=row;
int dupcol=col;
while(row>=0 && col>=0){
    if(board[row][col]=='Q') return false;
    row--;
    col--;
}
row=duprow;
col=dupcol;
while(col>=0){
    if(board[row][col]=='Q') return false;
    col--;
}
row=duprow;
col=dupcol;

while(row<n && col>=0){
    if(board[row][col]=='Q') return false;
    col--;
    row++;
}
return true;
}
void solve(int col,vector<string>&board,vector<vector<string>>& ans,int n){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            solve(col+1,board,ans,n);
            board[row][col]='.';
        }
    }
}
vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n,'.');
    for(int i=0;i<n;i++){
        board[i]=s;
    }
    solve(0,board,ans,n);
    return ans;
    }
    int main(){
    int n=4;
    vector<vector<string>> ans=solveNQueens(n);
    for(auto &v:ans){
        for(string x:v) cout<<x;
        cout<<endl;
    }
    }
    */
/*
Rat in a maze
#include <bits/stdc++.h>
using namespace std;
void solve(int i,int j,string s,vector<string> &ans,int n,vector<vector<int>>& board,vector<vector<int>>&vis){
if(i==n-1 && j==n-1){
   ans.push_back(s);
   return;
}
//down
if(i+1<n && !vis[i+1][j] && board[i+1][j]==1){
   vis[i][j]=1;
   solve(i+1,j,s+'D',ans,n,board,vis);
   vis[i][j]=0;
}
//left
if(j-1>=0 && !vis[i][j-1] && board[i][j-1]==1){
   vis[i][j]=1;
   solve(i,j-1,s+'L',ans,n,board,vis);
   vis[i][j]=0;
}
//right
if(j+1<n && !vis[i][j+1] && board[i][j+1]==1){
vis[i][j]=1;
   solve(i,j+1,s+'R',ans,n,board,vis);
   vis[i][j]=0;
}
//up
if(i-1>=0 && !vis[i-1][j] && board[i-1][j]==1){
    vis[i][j]=1;
   solve(i-1,j,s+'U',ans,n,board,vis);
   vis[i][j]=0;
}
}
vector<string> ratinmaze(int n,vector<vector<int>>& board){
vector<string> ans;
vector<vector<int>> vis(n,vector<int>(n,0));
if(board[0][0]==1) solve(0,0,"",ans,n,board,vis);
return ans;
}
int main(){
int n=4;
vector<vector<int>>board={
   {1,0,0,0},
   {1,1,0,1},
   {1,1,0,0},
   {0,1,1,1}
};
vector<string> ans=ratinmaze(n,board);
   for(int i=0;i<ans.size();i++){
   cout<<ans[i]<<" ";
   }

}
   */
/*
word break problem
TC-O(N*2^N)
SC-O(N)
#include <bits/stdc++.h>
using namespace std;
bool solve(int idx,string s,unordered_set<string> st){
 if(idx==s.size()) return true;
 for(int end=idx;end<s.size();end++){
 string substring=s.substr(idx,end-idx+1);
 if(st.find(substring)!=st.end()){
     if(solve(end+1,s,st)) return true;
 }
 }
 return false;
 }
bool wordBreak(string s, vector<string>& wordDict) {
     unordered_set<string> st(wordDict.begin(),wordDict.end());
     if(solve(0,s,st)) return true;
  return false;
 }
  */
/*
generating the permutaions of string or int
#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>& nums,vector<int>&res,vector<vector<int>>&ans,int mpp[]){
   if(res.size()==nums.size()){
       ans.push_back(res);
       return;
   }
   for(int i=0;i<nums.size();i++){
       if(!mpp[i]){
       res.push_back(nums[i]);
       mpp[i]=1;
       solve(nums,res,ans,mpp);
       res.pop_back();
       mpp[i]=0;
       }
   }
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<int> res;
    vector<vector<int>> ans;
    int mpp[nums.size()]={0};
    for(int i=0;i<nums.size();i++) mpp[i]=0;
    solve(nums,res,ans,mpp);
    return ans;
   }
   int main(){
   vector<int> nums={1,2,3};
   vector<vector<int>> ans=permute(nums);
   for(auto &v:ans){
       for( int x:v) cout<<x;
       cout<<" ";
   }
   }
   */
/*
kth permutaion brute force
TC-O(n!*n)
SC-O(n!*n)
#include <bits/stdc++.h>
using namespace std;
void solve(int index,string s,vector<string>& ans){
if(index==s.size()){
   ans.push_back(s);
   return;
}
for(int i=index;i<s.size();i++){
   swap(s[index],s[i]);
   solve(index+1,s,ans);
   swap(s[index],s[i]);
}
}
string getPermutation(int n, int k){
vector<string> ans;
string s="";
for(int i=0;i<n;i++){
   s+=to_string(i+1);
}
solve(0,s,ans);
sort(ans.begin(),ans.end());
return ans[k-1];
}
int main(){
   int n = 3, k = 5;
   cout<<getPermutation(n,k);
   return 0;
}
   */
/*
optimal for kth permutation
TC-O(n*n)
SC-O(n)
#include <bits/stdc++.h>
using namespace std;
string getPermutation(int n, int k){
int fact=1;
vector<int> num;
for(int i=1;i<n;i++){
 fact=fact*i;
 num.push_back(i);
}
num.push_back(n);
string ans="";
k=k-1;
while(true){
 ans=ans+to_string(num[k/fact]);
 num.erase(num.begin()+ k/fact);
 if(num.size()==0){
     break;
 }
 k=k%fact;
 fact=fact/num.size();
}
return ans;
}
int main(){
 int n = 3, k = 5;
 cout<<getPermutation(n,k);
 return 0;
}
 */
/*
add operator expression
#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
void helper(string s,int target,int i,string path,int eval,int residue){
if(i==s.size()){
if(eval==target){
    ans.push_back(path);
    return;
}
}
string currStr;
long num=0;
for(int j=i;j<s.size();j++){
    if(j>i && s[i]==0){
    return;
}
currStr+=s[j];
num=num*10+s[j]-'0';
if(i==0){
    helper(s,target,j+1,path+currStr,num,num);
}
else {
helper(s,target,j+1,path+"+"+currStr,eval+num,num);
helper(s,target,j+1,path+"-"+currStr,eval-num,-num);
helper(s,target,j+1,path+"*"+currStr,eval-residue+residue*num,residue*num);
}
}
}
vector<string> addOperators(string num, int target) {
helper(num,target,0,"",0,0);
return ans;
    }
int main(){
string num="123"; int target=6;
vector<string> ans=addOperators(num,target);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}
 */
// bit manipulation 15/07/2026
/*
Minimum bitflips to covert int
TC-O(31)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int minBitFlips(int start, int goal){
int ans=start^goal;
int cnt=0;
for(int i=0;i<31;i++){
    if(ans & (1<<i)) cnt++;
}
return cnt;
}
int main(){
int start=10;
int goal=7;
cout<<minBitFlips(start,goal);
    return 0;
}
    */
/*
powerset using bit manipulation

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> powerset(vector<int>&nums){
 int n=nums.size();
int subsets=1<<n;
vector<vector<int>> ans;
for(int num=0;num<subsets;num++){
 vector<int> list;
 for(int i=0;i<n;i++){
     if(num & (1<<i)){
         list.push_back(nums[i]);
     }
 }
 ans.push_back(list);
}
return ans;
}
int main(){
vector<int> nums={1,2,3};
vector<vector<int>> ans=powerset(nums);
for(auto &v:ans){
for(int x:v) cout<<x;
cout<<" ";
}
return 0;
}
*/
/*
brute force for XOR of range L to R
TC-O(N)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int XORfromLtoR(int L, int R){
int ans=0;
while(L<=R){
ans^=L;
L++;
}
return ans;
}
int main(){
int L=1;
int R=3;
cout<<XORfromLtoR(L,R);
    return 0;
}
    */
/*
optimal for XOR of range L to R
TC-O(1)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int XORtillN(int n){
if(n%4==1) return 1;
if(n%4==2) return n+1;
if(n%4==3) return 0;
return n;
}
int XORfromLtoR(int L, int R){
return XORtillN(L-1)^XORtillN(R);
}
int main(){
int L=1;
int R=3;
cout<<XORfromLtoR(L,R);
 return 0;
}
 */
/*
brute force for single number 2
TC-O(n)
SC-O(n)
#include <bits/stdc++.h>
using namespace std;
int singleNum2(vector<int>& nums) {
    unordered_map<int,int> freq;
    for(int i=0;i<nums.size();i++){
        freq[nums[i]]++;
    }
    for(auto it:freq){
        if(it.second==1) return it.first;
    }
    return -1;
}
int main(){
vector<int> nums={0,1,0,1,0,1,99};
cout<<singleNum2(nums);
 return 0;
}
 */
/*
better for single number 2
TC-O(n*32)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int singleNum2(vector<int>& nums) {
    int ans=0;
for(int bitidx=0;bitidx<32;bitidx++){
int cnt=0;
for(int i=0;i<nums.size();i++){
 if(nums[i] & (1<<bitidx)) cnt++;
}
if(cnt%3==1){
ans=ans | (1<<bitidx);
}
}
return ans;
}
int main(){
vector<int> nums={0,1,0,1,0,1,99};
cout<<singleNum2(nums);
 return 0;
}
 */
/*
optimal for single number 2
TC-O(n)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
int singleNum2(vector<int>& nums) {
int ones=0,twos=0;
for(int i=0;i<nums.size();i++){
    ones=(nums[i]^ones)& ~twos;
    twos=(nums[i]^twos)& ~ones;
}
return ones;
}
int main(){
vector<int> nums={0,1,0,1,0,1,99};
cout<<singleNum2(nums);
 return 0;
}
 */
/*
brute force for single number 3
TC-O(Nlogn)*O(m)
SC-O(M)
#include <bits/stdc++.h>
using namespace std;
 vector<int> singleNum3(vector<int>& nums) {
    unordered_map<int,int>mpp;
    vector<int> list;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
    } 
    for(auto it:mpp){
        if(it.second==1){
        list.push_back(it.first);
        }
    }
    return list;
    }
int main(){
vector<int> nums={1,2,1,3,2,5};
vector<int> ans=singleNum3(nums);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
 return 0;
}
*/
/*
optimal for single number 3
TC-O(n)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
 vector<int> singleNum3(vector<int>& nums) {
  int xr=0;
   for(int num:nums){
   xr^=num;
   }
  unsigned int mask=(unsigned int)xr & (-(unsigned int) xr);
   int first=0;
   int second=0;
   for(int x:nums){
   if(x & mask){
    first^=x;
   }
   else second^=x;
   }
    return {first,second};
    }
int main(){
vector<int> nums={1,2,1,3,2,5};
vector<int> ans=singleNum3(nums);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
 return 0;
}
 */
//Maths 
/*
finding all prime factors of a number
TC-O(sqrt(n)*nlogn)
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
vector<int> oddnumtimes(int n){
vector<int> ans;
for(int i=2;i<sqrt(n);i++){
    if(n%i==0){
       ans.push_back(i);
       while(n%i==0){
        n=n/i;
       }
    }
}
if(n!=1) ans.push_back(n);
return ans;
}
int main(){
int n=60;
vector<int> ans=oddnumtimes(n);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}
*/
/*
diviosor of the numbers
TC-O(sqrt(n))
SC-O(1)
#include <bits/stdc++.h>
using namespace std;
vector<int> divisorofnum(int n){
vector<int> ans;
for(int i=1;i<=sqrt(n);i++){
    if(n%i==0){
        ans.push_back(i);
        if(n/i!=i){
            ans.push_back(n/i);
        }
    }
}
return ans;
}
int main(){
int n=60;
vector<int> ans=divisorofnum(n);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}
*/
/*
brute force for count primes
TC-O(N*sqrtN)
SC-(1)
#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int countprimes(int n){
    int cnt=0;
for(int i=2;i<=n;i++){
    if(isprime(i)){
        cnt++;
    }
    }

return cnt;
}
int main(){
int n=10;
cout<<countprimes(n);
return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int countprimes(int n){
    int cnt=0;
for(int i=2;i<=n;i++){
    if(isprime(i)){
        cnt++;
    }
    }

return cnt;
}
int main(){
int n=10;
cout<<countprimes(n);
return 0;
}