int Modular_nCr(int n,int r){
	if(r<0 || r>n) return 0;
	long long a=factorial(n);
	long long b=(factorial(r)*factorial(n-r))%M;
	
	//fermat's little theorem to find a/b as a*(b^-1)
	//find the power using binary exponentiation
	return a*findPower(b,M-2)%M;
}

//example leetcode 3881
class Solution {
public:
    int mod=1e9+7;
    int countVisiblePeople(int n, int pos, int k) {
        int num=1;
        int deno=1;
        for(int i=1;i<=k;i++){
            num=(1ll*num*(n-i))%mod;
        }
        for(int i=1;i<=k;i++){
            deno=(1ll*deno*i)%mod;
        }
        //num*(deno inverse);
        //fermat thrm says deno inverse is deno^modulo-2 mod modulo
        long long base=deno;
        int ex=mod-2;
        long long res=1;
        while(ex){
            if((ex&1) == 1){
                res=(res*base)%mod;
            }
            base=(base*base)%mod;
            ex>>=1;
        }

        return (2ll* (num*res)%mod)%mod;
        
    }
};
