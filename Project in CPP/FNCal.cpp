#include<iostream>
#include<fstream>
#include<cstdlib>
#include<conio.h>

using namespace std;
//BMI(Body Mass Index)= weight (kg) / [height*height (m)]
//Underweight < 18.5
//normal weight 18.5 to 24.9
//Over weight > 25
class BMI
{
public:
    char name[20];
    char gender[6];
    int uid,age;
    float bmi,height,weight;
public:

    void getdata()
    {   system("cls");
        cout<<"Enter your name"<<endl;
        cin>>name;
        cout<<"Enter your User ID only 3 digit Number"<<endl;
        cin>>uid;
        cout<<"Enter age"<<endl;
        cin>>age;
        cout<<"your gender"<<endl;
        cin>>gender;
    }
    float cal_bmi()
    {
        cout<<"Enter your WEIGHT In (KG)"<<endl;
        cin>>weight;
        cout<<"Enter your HEIGHT In (meter)"<<endl;
        cin>>height;
        bmi=weight/(height*height);

        if(bmi<18.5)
        {
            cout<<"Your body mass index is Underweight that is: "<<bmi<<endl;
        }
        else if(bmi>24.9)
        {
            cout<<"your body mass index is Overweight that is : "<<bmi<<endl;
        }
        else
            cout<<"your body mass index is Normal that is : "<<bmi<<endl;

          return bmi;
    }
    void showdata()
    {
        cout<<"NAME:"<<name<<endl;
        cout<<"USER ID:"<<uid<<endl;
        cout<<"AGE:"<<age<<endl;
        cout<<"GENDER:"<<gender<<endl;
    }
    void write()
    {
        ofstream fout;
        cout<<endl;
        fout.open("\D:fnc.txt",ios::app);
        fout<<"Name="<<name<<","<<endl;
        fout<<"User ID="<<uid<<","<<endl;
        fout<<"AGE="<<age<<","<<endl;
        fout<<"GENDER="<<gender<<","<<endl;
        fout<<"BMI="<<bmi<<","<<endl;
        fout<<"***************************"<<endl;
        fout<<"***************************"<<endl;
        fout.close();
    }
   void read()
    {
            fstream in;
            string str;
    in.open("D:/fnc.txt",ios::in);
    in.seekg(0,ios::beg);
    if(!in){
        cout<<"file not found";
    }
    while(getline(in,str,','))
    {

     //getline(in,str,',');
    cout<<str<<endl;

    }
in.close();



    }
    void D()
    {

        cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
        cout<<"Any one who is a patent of any chronic Disorder are recommanded to consult there Doctors"<<endl;
        cout<<"Do not to use this software as,it can complicate your health condition"<<endl;
        cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;

    }


};
//*...................................NOW Start working with derived class********************
class fobmitype : public BMI
{ public:
    void vegow()
    {   cout<<"************************************"<<endl;
        cout<<"************************************"<<endl;
        cout<<"Your BMI is suggesting you that you are over weight"<<endl;
        cout<<"As you are vegetarian so we will suggest you veg diet Plan"<<endl;
        cout<<"*******Diet Plan For Weight Loss*******"<<endl;
        cout<<"*******1> Carbohydrates*********"<<endl;
        cout<<"Ragi"<<endl;
        cout<<"Oats"<<endl;
        cout<<"Bajra"<<endl;
        cout<<"Brown Rice"<<endl;
        cout<<"Sweet Potatoes"<<endl;
        cout<<"Barley"<<endl;
        cout<<"*******2> Proteins*********"<<endl;
        cout<<"Whole dals"<<endl;
          cout<<"Chana"<<endl;
            cout<<"Paneer"<<endl;
              cout<<"Milk"<<endl;
                cout<<"Green Leafy Vegetables"<<endl;
                  cout<<"Sprouts"<<endl;
                cout<<"*******3> Fats Source*********"<<endl;
                cout<<"Walnuts"<<endl;
              cout<<"Chia Seeds"<<endl;
            cout<<"Flax Seeds"<<endl;
           cout<<"Plant Oils Like Canola And Soybean oils"<<endl;
    }
    void vegnor()
    {
        cout<<"************************************"<<endl;
        cout<<"************************************"<<endl;

        cout<<"AS Your BMI is Normal, so you do not need any diet plan, just be happy always"<<endl;
    }
    void veguw()
    {
        cout<<"************************************"<<endl;
        cout<<"************************************"<<endl;
        cout<<"Your BMI is suggesting that you are Under weight"<<endl;
        cout<<"As you are vegetarian so we will suggest you veg diet Plan"<<endl;
         cout<<"*******Diet Plan For Weight Gain*******"<<endl;
        cout<<"  Three Ways to Get More Calories in Your Diet"<<endl;
        cout<<"********************************************************************"<<endl;
        cout<<"$$Boost your meals with high calorie add-ins"<<endl;
        cout<<"You can add high calorie foods to the meals you are already eating."<<endl;
        cout<<"For example, adding olive oil to your vegetables or soups."<<endl;
        cout<<"$$Swap out lower calorie foods"<<endl;
        cout<<"You can replace lower calorie foods with higher calorie options."<<endl;
        cout<<"For example, replace plain almond milk with vanilla soy milk which is typically higher in calories"<<endl;
        cout<<"$$Add a high calorie snack between meals"<<endl;
        cout<<"And finally, you can add high calorie foods in between meals as snacks."<<endl;
        cout<<"For example, eating a handful of nuts or trail mix."<<endl;



    }
    //************************************************************************************************************************************
    //**********************************************non Veg function below****************************************************************
    //************************************************************************************************************************************
    void nvow()
    {
        cout<<"************************************"<<endl;
        cout<<"************************************"<<endl;
        cout<<"Your BMI is suggesting you that you are over weight"<<endl;
         cout<<"*******Diet Plan For Weight Loss*******"<<endl;
        cout<<"*******1> Carbohydrates*********"<<endl;
        cout<<"Ragi"<<endl;
        cout<<"Oats"<<endl;
        cout<<"Bajra"<<endl;
        cout<<"Brown Rice"<<endl;
        cout<<"Sweet Potatoes"<<endl;
        cout<<"Barley"<<endl;
        cout<<"*******2> Proteins*********"<<endl;
        cout<<"Whole dals"<<endl;
          cout<<"Chana"<<endl;
            cout<<"Paneer"<<endl;
              cout<<"Milk"<<endl;
                cout<<"Green Leafy Vegetables"<<endl;
                  cout<<"Sprouts"<<endl;
                cout<<"*******3> Fats Source*********"<<endl;
                cout<<"Walnuts"<<endl;
              cout<<"Chia Seeds"<<endl;
            cout<<"Flax Seeds"<<endl;
           cout<<"Plant Oils Like Canola And Soybean oils"<<endl;

    }
    void nvnor()
    {
        cout<<"************************************"<<endl;
        cout<<"************************************"<<endl;
        cout<<"AS Your BMI is Normal, so you do not need any diet plan, just be happy always"<<endl;
    }
    void nvuw()
    {
        cout<<"************************************"<<endl;
        cout<<"************************************"<<endl;
        cout<<"Your BMI is suggesting that you are Under weight"<<endl;
          cout<<"*******Diet Plan For Weight Gain*******"<<endl;
        cout<<"  Three Ways to Get More Calories in Your Diet"<<endl;
        cout<<"********************************************************************"<<endl;
        cout<<"$$Boost your meals with high calorie add-ins"<<endl;
        cout<<"Fish,Read meat, Egg etc"<<endl;
        cout<<"You can add high calorie foods to the meals you are already eating."<<endl;
        cout<<"For example, adding olive oil to your vegetables or soups."<<endl;
        cout<<"$$Swap out lower calorie foods"<<endl;
        cout<<"You can replace lower calorie foods with higher calorie options."<<endl;
        cout<<"For example, replace plain almond milk with vanilla soy milk which is typically higher in calories"<<endl;
        cout<<"$$Add a high calorie snack between meals"<<endl;
        cout<<"And finally, you can add high calorie foods in between meals as snacks."<<endl;
        cout<<"For example, eating a handful of nuts or trail mix."<<endl;


    }

};
class control : public fobmitype
{
public:
    void menu()
    {   menustart:
        int choice;
        int choi;
        char x;
        system("cls");
        cout<<"\t\t\t****************************"<<endl;
        cout<<"\t\t\t| FOOD NUTRITION CALCULATOR|"<<endl;
        cout<<"\t\t\t****************************"<<endl;
        cout<<"\t\t\t 1. Enter new User Data"<<endl;
        cout<<"\t\t\t 2. If you have chronic disease"<<endl;
        cout<<"\t\t\t 3. View old record"<<endl;
        cout<<"\t\t\t 4. Exit"<<endl;


        cout<<"\t\t\t***********************"<<endl;
        cout<<"\t\t\tSelect Option:[1/2/3/4]"<<endl;
        cout<<"\t\t\t***********************"<<endl;
        cout<<"Enter your Selection Number"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            getdata();
            cout<<"Your data below....................."<<endl;
            showdata();
            cout<<"***********************************"<<endl;
            cout<<"***********************************"<<endl;
            cout<<"NOW Provide more Information, so that we can know your BMI"<<endl;
            cal_bmi();
            write();
            cout<<"----------------------"<<endl;
            cout<<"select 1 for vegitarian and overweight "<<endl;
            cout<<"select 2 for vegitarian and normal bmi "<<endl;
            cout<<"select 3 for vegitarian and underweight "<<endl;
            cout<<"select 4 for non vegitarian and overweight "<<endl;
            cout<<"select 5 and non vegitarian and normal bmi "<<endl;
            cout<<"select 6 for non vegitarian and underweight "<<endl;
            cout<<"select 7 for exit "<<endl;
            cout<<"enter your choice ";
            cin>>choi;
            switch(choi){
            case 1:
                cout<<"if you are vegitarian and overweight"<<endl;
                vegow();
                break;
            case 2:
                vegnor();
                break;
            case 3:
                veguw();
                break;
            case 4:
                nvow();
                break;
            case 5:
                nvnor();
                break;
            case 6:
                nvuw();
                break;
            case 7:
                exit(1);
            }
            break;
        case 2:
            D();
            break;
        case 3:
            read();
            break;

        case 4:
            exit (1);

            default:
            cout<<"\n\t\t\t Invalid Selection.........Try Again";
            break;
            }
            getch();
            goto menustart;


    }

};
int main()
{


    control pro;
    pro.menu();
    return 0;

}
