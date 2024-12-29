#ifndef VENDING_BANK_H_
#define VENDING_BANK_H_
#include <iostream>

class VendingBank
{

public:

  // Default constructor
  VendingBank();

  // constructors
  VendingBank(int id);

  VendingBank(int id, int dollar);

  VendingBank(int id, int dollar, int quarters);

  VendingBank(int id, int dollar, int quarters, int dimes);

  VendingBank(int id, int dollar, int quarters, int dimes, int nickels);

  VendingBank(int id, int dollar, int quarters, int dimes, int nickels, int pennies);

  // getters
  // getter returns id  
  int id() const;

  // getter returns balance in bank
  double balance() const;

  // returns total quarters in bank
  int quarters() const;

  // getter returns total dimes in bank
  int dimes() const;

  // getter returns total nickles in bank
  int nickels() const;

  // returns total pennies in bank
  int pennies() const;

  // setters
  // sets quarters
  bool set_quarters(int quarters);

  // sets dimes
  bool set_dimes(int dimes);

  // sets nickels
  bool set_nickels(int nickles);

  // sets pennies
  bool set_pennies(int pennies);

  // Extra methods
  // returns boolean if bank has change for a given amount
  bool is_change(double amount);

  // deposits amount in bank
  bool deposit(int quarters, int dimes, int nickles, int pennies);

  // withdraws amount from bank
  bool withdraw(int quarters, int dimes, int nickles, int pennies);

  // Overload operators
  bool operator==(const VendingBank& other) const;

  bool operator>(const VendingBank& other) const;

  bool operator>=(const VendingBank& other) const;

  bool operator<=(const VendingBank& other) const;

  bool operator<(const VendingBank& other) const;

  // ostream
  friend std::ostream& operator<<(std::ostream& stream, const VendingBank& other);

  // istream
  friend std::istream& operator>>(std::istream& stream, VendingBank& other);

private:

  // private id attribute
  int id_;

  // private balance attribute
  double balance_;

  // private quarters attribute
  int quarters_;

  // private dimes attribute
  int dimes_;

  // private nickels attribute
  int nickels_;

  // private pennies attribute
  int pennies_;

};
#endif