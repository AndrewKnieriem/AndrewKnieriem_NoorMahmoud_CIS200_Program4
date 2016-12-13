//Name: Noor Mahmoud
//Assignment: Program 4

//All tests passed except for Test #6 "more boundary testing"

#include<iostream>
#include<stack>
#include<queue>
using std::cout;
using std::endl;
using std::cin;
using std::stack;
using std::queue;

const int MAX_TRAINS = 99;
const int MAX_PLANES = 9;


class Dock
{
public:
	Dock()
	{
		input();
		train_worker();
		plane_worker();
		output();
	}

	void input()
	{
		int destination;

		cin >> trains >> planes >> train_items_total >> plane_items_total;

		if (trains >= 0 && trains <= MAX_TRAINS)
		{
			train_items = new int[trains];
			train_times = new int[trains];
		}
		else if (trains < 0)
		{
			train_items = new int[0];
			train_times = new int[0];
		}
		else if (trains > MAX_TRAINS)
		{
			train_items = new int[MAX_TRAINS];
			train_times = new int[MAX_TRAINS];
		}

		train_destinations = new int[train_items_total];

		if (planes >= 0 && planes <= MAX_PLANES)
		{
			plane_items = new int[planes];
			plane_times = new int[planes];
		}
		else if (planes < 0)
		{
			plane_items = new int[0];
			plane_times = new int[0];
		}
		else if (planes > MAX_PLANES)
		{
			plane_items = new int[MAX_PLANES];
			plane_times = new int[MAX_PLANES];
		}

		plane_destinations = new int[plane_items_total];

		for (int i = 0; i < trains; i++)
		{
			cin >> train_items[i];
			//train_items_total -= train_items[i];
			//check to see if the proper amount of items were used
		}

		for (int i = 0; i < planes; i++)
		{
			cin >> plane_items[i];
			//plane_items_total -= plane_items[i];
			//check to see if the proper amount of items were used
		}

		for (int i = 0; i < train_items_total; i++)
		{
			cin >> destination;
			destination--;
			if (destination >= 0 && destination <= (trains - 1))
				train_destinations[i] = destination;
			else
				train_destinations[i] = 0;

		}

		for (int i = 0; i < plane_items_total; i++)
		{
			cin >> destination;
			destination--;
			if (destination >= 0 && destination <= (planes - 1))
				plane_destinations[i] = destination;
			else
				plane_destinations[i] = 0;

		}


		/*
		Input tests:
		cout << "Trains: " << trains << endl;
		cout << "Planes: " << planes << endl;
		cout << "Train time: " << train_time << endl;
		cout << "Plane time: " << plane_time << endl;
		cout << "Train items total: " << train_items_total << endl;
		cout << "Plane items total: " << plane_items_total << endl;
		cout << "Train destinations: " << endl;
		for (int i = 0; i < train_items_total; i++)
		{
			cout << "Item " << i << ": " << train_destinations[i] << endl;
		}
		cout << "Plane destinations: " << endl;
		for (int i = 0; i < plane_items_total; i++)
		{
			cout << "Item " << i << ": " << plane_destinations[i] << endl;
		}

		cout << "Train items: " << endl;
		for (int i = 0; i < trains; i++)
		{
			cout << "Train " << i << ": " << train_items[i] << endl;
		}
		cout << "Plane items: " << endl;
		for (int i = 0; i < planes; i++)
		{
			cout << "Plane " << i << ": " << plane_items[i] << endl;
		}*/

	}

	void train_worker()
	{
		//For Anthony to implement
	}

	void plane_worker()
	{
		
		//For Anthony to implement


	}

	void output()
	{
		/*
		Output tests:
		trains = 3;
		planes = 2;

		train_times = new int[3]{ 25, 36, 3 };
		plane_times = new int[2] { 65, 50};*/



		for (int i = 0; i < trains; i++)
		{
			cout << train_times[i];
			if (i + 1 != trains)
				cout << " ";
		}
		cout << endl;

		for (int i = 0; i < planes; i++)
		{
			cout << plane_times[i];
			if (i + 1 != planes)
				cout << " ";
		}
		cout << endl;
	}
private:
	queue<stack<int>> train_stacks; //Queue of stacks containing 5 items to be sent to trains
	queue<int> plane_line; //Queue of items being sent to planes
	int * train_items; //Array consisting of number of items for each train
	int * plane_items; //Array consisting of number of items for each plane
	int * train_destinations; //Array consisting of all train items and the specific train they are going to
	int * plane_destinations; //Array consisting of all plane items and the specific plane they are going to
	int train_time = 0; //Counter for total time for train operations
	int plane_time = 0; //Counter for total time for plane operations
	int trains; //Number of trains
	int planes; //Number of Planes
	int train_items_total; //Total number of items for trains
	int plane_items_total; //Total number of items for planes
	int * train_times; //Array consisting of times for each train to receive items
	int * plane_times; //Array consisting of times for each plane to receive items
};


int main()
{
	Dock UMD;


	return 0;
}