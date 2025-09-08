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

return 0;
}




bool insertUser(User*&head, const string& username, const string& password){

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
