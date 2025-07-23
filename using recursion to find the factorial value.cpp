#include <iostream>
using namespace std;
int nProduct(int p){
  if (p == 0)
    return 1;
  int product = p * nProduct(p-1);
  return product;

}
int main( ){
int n;
cout<<"Enter the value of n: "; 
  cin>>n;
  cout<<"the factorial of "<< n <<" is : ";
  cout<<nProduct(n);
  return 0;
}
