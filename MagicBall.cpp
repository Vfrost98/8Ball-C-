#include <iostream>
#include <cstdlib>

int main(){
  std::cout << "MAGIC 8-BALL\n";
  srand(time(0)); //setting the seed
  int choice = std::rand() % 10;

  switch(choice){
    case 0:
    std::cout << "it is certain.\n";
    break;
    case 1:
    std::cout << "cannot predict now.\n";
    break;
    case 2:
    std::cout << " Reply hazy, try again.\n";
    break;
    case 3:
    std::cout << "Outlook not so good.\n";
    break;
    case 4:
    std::cout << "";
    break;
    case 5:
    std::cout << "it is uncertain\n"; 
    break;
    case 6:
    std::cout << " Without a doubt.\n";
    break;
    case 7:
    std::cout << "As I see it, yes.\n";
    break;
    case 8:
    std::cout << "Ask again later\n";
    break;
    case 9:
    std::cout << "Don't count on it.\n";
    break;
    case 10:
    std::cout << "very doubtful\n";
    break;
  }
}
