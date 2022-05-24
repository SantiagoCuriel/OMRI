#include <bits/stdc++.h>

using namespace std;
int it;
int t,n,a,b,l,dig,res,cn[10],cl[10];
long long int arre2[60002];
long long int arre3[60002];
long long int arre4[60002];
long long int arre5[60002];
int correctos,semicorrectos;
void compara(int intento,int codigo){
    l=intento;
    for (int i=dig; l; i--){
        cn[i]=l%10;
        l/=10;
    }
    l=codigo;
    for (int i=dig; l; i--){
        cl[i]=l%10;
        l/=10;
    }
    for (int i=1; i<=dig; i++){
        if (cn[i]==cl[i]){
            correctos++;
            cl[i]=0;
            cn[i]=1000;
        }
    }
    for (int i=1; i<=dig; i++){
        for (int j=1; j<=dig; j++){
            if (cn[i]==cl[j]){
                semicorrectos++;
                cl[j]=0;
                cn[i]=1000;
            }
        }
    }
}
void comb2(){
    it=1;
    it=1;
    int actual;
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            actual=i*10+j;
            arre2[it]=actual;
            //cout<<it<<" ";
            it++;
        }
    }
}
void comb3(){
    it=1;
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            for(int k=1; k<=9; k++){
                int actual=k*100+i*10+j;
                arre3[it]=actual;
                it++;
            }
        }
    }
}
void comb4(){
    it=1;
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            for(int k=1; k<=9; k++){
                for(int y=1; y<=9; y++){
                    int actual=y*1000+k*100+i*10+j;
                    arre4[it]=actual;
                    it++;
                }
            }
        }
    }
}
void comb5(){
    it=1;
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            for(int k=1; k<=9; k++){
                for(int y=1; y<=9; y++){
                    for(int z=1; z<=9; z++){
                        int actual=z*10000+y*1000+k*100+i*10+j;
                        arre5[it]=actual;
                        it++;
                    }
                }
            }
        }
    }
    //cout<<it<<" ";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    comb2();
    comb3();
    comb4();
    comb5();
    cin >> t;
    while (t--){
        cin >> n >> a >> b;
        l=n;
        while (l){
            l/=10;
            dig++;
        }
        if (dig==2){
            for(int i=1;i<=81;i++){
                //cout<<arre2[i]<<" ";
                compara(arre2[i],n);
                if(correctos==a&&semicorrectos==b)
                {
                    res++;
                    //cout<<arre2[i]<<" ";
                }
                correctos=0;
                semicorrectos=0;
            }
        }else
        if (dig==3){
            for(int i=1; i<=729; i++){
                compara(arre3[i],n);
                if(correctos==a && semicorrectos==b){
                    res++;
                }
                correctos=0;
                semicorrectos=0;
            }
        }else
        if (dig==4){
            for(int i=1; i<=6561; i++){
                compara(arre4[i],n);
                if(correctos==a && semicorrectos==b){
                    res++;
                }
                correctos=0;
                semicorrectos=0;
            }
        }else
        if (dig==5){
            for(int i=1; i<=59049; i++){
                compara(arre5[i],n);
                if(correctos==a&&semicorrectos==b){
                    res++;
                }
                correctos=0;
                semicorrectos=0;
            }
        }
        //compara(91543,13111);
        cout << res << '\n';
        res=0;
        dig=0;
        correctos=0;
        semicorrectos=0;
    }
    return 0;
}
