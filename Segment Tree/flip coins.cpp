#include <bits/stdc++.h>
using namespace std;
int seg[10005]={0},lazy[10005]={0};
void build(int a[],int ind, int l,int r)
{
    if(l>r)
    {
        return;
    }
    if(l==r)
    {
        seg[ind]=a[l];
        return;
    }
    int mid=(l+r)/2;
    build(a,2*ind+1,l,mid);
    build(a,2*ind+2,mid+1,r);
    seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}
void buildtree(int arr[],int n)
{
    build(arr,0,0,n-1);
}
  int getSumUtil(int ss, int se, int qs, int qe, int si) 
{ 
   
    if (lazy[si] != -1) 
    { 
        seg[si] = (se-ss+1)-seg[si]; 
        if (ss != se) 
        { 
            lazy[si*2 + 1]   = ((ss+se)/2-ss+1)-lazy[si*2 + 1]; 
            lazy[si*2 + 2]   = (se-((ss+se)/2+1)+1)-lazy[si*2 + 2]; 
        } 
        lazy[si] = -1; 
    } 

    if (ss>se || ss>qe || se<qs) 
        return 0; 

    if (ss>=qs && se<=qe) 
        return seg[si]; 

    int mid = (ss + se)/2; 
    return getSumUtil(ss, mid, qs, qe, 2*si+1) + getSumUtil(mid+1, se, qs, qe, 2*si+2); 
} 

int getSum(int n, int qs, int qe) 
{ 
 if (qs < 0 || qe > n-1 || qs > qe) 
    { 
       // printf("Invalid Input"); 
        //return -1; 
      return -1;
    } 

    return getSumUtil(0, n-1, qs, qe, 0); 
} 

void updateRangeUtil(int si, int ss, int se, int us,int ue, int diff) 
{ 
   
    if (lazy[si] != -1) 
    { 
        seg[si] = (se-ss+1)-seg[si]; 
        if (ss != se) 
        { 
            lazy[si*2 + 1]   = ((ss+se)/2-ss+1)-lazy[si*2 + 1]; 
            lazy[si*2 + 2]   = (se-((ss+se)/2+1)+1)-lazy[si*2 + 2]; 
        } 
        lazy[si] = -1; 
    } 
   
    if (ss>se || ss>ue || se<us) 
        return ; 
    if (ss>=us && se<=ue) 
    { 
        seg[si] = (se-ss+1)-seg[si]; 
        if (ss != se) 
        { 
            lazy[si*2 + 1]   = ((ss+se)/2-ss+1)-lazy[si*2 + 1]; 
            lazy[si*2 + 2]   = (se-((ss+se)/2+1)+1)-lazy[si*2 + 2]; 
        } 
        return; 
    } 
   
    int mid = (ss+se)/2; 
    updateRangeUtil(si*2+1, ss, mid, us, ue, diff); 
    updateRangeUtil(si*2+2, mid+1, se, us, ue, diff); 
    seg[si] = seg[si*2+1] + seg[si*2+2]; 
} 
void updateRange(int n, int us, int ue, int diff) 
{ 
   updateRangeUtil(0, 0, n-1, us, ue, diff); 
}   
int main() {
    std::ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
    int t=1,n,i,j,k,x,y;
  //cin>>t;
  memset(lazy,-1,sizeof(lazy));  
  while(t--)
  {
   int q; 
   cin>>n>>q;
   int arr[n+1];
   for(i=0;i<=n;i++)
   {
    arr[i]=0;
   }

   buildtree(arr,n);

   while(q--)
   {
   int a,b; 
   cin>>x>>a>>b;

   if(x==0)
   {
     updateRange(n,a,b,1);
   }
   else
   {
    cout<<getSum(n,a,b)<<endl;
   }

  }
  }
   return 0;
  }
