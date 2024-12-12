#include <iostream>

int main(){

    // Braced Initialization
    int elephant_count;
    int lion_count{};
    int dog_count{10};
    int cat_count{15};
    int domesticated_animals{dog_count+cat_count};
    // int fractional_count{2.9}; Does not work for fractional values . Shows error dont chop off silently.
    std::cout << "Elephant count:" << elephant_count << std::endl;
    std::cout << "Lion count:" << lion_count << std::endl;
    std::cout << "Dog count:" << dog_count << std::endl;
    std::cout << "Cat count:" << cat_count << std::endl;
    std::cout << "Domestic count:" << domesticated_animals << std::endl;

    // Functional Initialization
    int apple_count(10);
    int orange_count(15);
    int fruit_count(apple_count+orange_count);
    int narrowing_conversion_functional(2.9); // Chops off the fractional part silently
    std::cout << "Apple count:" << apple_count << std::endl;
    std::cout << "Orange count:" << orange_count << std::endl;
    std::cout << "Fruit count:" << fruit_count << std::endl;
    std::cout << "Narrowing Functional:" << narrowing_conversion_functional << std::endl;

    // Assignment Notation
    int bike_count = 7;
    int truck_count = 2;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;
    std::cout << "Bike count:" << bike_count << std::endl;
    std::cout << "Truck count:" << truck_count<< std::endl;
    std::cout << "Vehicle count:" << vehicle_count << std::endl;
    std::cout << "Narrowing Assignment:" << narrowing_conversion_assignment << std::endl;

    std::cout << "Size of int:" << sizeof(int) << std::endl;
    std::cout << "Size of truck_count:" << sizeof(truck_count) << std::endl;
    return 0;
}