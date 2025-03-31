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
| ATM/ATM.cpp | 0% 0/21 | 0% 0/24 | 0% 0/14 | 0% 0/9 | 0% 0/4 | 0% 0/2 | 0% 0/8 | 0% 0/19 | 
| `ATM::ATM(Bank *, BaseDisplay *)` | 0% 0/2 | 0% 0/2 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| `ATM::fillUserRequest(UserRequest, double)` | 0% 0/6 | 0% 0/9 | 0% 0/6 | 0% 0/7 | 0% 0/2 | 0% 0/1 | 0% 0/1 | 0% 0/4 | 
| `ATM::makeDeposit(double)` | 0% 0/3 | 0% 0/3 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | 0% 0/3 | 
| `ATM::showBalance()` | 0% 0/3 | 0% 0/3 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | 0% 0/3 | 
| `ATM::showTransations()` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | 0% 0/1 | 
| `ATM::showTransations()::[lambda(const std::tuple<UserRequest, double> &) (instance 1)]` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | 0% 0/3 | 
| `ATM::viewAccount(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>)` | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/1 | 0% 0/1 | 0% 0/2 | 
| `ATM::withdraw(double)` | 0% 0/3 | 0% 0/3 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | 0% 0/3 | 
| ATM/Account.cpp | 38% 8/21 | 38% 8/21 | 31% 4/13 | 13% 1/8 | 17% 1/6 | 0% 0/3 | 50% 3/6 | 29% 5/17 | 
| `Account::Account(Account&&)` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| `Account::Account(double)` | 67% 2/3 | 67% 2/3 | 67% 2/3 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 100% 1/1 | 50% 1/2 | 
| `Account::debit(double)` | 100% 3/3 | 100% 3/3 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | 100% 2/2 | 
| `Account::deposit(double)` | 100% 3/3 | 100% 3/3 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | 100% 2/2 | 
| `Account::listTransactions(BaseDisplay &, UserRequest)` | 0% 0/8 | 0% 0/8 | 0% 0/5 | 0% 0/4 | 0% 0/2 | 0% 0/1 | 0% 0/1 | 0% 0/7 | 
| `Account::listTransactions(BaseDisplay &, UserRequest)::[lambda(std::tuple<UserRequest, double>) (instance 1)]` | 0% 0/3 | 0% 0/3 | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/1 | 0% 0/1 | 0% 0/4 | 
| ATM/Account.hxx | 100% 6/6 | 100% 6/6 | 100% 5/5 | N/A | N/A | N/A | 100% 5/5 | 100% 2/2 | 
| `Account::getAccountNumber() const` | 100% 1/1 | 100% 1/1 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | N/A | 
| `Account::getBalance() const` | 100% 2/2 | 100% 2/2 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | 100% 1/1 | 
| `Account::getPassword()` | 100% 1/1 | 100% 1/1 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | 100% 1/1 | 
| `Account::setAccountNumber(int)` | 100% 1/1 | 100% 1/1 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | N/A | 
| `Account::setPassword(const char *)` | 100% 1/1 | 100% 1/1 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | N/A | 
| ATM/Bank.cpp | 100% 12/12 | 100% 12/12 | 100% 8/8 | 100% 4/4 | 100% 6/6 | 100% 3/3 | 100% 4/4 | 100% 5/5 | 
| `Bank::Bank()` | 100% 1/1 | 100% 1/1 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | N/A | 
| `Bank::addAccount()` | 100% 4/4 | 100% 4/4 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | 100% 2/2 | 
| `Bank::getAccount(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>)` | 100% 6/6 | 100% 6/6 | 100% 5/5 | 100% 4/4 | 100% 6/6 | 100% 3/3 | 100% 1/1 | 100% 3/3 | 
| `Bank::~Bank()` | 100% 1/1 | 100% 1/1 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | N/A | 
| ATM/BaseDisplay.cpp | 0% 0/17 | 0% 0/17 | 0% 0/12 | 0% 0/8 | 0% 0/2 | 0% 0/1 | 0% 0/5 | N/A | 
| `BaseDisplay::getType()` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| `BaseDisplay::logError(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>)` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| `BaseDisplay::showBalance(double)` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| `BaseDisplay::showInfoToUser(const char *)` | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/1 | 0% 0/1 | N/A | 
| `BaseDisplay::showTransaction(UserRequest, double)` | 0% 0/12 | 0% 0/12 | 0% 0/7 | 0% 0/6 | N/A | N/A | 0% 0/1 | N/A | 
| ATM/BaseDisplay.hxx | 0% 0/2 | 0% 0/2 | 0% 0/2 | N/A | N/A | N/A | 0% 0/2 | N/A | 
| `BaseDisplay::BaseDisplay()` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| `BaseDisplay::~BaseDisplay()` | 0% 0/1 | 0% 0/1 | 0% 0/1 | N/A | N/A | N/A | 0% 0/1 | N/A | 
| ATM/unitTests/AccountTest.hpp | 100% 48/48 | 89% 64/72 | 75% 24/32 | 50% 8/16 | 50% 8/16 | 0% 0/8 | 100% 8/8 | 85% 40/47 | 
| `Account_debitSimple_Test::TestBody()` | 100% 7/7 | 90% 9/10 | 75% 3/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 100% 1/1 | 83% 5/6 | 
| `Account_depositSimple_Test::TestBody()` | 100% 7/7 | 90% 9/10 | 75% 3/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 100% 1/1 | 83% 5/6 | 
| `Account_getAndSetAccountNumber_Test::TestBody()` | 100% 6/6 | 89% 8/9 | 75% 3/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 100% 1/1 | 83% 5/6 | 
| `Account_getAndSetPasswordEmpty_Test::TestBody()` | 100% 7/7 | 90% 9/10 | 75% 3/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 100% 1/1 | 86% 6/7 | 
| `Account_getAndSetPassword_Test::TestBody()` | 100% 7/7 | 90% 9/10 | 75% 3/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 100% 1/1 | 86% 6/7 | 
| `Account_getBalanceDefault_Test::TestBody()` | 100% 4/4 | 86% 6/7 | 75% 3/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 100% 1/1 | 80% 4/5 | 
| `Account_getBalanceInitBad_Test::TestBody()` | 100% 5/5 | 88% 7/8 | 75% 3/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 100% 1/1 | 100% 5/5 | 
| `Account_getBalanceInit_Test::TestBody()` | 100% 5/5 | 88% 7/8 | 75% 3/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 100% 1/1 | 80% 4/5 | 
| ATM/unitTests/BankTest.hpp | 100% 33/33 | 89% 47/53 | 78% 21/27 | 57% 8/14 | 54% 13/24 | 8% 1/12 | 100% 5/5 | 67% 18/27 | 
| `Bank_addAccountMultiple_Test::TestBody()` | 100% 8/8 | 88% 14/16 | 82% 9/11 | 67% 4/6 | 63% 5/8 | 25% 1/4 | 100% 1/1 | 63% 5/8 | 
| `Bank_addAccount_Test::TestBody()` | 100% 5/5 | 88% 7/8 | 75% 3/4 | 50% 1/2 | 50% 2/4 | 0% 0/2 | 100% 1/1 | 60% 3/5 | 
| `Bank_getAccount_1_Test::TestBody()` | 100% 6/6 | 89% 8/9 | 75% 3/4 | 50% 1/2 | 50% 2/4 | 0% 0/2 | 100% 1/1 | 50% 2/4 | 
| `Bank_getAccount_2_Test::TestBody()` | 100% 7/7 | 90% 9/10 | 75% 3/4 | 50% 1/2 | 50% 2/4 | 0% 0/2 | 100% 1/1 | 60% 3/5 | 
| `Bank_getAccount_3_Test::TestBody()` | 100% 7/7 | 90% 9/10 | 75% 3/4 | 50% 1/2 | 50% 2/4 | 0% 0/2 | 100% 1/1 | 100% 5/5 | 
| ATM/unitTests/gtest_main.cpp | 100% 2/2 | 100% 2/2 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | 100% 2/2 | 
| `main()` | 100% 2/2 | 100% 2/2 | 100% 1/1 | N/A | N/A | N/A | 100% 1/1 | 100% 2/2 | 
| TOTAL (9 files, 44 functions) | 67% 109/162 | 67% 139/209 | 55% 63/114 | 36% 21/59 | 48% 28/58 | 14% 4/29 | 59% 26/44 | 61% 72/119 | 
