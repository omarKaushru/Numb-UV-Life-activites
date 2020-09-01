#include<conio.h>
#include<iostream>
using namespace std;
template <class data_t> class list{
         data_t data;
         list *next;
public:
       list(data_t d);
       void addd(list *node){
            node->next=this;
            next=0;
            }
       list *getnext(){
            return next;
            }
       data_t getdata(){
              return data;
              }
         };
template <class data_t> list<data_t>::list(data_t d){
         data=d;
         next=0;
         }
main(){
       list<char> start('a');
       list<char> *p, *list;
       int i;
       list=&start;
       for(i=1; i<26; i++){
                p = new list<char>('a'+i);
                p->add(last);
                last=p;
                }
       p=&start;
       while(p){
                cout<<p->getdata();
                p=p->getnext();
                }
       getch();
       }
