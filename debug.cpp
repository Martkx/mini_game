#include <iostream>
using namespace std;
enum Lane
{
	RIGHT_LANE,
	CENTRAL_LINE,
	LEFT_LANE,
};
struct vehicle
{
	int id;
	float velocits;
	Lane lane;

};
void print_vehicle(vehicle &vehicle)
{	
	cout << "Vehicle ID= " << vehicle.id << endl;
	cout << "Vehicle velocity= " << vehicle.velocits << endl;
	switch (vehicle.lane)
	{
		case Lane::CENTRAL_LINE:
		{
			cout << "Vehicle lane= Central Lane" << endl;
			break;
		}
		case Lane::LEFT_LANE:
		{
			cout << "Verhicle lane = Left lane"<< endl;
			break;
		}
		case Lane::RIGHT_LANE:
		{
			cout << "Vehicle lane = Right lane" << endl;
			break;
		}
		default:
		{
			break;
		}
	}
	
}

int main ()
{	
	
	vehicle v1 = {.id = 34,.velocits= 45.6f,.lane= Lane::RIGHT_LANE};
	print_vehicle(v1);
	
	return 0;

}
