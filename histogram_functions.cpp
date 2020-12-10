#include<iostream>
#include<vector>
using namespace std;
void display_menu();
char get_selection();
void display(const vector<int> &list);
void add(vector<int> &list);
void mean(const vector<int> &list);
void smallest(const vector<int> &list);
void largest(const vector<int> &list);
void quit();
void unknown();


int main(){
    vector<int>list;
    char selection;

    do{
        display_menu();
        selection=get_selection();
        switch(selection){
            case 'P':
            display(list);

            break;

            case 'A':
            add(list);

            break;

            case 'M':
            mean(list);
            
            break;

            case 'S':
            smallest(list);

            break;

            case 'L':
            largest(list);

            break;

            case 'Q':
            quit();

            break;

            default:
            unknown();
        }

    }while(selection!='Q');
return 0;
}
//function
void display_menu(){
    cout<<"\nP=Print the number";
    cout<<"\nA=Add the number";
    cout<<"\nM=Display the mean of the number";
    cout<<"\nS=Display the smallest number in the list";
    cout<<"\nL=Display the largest number in the list";
    cout<<"\nQ=Quit";
    cout<<"\nEnter your choice";
}

char get_selection(){
    char selection;
    cin>>selection;
    return toupper(selection);
}

void display(const vector<int> &list){
    if(list.size()==0){
        cout<<"\nThe list is empty"<<endl;
    }else{
        for(auto num:list){
            cout<<"[";
            cout<<num;
            cout<<"]"<<endl;
        }
    }
}


void add(vector<int> &list){
    int user_input;
    cout<<"\nEnter the number you want to add to the list";
    cin>>user_input;
    list.push_back(user_input);
    cout<<"\nThe number was added to the list"<<endl;
}

void mean(const vector<int> &list){
    int total;
    for(auto num:list){
        total+=num;

    }
    cout<<"\nThe mean of the list is"<<total/list.size();
}

void smallest(const vector<int> &list){
    int small_num=list.at(0);
    for(auto num:list){
        if(num<small_num){
            small_num=num;
        }
    }
    cout<<"\nThe smallest number in the list is:"<<small_num<<endl;
}

void largest(const vector<int> &list){
    int large_num=list.at(0);
    for(auto num:list){
        if(num>large_num){
            large_num=num;
        }
    }
    cout<<"\nThe largest number in the list is:"<<large_num<<endl;
}

void quit(){
    cout<<"\n\nThankyou\n\n";
}

void unknown(){
    cout<<"\nSorry, Invalid selection";
}



