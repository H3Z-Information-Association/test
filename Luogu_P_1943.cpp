#include<bits/stdc++.h>
using namespace std;
const long double Gamma=0.5772156649015328;
long long n;
double ans;
int main(){
    scanf("%lld",&n);
    if(n>=1e8) return printf("%.8Lf",Gamma+log(n)),0;
    for(int k=1;k<=n;k++){
        ans+=1.0/k;
    }
    printf("%.8lf",ans);
    return 0;
}