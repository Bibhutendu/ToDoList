#include<iostream>
#include<string>
using namespace std;

void interface(){
    
        cout<<" ___________________________________________"<<endl;
        cout<<"|  ___  __     __   __        ___  __  ___  |"<<endl;
        cout<<"|   |  |  | _ |  \\ |  |   |    |  |__   |   |"<<endl;
        cout<<"|   |  |__|   |__/ |__|   |__ _|_  __|  |   |"<<endl;
        cout<<"|___________________________________________|"<<endl;
        cout<<"------------------------"<<endl;
        cout<<"1 - Add new task"<<endl;
        cout<<"2 - View task"<<endl;
        cout<<"3 - Mark as complete"<<endl;
        cout<<"0 - Terminate ToDo list"<<endl;
        cout<<"------------------------"<<endl;
        
}
void viewtask(string tasks[], int counter){
    cout<<"------------------------"<<endl;
    for(int i=0; i<counter;i++)
    {
        cout<<i+1<<" - "<<tasks[i]<<endl;
    }
    cout<<"------------------------"<<endl;
}

int main()
{
    string tasks[10] = {""};
    int b;
    int opt,n;
    int option = -1;
    int counter = 0;
    while(option != 0){
        
        interface();
        cout<<"Total Task: "<<counter<<endl;
        cout<<"Enter a option: ";
        cin>>opt;

        switch(opt)
        {
            case 1:
                if(counter != 10)
                {  
                    system("cls");
                    cout<<"Enter your task: ";
                    cin.ignore();
                    getline(cin,tasks[counter]);
                    counter++;
                    system("cls");
                }
                else
                {
                    cout<<"you have pending task"<<endl;
                }
                break;
            
            case 2:
                system("cls");
                viewtask(tasks,counter);
                cout<<"Enter '5' to back to main menu: ";
                cin>>b;
                system("cls");
                break;            
            case 3:
                system("cls");
                viewtask(tasks,counter);
                 cout<<"selct the number to be mark as comleted: ";
                cin>>n;
                if(n>10 && n<0){
                    cout<<"invalid number"<<endl;
                    break;
                }
                else{
                    for(int i = n;i<counter;i++){
                        tasks[i] = tasks[i+1];
                    }
                    counter = counter -1;
                    system("cls");
                    break;                    
                }

            case 0:
            option = 0;
            cout<<"Todo list closed"<<endl;
            break;
        }

    }
 return 0;
}