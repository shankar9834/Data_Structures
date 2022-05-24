#include<bits/stdc++.h>
class val
{public:
    int data;
     val *right;
     val(int dat)
     {
    data=dat;
     }

};
int main()
{
  val *ans;
ans=new val(1);

 
  std::cout<<ans->data<<std::endl;
  
  

     
}