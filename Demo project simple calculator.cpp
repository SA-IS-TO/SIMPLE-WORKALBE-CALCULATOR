#include<iostream>

using namespace std;

int main()
{
    int A,B;
    char op;

    cout<< "Select operator"<<endl<< "(+)(-)(*) (/) "<<endl;
    cin >> op;

    cout << "Enter Number : "<<endl;
    cin>> A>>B;

    switch(op){

    case '+':
     cout<< A<< "+"<<B<<"="<<A+B;
     break;

    case '-':
        cout<< A<< "-"<<B<<"="<<A-B;
        break;

    case '*':
        cout<< A<< "*"<<B<<"="<<A*B;
        break;
    case '/':
        if(B==0){
            cout<< "MATH ERROR !!!"<<endl<<"CAUSE NO NUMBER CAN DIVIDED BY 0"<<endl;

        }else{
        cout<< A<< "/"<<B<<"="<<A/B;

        }
        break;

    default :
        cout<< "ERROR ! UNKHOWN OPARATOR"<<endl;
        break;




    }






    return 0;

}
