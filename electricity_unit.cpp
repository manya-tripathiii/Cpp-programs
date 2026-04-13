# include<iostream>
using namespace std;
float electricity_bill(int u){
  float count;
  int fifcount=0;
  int huncount=0;
  int twocount=0;
  int morecount=0;
  int bill;
  for(int i=1;i<=u;i++){
    if(i<=50){
      fifcount++;
    }
    else if(i>50 && i<=150){
      huncount++;
    }
    else if(i>150 && i<=250){
      twocount++;
    }
    else if(i>250){
      morecount++;
    }
  }
  count=(fifcount*0.50)+(huncount*0.75)+(twocount*1.20)+(morecount*1.50);
  return count;
}
int main(){
  int u;
  cout<<"Enter the number of units consumed: ";
  cin>>u;
  float bill=electricity_bill(u);
  cout<<"Electricity bill: "<<bill;
}

# include<iostream>


