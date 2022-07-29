#include<iostream>
using namespace std;
class arrays{
private:
    int size=0;
    int nofi=0;
    int *p;
public:
    arrays(int a);
    int length();
    void addElement(int ele,int pos);
    int giveElement(int d);
    void showElement();
    void append(int c);
    void remove(int e);
    void pop();
    int find(int g);
    int rfind(int h);
    void swap(int k,int l);
    void sort();
    int bisearch(int m);
    int max();
    int min();
    int Sum();
    float avg();
    void reverse();
    void leftshift(); 
    void rightshift(); 
    void sortinsert(int w); 
    bool isSorted();
};
arrays::arrays(int a){
    size=a;
    p=new int[size];                                            //constructure
} 

int arrays::length(){
    return nofi;                                                //number_of_elements
}

void arrays::addElement(int ele,int pos){
    if(pos<size){
        p[pos]=ele;                                             //adding element at any index
        nofi++;
    }
    else{
        cout << "Out of index" << endl;
    }
}
void arrays::append(int c){
    addElement(c,nofi);                                         //appending element.
}
int arrays::giveElement(int d){
    if(d<size){
        return p[d];
    }
    else{
        cout << "Out of index.";                                //show element at a particular index.
    }
}
void arrays::showElement(){
    cout << "The elements are ";
    for(int i=0;i<nofi;i++){
        cout << giveElement(i) << " ";                          // show all the elements of the array.
    }
    cout << endl;
}
void arrays::remove(int e){
    int f=nofi;
    if(e<nofi){
        for(int i=e;i<f-1;i++){
            p[i]=p[i+1];
        }
        nofi--;
    }
}
void arrays::pop(){
    remove(nofi-1);
}
int arrays::find(int g){
    for(int i=0;i<nofi;i++){
        if(g==p[i]){
            if(i!=0){
                swap(i,i-1);
            }
            return i;
            break;
        }
    }
    return -1;
}
int arrays::rfind(int h){
    for(int i=nofi-1;i>=0;i--){
        if(h==p[i]){
            return i;
            break;
        }
        
    }
    return -1;
}
void arrays::swap(int k,int l){
    int m;
    m=p[l];
    p[l]=p[k];
    p[k]=m;
}
void arrays::sort(){
    for(int i=0;i<nofi;i++){
        if(p[i]<p[i+1]){
            
        }
    }
}
int arrays::bisearch(int m){
    int low=0;
    int high=nofi-1;
    while(high>=low){
        int mid=(low+high)/2;
        if(p[mid]==m){
            return mid;
            
        }
        else if(p[mid]>m){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int arrays::max(){
    int n=p[0];
    for(int i=1;i<nofi;i++){
        if(n<p[i]){
            n=p[i];
        }
    }
    return n;
}
int arrays::min(){
    int o=p[0];
    for(int i=1;i<nofi;i++){
        if(o>p[i]){
            o=p[i];
        }
    }
    return o;
}
int arrays::Sum(){
    int sum=0;
    for(int i=0;i<nofi;i++){
        sum=sum+p[i];
    }
    return sum;
}
float arrays::avg(){
    int r=Sum();
    return r/nofi;
}
void arrays::reverse(){
    int s,t;
    s=0;
    t=nofi-1;
    while(t>=s){
        swap(s,t);
        s++;
        t--;
    }
}
void arrays::leftshift(){
    int u=p[0];
    for(int i=0;i<nofi-1;i++){
        p[i]=p[i+1];
    }
    p[nofi-1]=u;
}
void arrays::rightshift(){
    int v=p[nofi-1];
    for(int i=nofi-1;i>0;i--){
        p[i]=p[i-1];
    }
    p[0]=v;

}

bool arrays::isSorted(){
    for(int i=0;i<nofi-1;i++){
        if(p[i]>p[i+1]){
            return false;
        }
    }
    return true;
}
void arrays::sortinsert(int w){
    if(isSorted()==1){
        int i=nofi-1;
        while(p[i]>w&&i>=0){
            p[i+1]=p[i];
            i--;
        }
        addElement(w,i+1);
    }
    else{
        cout << "The array is not sorted."<<endl;
    }
}
int main(){
    int size;
    srand(time(0));
    cin >> size;
    arrays arr(size);
    for(int i=0;i<size-1;i++){
        arr.append(rand()%20);
    }
    cout << arr.length()<<endl;
    arr.showElement();
    //arr.reverse();
    arr.showElement();
    //arr.leftshift();
    arr.showElement();
    //arr.rightshift();
    arr.showElement();
    arr.sortinsert(5);
    arr.showElement();
    cout << arr.isSorted();
    return 0;
}

