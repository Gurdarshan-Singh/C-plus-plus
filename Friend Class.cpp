#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
    int sum(complex,complex);
    int sumc(complex,complex);

 };
 class complex{
    int a;
    int b;
    //friend int calculator:: sum(complex v1,complex v2); //we can also use this
    //friend int calculator:: sumc(complex v1,complex v2); //we can also use this
    friend class calculator;
    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    
    void print(){
        cout<<"\nComplex Number is "<<a<<"+i"<<b;
    }

};
int calculator::sum(complex v1,complex v2){
    return (v1.a+v2.a);
}
int calculator::sumc(complex v1,complex v2){
    return (v1.b+v2.b);
}
int main(){
    complex v1,v2;
    v1.setdata(1,2);
    v1.print();
    v2.setdata(3,4);
    v2.print();
    calculator cal;
    int res=cal.sum(v1,v2);
    cout<<"\nThe sum of real part is "<<res;
    int resc=cal.sumc(v1,v2);
    cout<<"\nThe sum of imaginary part is "<<resc;
return 0;
}


----------------OR--------------------------
#include<iostream>
using namespace std;
 class complex{
    int a;
    int b;
    //friend int calculator:: sum(complex v1,complex v2); //we can also use this
    //friend int calculator:: sumc(complex v1,complex v2); //we can also use this
    friend class calculator;
    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    
    void print(){
        cout<<"\nComplex Number is "<<a<<"+i"<<b;
    }

};
class calculator{
    public:
    int sum(complex,complex);
    int sumc(complex,complex);

 };

int calculator::sum(complex v1,complex v2){
    return (v1.a+v2.a);
}
int calculator::sumc(complex v1,complex v2){
    return (v1.b+v2.b);
}
int main(){
    complex v1,v2;
    v1.setdata(1,2);
    v1.print();
    v2.setdata(3,4);
    v2.print();
    calculator cal;
    int res=cal.sum(v1,v2);
    cout<<"\nThe sum of real part is "<<res;
    int resc=cal.sumc(v1,v2);
    cout<<"\nThe sum of imaginary part is "<<resc;
return 0;
}

