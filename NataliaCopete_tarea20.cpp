#include <iostream>

using std::cout;
using std::endl;

int main{

double c=1.0;
double T=0.5;
double dx=0.1;
double dt=0.01;
double xmin=0.0;
double xmax=2.0;
int N=(xmax-xmin)/dx;
double t=0

double* u=new double*[N];


 
for(double i=xmin;i<xmax;i+dx){
   if(i>=0.75 && i<=1.25){
     u[i]=1
}
   else{
      u[i]=0
}  
}
for(double i=xmin;i<xmax;i+dx){
  for (double j=0.0;j<T;j+dt){

  u[i]= -(c*(u[i+1]-u[i])/dx)*dt+u[i]
}

for(int i=0;i<N;)
} 
return 0
}
