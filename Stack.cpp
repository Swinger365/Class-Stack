#include <iostream>
#include "Class stack.h"
using namespace std;
using namespace Dynamic;
int main(){
    setlocale(LC_ALL,"Russian");
    int choice;
    double tmp;
    Stack<double> st;
    while(true){
        st.show();
        cout<<"Введите действие:"<<endl;
        cout<<"1)push()\n";
        cout<<"2)pop()\n";
        cout<<"3)top()\n";
        cout<<"4)isEmpty()\n";
        cout<<"X)Выход\n";
        cout<<">>";cin>>choice;
        switch(choice){
            case 1:
                cout<<">>";cin>>tmp;
                st.push(tmp);
                break;
            case 2:
                cout<<"----------------------------------------------------------------\n";
                cout<<"Был удален: "<<st.pop()<<endl;
                break;
            case 3:
                cout<<"----------------------------------------------------------------\n";
                cout<<"Top: "<<st.top()<<endl;
                break;
            case 4:
                cout<<"----------------------------------------------------------------\n";
                cout<<"IsEmpty: "<<st.isempty()<<endl;
                break;
            default:
                cout<<"----------------------------------------------------------------\n";
                cout<<"[!]Выход[!]"<<endl;
                cout<<"----------------------------------------------------------------\n";
                return 0;
                break;
        }
    }//while true
    return 0;
}
