#include <iostream>
#include <vector>

using namespace std;

class AActor
{
public:
	virtual void Do()
	{
		cout << "Parent";
	}

};

class ACharacter : public AActor
{
public:
	virtual void Do() override
	{
		cout << "Child1";
	}
};

class GameModeBase : public AActor
{
public:
	virtual void Do() override
	{
		cout << "Child2";
	}
};

class IInterface
{
public:
	virtual void Interface() = 0;
};

class RemoteControl : public IInterface
{
public:
	void Interface() override
	{

	}
};

class IItem
{
public:
	virtual void Use() = 0;
};

class Knife : public IItem
{
public:

	// Inherited via IItem
	void Use() override
	{
		cout << "Stabbed" << endl;
	}
};

class Gun : public IItem
{
	// Inherited via IItem
	void Use() override
	{
		cout << "Shooted" << endl;
	}
};

class Inventory
{
public:
	void Pickup(IItem* PickedupItem)
	{
		Data.push_back(PickedupItem);
	}

	IItem* operator[](int Index)
	{
		return Data[Index];
	}
private:
	vector<IItem*> Data;
};



int main()
{
	//Parent ConsoleOut;
	//Child1* ConsoleOut = new Child1();
	//cout << sizeof(ConsoleOut) << endl;
	//Parent* ConsoleOut = new Child2();
	//Parent* ConsoleOut = new Child1();
	//Parent* ConsoleOut = new Parent(); // virtual이 없다면 자식을 못찾는다.
	//ConsoleOut->Do();
	//delete new Parent();

	//vector<AActor*> AActors;
	//AActors.push_back(new ACharacter);
	//AActors.push_back(new ACharacter);
	//AActors.push_back(new GameModeBase);
	//AActors.push_back(new AActor);
	//for (int i = 0; i < AActors.size(); i++)
	//{
	//	//AActors[i]->Do();
	//	GameModeBase* GM = dynamic_cast<GameModeBase*>(AActors[i]);
	//	if (GM)
	//	{
	//		GM->Do();
	//	}
	//}

	Inventory I;
	I.Pickup(new Knife());
	I.Pickup(new Gun());
	I[0]->Use();
	I[1]->Use();

	return 0;
}