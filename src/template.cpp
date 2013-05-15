#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;



namespace bit_eat
{
    int first_one_bit(unsigned int x)
    {
        int highest=(1<<31);
        for(int i=0;i<=31;i++)
        {
            if((x & highest >> i) != 0)return 31-i;
        }
        return -1;
    }

    int last_one_bit(unsigned int x)
    {
        for(int i=0;i<=31;i++)
        {
            if((x & 1 << i) != 0)return i;
        }
        return -1;

    }

    int count_bit(unsigned int x)
    {
        return __builtin_popcount(x);
    }


    bool is_pow_of_2(unsigned int x)
    {
        return x==(x&~(x-1));
    }

}

namespace string_it
{
    vector<string> split(const string &s, char delim )
    {
        vector<string> elems;
        stringstream ss(s);
        string item;
        while (getline(ss, item, delim)) {
            elems.push_back(item);
        }
        return elems;
    }
}


namespace tree_distance
{
    int n,k,d[50005][505];
    vector<int>edge[50005];

    long long number_of_path_of_k_length(int x,int y)
    {
        long long ret=0;
        int i,j;
        d[x][0]++;

        for(i=0;i<edge[x].size();i++)
        {
            if(edge[x][i]!=y)
            {
                ret+=number_of_path_of_k_length(edge[x][i],x);
            }
        }
        for(i=0;i<k;i++)
        {
            ret+=d[x][i]*d[y][k-i-1];
        }
        for(i=0;i<k;i++)
        {
            d[y][i+1]+=d[x][i];
        }
        return ret;

    }

}

namespace BIT
{
    #define MaxVal 1<<17
    int tree[(1<<17)+1];
    int read(int idx){
        int sum = 0;
        while (idx > 0){
            sum += tree[idx];
            idx -= (idx & -idx);
        }
        return sum;
    }

    void update(int idx ,int val){
        while (idx <= MaxVal){
            tree[idx] += val;
            idx += (idx & -idx);
        }
    }

    int readSingle(int idx){
        int sum = tree[idx];
        if (idx > 0){
            int z = idx - (idx & -idx);
            idx--;
            while (idx != z){
                sum -= tree[idx];
                idx -= (idx & -idx);
            }
        }
        return sum;
    }
}


namespace ncr_big_mod
{
    #define mod 1000000007
    #define max_size 1000009
    __int64 fac[max_size+1];
    __int64 big_mod(__int64 i,__int64 j)
    {
        if(j==0)return 1;
        __int64 x=big_mod(i,j>>1);
        x=(x*x)%mod;
        if(j&1)return (x*i)%mod;
        return x;
    }


    __int64 ncr(int i,int j)
    {
        return (((fac[i]*big_mod(fac[j],mod-2))%mod)*big_mod(fac[i-j],mod-2))%mod;
    }

    void fac_gen()
    {
        fac[0]=1;
        for(int i=1;i<=max_size;i++)
            fac[i]=(fac[i-1]*i)%mod;

    }

}


int main()
{
    cout<<bit_eat::count_bit(101);
    return 0;
}
