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
bool removeByUsername(User*& head, const string& username);
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
			cout << "User entered \n";	
		}else{
			cout << "Try new username \n";
		}
	

	bool foundUser = findUser(head, "Jack");

		if(foundUser){
			cout << "Found User \n";
		}else{
			cout << "User not found \n";
		} 

	bool authen = authenticate(head, "Jack", "abc123");

		if(authen){
			cout << "Valid User \n";
		}else{
			cout << "Invalid User \n";
		}
	

	bool remByUser = removeByUsername(head, "Jack);

		if(remByUser){
			cout << "Username Removed \n";
		}else{
			cout << "Username Not Removed \n";
		}

	bool remFront = removeFront(head);
	
		if(remFront)[
			cout << "Removed Front \n"
		}else{
			cout << "Remove Front Unsuccessful \n"
		}


	cout <<  "List Size: " << size(head) << endl;
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
	
	User* current = head;
		
	while(current != nullptr){
		if(current->username == username){
		return current;
		}
	current = current->next;
	}

return nullptr;
}


bool authenticate(User* head, const string& username, const string& password){
	
	User* current = head;

	while(current != nullptr){
		if(current->username == username){
			if(current->password == password){
				return true;
			}
		}
	current = current->next;
	}
return false;
}


bool removeFront(User*& head){

	User* current = head;
	head = head->next;
	delete current;
	return true;


}


bool removeByUsername(User*& head, const string& username){
	
	if(head-> username == username){
		User* temp = head;
		head = head->next;
		delete temp;
		return true;
	}

	
	User* current = head;
	while(current->next != nullptr){
		if(current->next->username == username){
			User* temp = current->next;
			current->next = current->next->next;
			delete temp;
			return true;
		}
	current = current->next;
	}

return false;
}


void clearList(User*& head){
	
	User* current = head;

	while(current != nullptr){
		User* temp = current;
		current = current->next;
		delete temp;
	}
	
	cout << "list cleared \n"
}


size_t size(User* head){

	size_t count = 0;

	User* current = head;

	while(current != nullptr){
		count++;
		current = current->next;
	
	}	
	
return count;
}


void printUsers(User* head){
	
	User* current = head;

	while(current != nullptr){
		cout << current->username << endl;
		current = current->next;
	}
}
