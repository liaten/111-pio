#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter numbers of houses: ";
    cin>>n;
    bool *houses = new bool[n]; //объявление массива
    for(int i=0;i<n;i++){
        int g;
        metka: cout<<"Where do you have to set phone (You can stop setting by pressing \"0\" button): ";
        cin>>g;
        if(g>n){
            g=0;
            cout<<"Num of house can't be more than massive!\n";
            goto metka;
        }
        houses[g-1]=1;
        if(g==0)break; //остановка если вводится 0
    }//визуализация массива
    for (int i=0;i<n;i++){
        cout<<houses[i]<<" ";
    }
    int *output= new int[n]; //
    int min_sum=n*n;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int f=0;f<n;f++){
            if(houses[f]==1){
                sum+=abs(f-i);
            }
        }
        if((sum<=min_sum)&&(sum!=0)){
            min_sum=sum;
            output[i]=sum;
            }
    }
    //визуализация вывода
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<output[i]<<" ";
    }
    cout<<"\nMinimal lines sum: "<<min_sum<<endl;
    cout<<"You can put antenna to houses №: ";
    for(int i=n-1;i>0;i--){
        if(output[i]==0)continue;
        if((output[i]>output[i+1])&&(output[i+1]!=0))break;
        cout<<i+1<<" ";
    }
    return 0;
}