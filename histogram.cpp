#include<iostream>
#include<vector>
using namespace std;
int main(){
    char selection;
    vector<int>list{};

    do{
        cout<<"\nP=Print the numbers";
        cout<<"\nA=Add the numbers";
        cout<<"\nM=Display the mean of the numbers";
        cout<<"\nS=Display the smallest number";
        cout<<"\nL=Display the largest number";
        cout<<"\nQ=Quit";
        cout<<"\nEnter your selection:";
        cin>>selection;

        if(selection=='P'||selection=='p'){
            if(list.size()==0){
                cout<<"\nThe list is empty"<<endl;
            }else{
                for(auto num:list){
                    cout<<"[";
                    cout<<num;
                    cout<<"]";
                }
            }
        }else if(selection=='a'||selection=='a'){

            int inputnumber;
            cout<<"\nEnter the number you want to add to the list:";
            cin>>inputnumber;
            list.push_back(inputnumber);
            cout<<"The entered number is added to the list"<<endl;

        }else if(selection=='M'||selection=='m'){
            int total;
            for(auto num:list){
                total+=num;
            }
            cout<<"\nThe mean of the numbers in the list is:"<<total/list.size()<<endl;

        }else if(selection=='S'||selection=='s'){
            int min;
            min=list.at(0);
            for(auto num:list){
                if(num<min){
                    min=num;
                }
            }
            cout<<"\nThe smallest number in the list is:"<<min<<endl;

        }else if(selection=='L'||selection=='l'){
            int max;
            max=list.at(0);
            for(auto num:list){
                if(num>max){
                    max=num;
                }
            }
            cout<<"\nThe largest number in the list is:"<<max<<endl;

        }else if(selection=='Q'||selection=='q'){
            cout<<"\n\n\nThank you\n\n\n";
        }else{
            cout<<"\n\nInvalid Selection";
        }

    }while(selection!='Q'&&selection!='q');
    
    
    return 0;
}
