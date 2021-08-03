#include <iostream>
#include <string>
using namespace std;

 // Create Class Card Student 
class card{
  
  //Private Detailes
  private:
  string name{"none"};
  int id{0};
  int age{0};
  string depart{"mo"};
    
  //Public Detailes 
  public:
  
  // SET NAME 
  void setName(string n){
       name = n;
  }  
  // GET NAME 
  string getName(){
      return name;
  }  
  // SET ID 
  void setId(int newId){
      id = newId; 
  }  
  // GET ID 
  int getId(){
    return id;    
  } 
  // SET AGE 
  void setAge(int newAge){
      age = newAge; 
  }  
  // GET AGE 
  int getAge(){
    return age;    
  } 
  // SET DEPART 
  void setDepart(string newDepart){
      depart = newDepart; 
  }  
  // GET DEPART 
  string getDepart(){
    return depart;    
  } 
};
int  main(){
    
    string iname{"NotFound"};
    int IId{0};
    float IAge{0.00};
    string IDepart{"NotFound"};
    int stop{1};
    //Create Object name is one 
    card one;
    do{
        
    cout<<" ========== Card "<<stop<<" ========= "<<endl;
    cout<<"\n";   
    cout<<" Enter Your Name Is : ";
    cin>>iname;
    one.setName(iname);
    
    cout<<" Enter Your ID Is : ";
    cin>>IId;
    one.setId(IId);
    
    //one.setAGE;    
    cout<<" Enter Your Age Is : ";
    cin>>IAge;
    one.setAge(IAge);
    // SET DEPART     
    cout<<" Enter Your Depart Is : ";
    cin>>IDepart;
    one.setDepart(IDepart);
    cout<<endl;
    cout<<" ============= THIS CARD "<<one.getName()<<"  ========== \n";    
    cout<<" Your Name Is : "<< one.getName() <<endl;
    cout<<" Your ID Is : "<< one.getId() <<endl; 
    cout<<" Your Age Is : "<< one.getAge() <<endl;
    cout<<" Your Depart Is : "<< one.getDepart() <<endl; 
    
    //Counter Plus Plus
    stop++; 
    }while(stop <= 5);
}

