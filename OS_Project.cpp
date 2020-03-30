#include<bits/stdc++.h>

using namespace std;

void details();
void check(int , int , int);

int calIngredients(int process,int need)
{
	int req_Ingredients = 0;
	req_Ingredients = process * (need - 1) + 1;
	return req_Ingredients;
}

int noOfChef, neededIngredient,ingredientLimit,LimitOfChef,reqIngredients;

void details()
{
	cout<<"Enter the number of chefs working in the kitchen: "<<endl;
	cin>>noOfChef;
	cout<<"\n";
	cout<<"Enter the number of ingredients needed int he kitchen:"<<endl;
	cin>>neededIngredient;
	cout<<"\n";
	check(noOfChef,neededIngredient,reqIngredients);
}

void check(int a,int b,int c)
{
	if(a <= 0 || b <= 0)
	{
		cout<<"Invalid input, Please enter valid input."<<endl;
		details();
	}
	
	if(b > ingredientLimit)
	{
		cout<<"Overflow, The kitchen cannot have this much ingredients,\n";
		details();
	}
	
	if(a > LimitOfChef)
	{
		cout<<"Overflow, The kitchen cannot have this much of chefs.\n";
		details();
	}
}



int main()
{
	cout<<"Enter the maximum number of chef :"<<endl;
	cin>>LimitOfChef;
	cout<<"\n";
	
	cout<<"Enter the maximum number of ingredients :"<<endl;
	cin>>ingredientLimit;
	cout<<"\n";
	
	details();
	
	reqIngredients = calIngredients(noOfChef,neededIngredient);
	cout<<"Number of ingredients required to get deadlock free execution : "<<reqIngredients;
	return 0;
}
