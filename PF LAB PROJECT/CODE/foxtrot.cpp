#include<iostream>
#include "myfirst.h"

using namespace std;

int main()
{
	
	int opt1;
	int opt2;
	int q;
	bool choice;
	int sum = 0;
	
	cout << " _____________________________________________ " << endl;
	 
	cout << "|___________WELCOME TO FOXTROT MART___________|" << endl << endl;
	
	cout << endl;
	cout << "There will be a 10% DISCOUNT On $150 OR more than $150 shopping" << endl << endl;

morebilling:	
	options();
	
	
	cout << "Enter the Option: ";
	cin >> opt1; 
	
	
	cout << endl << endl;


	
	
	
	if (opt1 == 1)
	{
		
		foodItems();
		cout << "Select option: ";
		cin >> opt2;
		cout << endl;
		if(opt2 == 1){
		
		cout << "Shwarma-----------$8." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=8*q;
		}
		else if(opt2== 2){
		
		cout << "French fries-----------$5." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum += 5*q;
		}
		else if(opt2== 3){
		
		cout <<"Zinger Burger-----$20." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=20*q;
		}
		else if(opt2== 4){
		
		cout << "Pizza-------------$30." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=30*q;
		}
		else if(opt2== 5){
		
		cout << "Pizza Fries-------$15." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=15*q;
		}
		else if(opt2== 6){
		
		cout << "Club Sandwich-----$10." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=10*q;
		}
		else {
			cout << "Invalid selesction" << endl;
		}
		cout << "Want to buy more? (1/0)" << endl;
		cin >> choice;
		cout << endl;
		if (choice == 1){
			goto morebilling;
		}
	}
	
	
	else if (opt1 == 2)
	{
		cleaningItems();
		cout << "Select option: ";
		cin >> opt2;
		cout << endl;
		if(opt2 == 1){
		
		cout << "Teeth brush-----------$8." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=8*q;
		}
		else if(opt2== 2){
		
		cout << "Bottle spray----------$5." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=5*q;
		}
		else if(opt2== 3){
		
		cout << "Dishwasher soap-------$20." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=20*q;
		}
		else if(opt2== 4){
		
		cout << "Sponge----------------$3." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=3*q;
		}
		else if(opt2== 5){
		cout << "Shoe polish-----------$15." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=15*q;
		}
		else if(opt2== 6){
		cout << "Shoe Brush-----------$10." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=10*q;
		}
		else {
			cout << "Invalid selesction" << endl;
		}
		cout << "Want to buy more? (1/0)" << endl;
		cin >> choice;
		cout << endl;
		if (choice == 1){
			goto morebilling;
		}
	}
	
	else if (opt1 == 3)
	{
		sportsItems();
		cout << "Select option: ";
		cin >> opt2;
		cout << endl;
		if(opt2 == 1){
		
		cout << "Tennis Racket-----------$8." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=8*q;
		}
		else if(opt2== 2){
		
		cout << "Football----------$30." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=30*q;
		}
		else if(opt2== 3){
		
		cout << "Cricket Bat-------$60." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=60*q;
		}
		else if(opt2== 4){
		
		cout << "Cricket Ball-------------$25." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=25*q;
		}
		else if(opt2== 5){
		
		cout << "Golf Ball----------------$15." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=15*q;
		}
		else if(opt2== 6){
		cout << "Hockey-----------$50." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=50*q;
		}
		else {
			cout << "Invalid selesction" << endl;
		}
		cout << "Want to buy more? (1/0)" << endl;
		cin >> choice;
		cout << endl;
		if (choice == 1){
			goto morebilling;
		}	
	}
	
	else if (opt1 == 4)
	{
		computerItems();
		cout << "Select option: ";
		cin >> opt2;
		cout << endl;
		if(opt2 == 1){
		
		cout << "Keyboard-----------$4." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=4*q;
		}
		else if(opt2== 2){
		
		cout << "Mouse----------$4." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=4*q;
		}
		else if(opt2== 3){
		
		cout << "Speakers-------$20." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=20*q;
		}
		else if(opt2== 4){
		
		cout << "LED-------------$50." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=50*q;
		}
		else if(opt2== 5){
		
		cout << "Handfree----------------$3." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=3*q;
		}
		else if(opt2== 6){
		cout << "MousePad-----------$2." << endl;
		cout << "Quantity: ";
		cin >> q;
		sum +=2*q;
		}
		else {
			cout << "Invalid selesction" << endl;
		}
		cout << "Want to buy more? (1/0)" << endl;
		cin >> choice;
		cout << endl;
		if (choice == 1){
			goto morebilling;
		}
	}
	
	else if(opt1 == 5){
		cout << "You are exited" << endl;
		
	}
	else{
		cout << "Invalid" << endl;
	}
	cout << "Your bill is $" << sum << endl;
	cout << "----------------" << endl;
	if (sum>=150){
		sum = sum- (10*sum/100);
		cout << "After discount, The bill is $" << sum << endl;
		cout << "----------------" << endl;
	}
	cout << endl << endl;
	cout << "----------------" << endl;
	cout <<"Thanks for coming!" << endl;
	cout << "----------------" << endl;
	 
	return 0;
}
