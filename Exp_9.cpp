# include <iostream>
using namespace std;
void increment(int *a)
 {
    (*a)++;
 }

int main()
{
    int a = 10;
    int*aptr;
    aptr=&a;
    cout<<a<<endl;
    cout<<*aptr<<endl;
    cout<<&a<<endl;
    aptr++;
    cout<<aptr<<endl;


    float b = 10;
    float *bptr;
    bptr=&b;
    cout<<b<<endl;
    cout<<*bptr<<endl;
    cout<<&b<<endl;
    bptr++;
    cout<<bptr<<endl;

   
    char c = 10;
    char *chptr;
    chptr=&c;
    cout<<c<<endl;
    cout<<(void*)chptr<<endl;
    chptr++;
    cout<<(void*)chptr<<endl;
   
   int**aptr2 = &aptr;
   ++aptr;
   cout<<"value of increamented aptr:"<<aptr<<endl;
   cout<<"value in double pointer aptr2:"<<aptr2<<endl;
   

   int arr[]={10,20,30};
   cout<<*arr<<endl;
   
   int i;
 int *ptr = &arr[i];
 for(i=0;i<4;i++)
 {
        cout<<*ptr<<" ";
        cout<<&arr[i]<<endl;
        ptr++;
 }
 int arr1[]={10,20,30,40};
 int j;
 for(j=0;j<4;j++)
 {
        cout<<arr[j]<<endl;
 }

}
