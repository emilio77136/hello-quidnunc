#include <iostream>
#include <string>
using namespace std;

struct User {

	string username;
	string password;
	User* next;
	User(string u, string p):
	username(u),
	password(p),
	next(nullptr)
	{}
};

bool insertUser(User*& head, const string& username, const string& password);
User* findUser(User* head, const string& username);
bool  authenticate(User* head, const string& username, const string& password);
bool removeFront(User*& head);
bool removeByUserna,e(User*& head, const string& username);
void clearlist(User*& head);
size_t size(User* head);
void printUsers(User* head);


int main(){


	User u1{"Jack", "abc123"};
	User u2{"Jill", "abc124"};
	User u3{"Bob", "abc125"};
	User u4{"Bill", "abc126"};

	User* head = &u1;

	u1.next = &u2;
	u2.next = &u3;
	u3.next = &u4;
	
	bool newUser = insertUser(head, "Jackie", "as123");
	
		if(newUser){
			cout << "user entered \n";	
		}else{
			cout << "try new username \n";
		}

return 0;
}




bool insertUser(User*&head, const string& username, const string& password){

	User* newUser = new User(username, password);
	User* current = head;

		while(current != nullptr){
			if(current->username == username){
				return false;
			}
			if(current->next == nullptr){
				current-> next = new User(username, password);
				return true;
			}
		current = current->next;
		}	

return false;	
};

User* findUser(User* head, const string& username){

return nullptr;
}


bool authenticate(User* head, const string& username, const string& password){

return false;
}


bool removeFront(User*& head){

return false;
}


bool removeByUsername(User*& head, const string& username){

return false;
}


void clearList(User*& head){

}


size_t size(User* head){

return 0;
}


void printUsers(User* head){

}
