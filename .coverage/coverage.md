# Parasoft C/C++test - Code Coverage Report

* LC - Line Coverage
* SC - Statement Coverage
* BC - Block Coverage
* DC - Decision (Branch) Coverage
* SCC - Simple Condition Coverage
* MCDC - Modified Condition Decision Coverage
* FC - Function Coverage
* CC - Call Coverage

| Element | LC | SC | BC | DC | SCC | MCDC | FC | CC | 
| --- | --- | --- | --- | --- | --- | --- | --- | --- | 
| CTDemo/ATM.cpp | 0% 0/21 | 0% 0/24 | 0% 0/14 | 0% 0/9 | 0% 0/4 | 0% 0/2 | 0% 0/8 | 0% 0/19 | 
| `ATM::ATM(Bank *, BaseDisplay *)` | 0% 0/2 | 0% 0/2 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| `ATM::fillUserRequest(UserRequest, double)` | 0% 0/6 | 0% 0/9 | 0% 0/6 | 0% 0/7 | 0% 0/2 | 0% 0/1 | 0% 0/1 | 0% 0/4 | 
| `ATM::makeDeposit(double)` | 0% 0/3 | 0% 0/3 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | 0% 0/3 | 
| `ATM::showBalance()` | 0% 0/3 | 0% 0/3 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | 0% 0/3 | 
| `ATM::showTransations()` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | 0% 0/1 | 
| `ATM::showTransations()::[lambda(const std::tuple<UserRequest, double> &) (instance 1)]` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | 0% 0/3 | 
| `ATM::viewAccount(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>)` | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/1 | 0% 0/1 | 0% 0/2 | 
| `ATM::withdraw(double)` | 0% 0/3 | 0% 0/3 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | 0% 0/3 | 
| CTDemo/Account.cpp | 57% 12/21 | 57% 12/21 | 46% 6/13 | 25% 2/8 | 33% 2/6 | 0% 0/3 | 67% 4/6 | 41% 7/17 | 
| `Account::Account(Account&&)` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| `Account::Account(double)` | 67% 2/3 | 67% 2/3 | 67% 2/3 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 100% 1/1 | 50% 1/2 | 
| `Account::debit(double)` | 100% 3/3 | 100% 3/3 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | 100% 2/2 | 
| `Account::deposit(double)` | 100% 3/3 | 100% 3/3 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | 100% 2/2 | 
| `Account::listTransactions(BaseDisplay &, UserRequest)` | 50% 4/8 | 50% 4/8 | 40% 2/5 | 25% 1/4 | 50% 1/2 | 0% 0/1 | 100% 1/1 | 29% 2/7 | 
| `Account::listTransactions(BaseDisplay &, UserRequest)::[lambda(std::tuple<UserRequest, double>) (instance 1)]` | 0% 0/3 | 0% 0/3 | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/1 | 0% 0/1 | 0% 0/4 | 
| CTDemo/Account.hxx | 0% 0/6 | 0% 0/6 | 0% 0/5 | N/A | N/A | N/A | 0% 0/5 | 0% 0/2 | 
| `Account::getAccountNumber() const` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| `Account::getBalance() const` | 0% 0/2 | 0% 0/2 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | 0% 0/1 | 
| `Account::getPassword()` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | 0% 0/1 | 
| `Account::setAccountNumber(int)` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| `Account::setPassword(const char *)` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| CTDemo/Bank.cpp | 100% 12/12 | 100% 12/12 | 100% 8/8 | 100% 4/4 | 100% 6/6 | 100% 3/3 | 100% 4/4 | 100% 5/5 | 
| `Bank::Bank()` | 100% 1/1 | 100% 1/1 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | N/A | 
| `Bank::addAccount()` | 100% 4/4 | 100% 4/4 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | 100% 2/2 | 
| `Bank::getAccount(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>)` | 100% 6/6 | 100% 6/6 | 100% 5/5 | 100% 4/4 | 100% 6/6 | 100% 3/3 | 100% 1/1 | 100% 3/3 | 
| `Bank::~Bank()` | 100% 1/1 | 100% 1/1 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | N/A | 
| CTDemo/BaseDisplay.cpp | 12% 2/17 | 12% 2/17 | 17% 2/12 | 0% 0/8 | 0% 0/2 | 0% 0/1 | 40% 2/5 | N/A | 
| `BaseDisplay::getType()` | 100% 1/1 | 100% 1/1 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | N/A | 
| `BaseDisplay::logError(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>)` | 100% 1/1 | 100% 1/1 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | N/A | 
| `BaseDisplay::showBalance(double)` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| `BaseDisplay::showInfoToUser(const char *)` | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/1 | 0% 0/1 | N/A | 
| `BaseDisplay::showTransaction(UserRequest, double)` | 0% 0/12 | 0% 0/12 | 0% 0/7 | 0% 0/6 | N/A | N/A | 0% 0/1 | N/A | 
| CTDemo/BaseDisplay.hxx | 0% 0/2 | 0% 0/2 | 0% 0/2 | N/A | N/A | N/A | 0% 0/2 | N/A | 
| `BaseDisplay::BaseDisplay()` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| `BaseDisplay::~BaseDisplay()` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| TOTAL (6 files, 30 functions) | 33% 26/79 | 32% 26/82 | 30% 16/54 | 21% 6/29 | 44% 8/18 | 33% 3/9 | 33% 10/30 | 28% 12/43 | 
