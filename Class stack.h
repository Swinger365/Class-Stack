#ifndef INCLUDED
#define INCLUDED
#include <iostream>
namespace Dynamic{
template <class T>
class Stack{
    protected:
        T * st_bot;
        unsigned int st_size;
    public:
        //---------------------------Constructors------------------------------------------
        Stack(){st_bot = new T[0]; st_size = 0;}
        Stack(const T &value){st_bot = new T[1];st_bot[0] = value; st_size =1;}
        //---------------------------Getter-------------------------------------------------
        unsigned int getsize()const{return st_size;}
        //---------------------------Useful Methods---------------------------------------
        virtual void push(const T &value){
            T *new_arr = new T[st_size+1];
            for(int i = 0;i<st_size;++i)new_arr[i] = st_bot[i];
            delete[] st_bot;
            st_bot = new_arr;
            st_bot[st_size] = value;
            st_size++;
        }
        virtual T pop(){
            if(st_size !=0){
                T *new_arr = new T[st_size-1];
                for(int i = 0;i < st_size-1;++i)new_arr[i] = st_bot[i];
                T old_el = st_bot[st_size-1];
                delete[] st_bot;
                st_bot = new_arr;
                st_size--;
                return old_el;
            }
            return NULL;
        }
        bool isempty(){
            if(st_size == 0) return true;
            else                   return false;
        }
        T top()const{
            if(st_size == 0)   return NULL;
            else                     return st_bot[st_size-1];
        }
        virtual void show()const{
            if(st_size !=0){
                std::cout<<"----------------------------------------------------------------\n";
                std::cout<<"Stack: ";for(int i = st_size-1;i>=0;--i)std::cout<<st_bot[i]<<" ";std::cout<<std::endl;
                std::cout<<"Size: "<<st_size<<std::endl;
                std::cout<<"----------------------------------------------------------------\n";
            }else{
                std::cout<<"----------------------------------------------------------------\n";
                std::cout<<"[!]Stack is empty[!]\n";
                std::cout<<"----------------------------------------------------------------\n";
            }
        }
    };//class Stack
}
#endif // INCLUDED
