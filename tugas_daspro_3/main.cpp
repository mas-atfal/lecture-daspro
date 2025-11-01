#include <iostream>

using namespace std;

int main() {
    int x = 5;
    int y = 3;
    
    cout << "Nilai Awal x= " << x << ", y= " << y << "\n";
    
    // Post Increment/Decrement
    // Pre Increment/Decrement
    cout << "Ini Adalah Post Increment/Decrement \n";
    // 1. x++
    x++;
    cout << "1. x++ -> x= "<< x << "\n";
    
    // 2. y++
    y++;
    cout << "2. y++ -> y= "<< y << "\n";
    
    // 3. x--
    x--;
    cout << "3. x-- -> x= "<< x << "\n";
    
    // 4. y--
    y--;
    cout << "4. y-- -> y= "<< y << "\n \n";
    
    // Pre Increment/Decrement
    cout << "Ini Adalah Pre Increment/Decrement \n";
    // 1. ++x
    cout << "1. ++x -> x= "<< ++x << "\n";
    
    // 2. ++y
    cout << "2. ++y -> y= "<< ++y << "\n";
    
    // 3. --x
    cout << "3. --x -> x= "<< --x << "\n";
    
    // 4. --y
    cout << "4. --y -> y= "<< --y << "\n";
    
    
    // Compound Assigment
    //    1. x+= 1
    x += 1;
    cout << "1. x+= 1 -> x= " << x << ", y= " << y << "\n";
    
    //    2. x+= y
    x += y;
    cout << "2. x+= y -> x= " << x << ", y= " << y << "\n";
    
    //    3. y-= 1
    y -= 1;
    cout << "3. y-= 1 -> x= " << x << ", y= " << y << "\n";
    
    //    4. y-= x
    y -= x;
    cout << "4. y-= x -> x= " << x << ", y= " << y << "\n";
    
    //    5. x *= y + 1
    x *= y + 1;
    cout << "5. x *= y + 1 -> x= " << x << ", y= " << y << "\n";
    
    //    6. y/= 3
    y /= 3;
    cout << "6. y/= 3 -> x= " << x << ", y= " << y << "\n";
    
    return EXIT_SUCCESS;
}
