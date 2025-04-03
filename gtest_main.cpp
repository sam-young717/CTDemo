
#include "gtest/gtest.h"

#include "Account.hxx"
#include "Bank.hxx"
#include "BaseDisplay.hxx"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(Account, listTransactionsUnknownDisplay) {
  Account acct(100.0);

  // Simplified custom display class
  class UnknownDisplay : public BaseDisplay {
  public:
    DisplayType getType() override {
      return BaseDisplay::UNKNOWN; // Simulate UNKNOWN type
    }
  };

  UnknownDisplay display; // Use the custom display with UNKNOWN type
  int count = acct.listTransactions(display, UserRequest::REQUEST_DEPOSIT);

  ASSERT_EQ(count, 0); // No transactions should be listed
}

TEST(Account, getBalanceDefault) {
  ::testing::Test::RecordProperty("req", "ATM_test-520");
 ::testing::Test::RecordProperty("cpptest_filename", __FILE__);
  Account acct;
  ASSERT_EQ(acct.getBalance(), 0.0);
}

TEST(Account, getBalanceInit) {
  ::testing::Test::RecordProperty("req", "ATM_test-520");
  ::testing::Test::RecordProperty("cpptest_filename", __FILE__);
  const double initial = 123.0;
  Account acct(initial);
  ASSERT_EQ(acct.getBalance(), initial);
}

TEST(Account, getAndSetPassword) {
  ::testing::Test::RecordProperty("req", "ATM_test-520");
  ::testing::Test::RecordProperty("cpptest_filename", __FILE__);
  std::string thePwd("The Password");
  Account acct;
  acct.setPassword(thePwd.c_str());
  std::string result(acct.getPassword());
  ASSERT_EQ(result, thePwd);
}

TEST(Account, getAndSetPasswordEmpty) {
  ::testing::Test::RecordProperty("req", "ATM_test-520");
  ::testing::Test::RecordProperty("cpptest_filename", __FILE__);
  std::string thePwd("");
  Account acct;
  acct.setPassword(thePwd.c_str());
  std::string result(acct.getPassword());
  ASSERT_EQ(result, thePwd);
}

TEST(Account, getAndSetAccountNumber) {
  ::testing::Test::RecordProperty("req", "ATM_test-520");
  ::testing::Test::RecordProperty("cpptest_filename", __FILE__);
  int num = 123;
  Account acct;
  acct.setAccountNumber(num);
  ASSERT_EQ(acct.getAccountNumber(), num);
}

TEST(Account, depositSimple) {
  ::testing::Test::RecordProperty("req", "ATM_test-520");
  ::testing::Test::RecordProperty("cpptest_filename", __FILE__);
  const double initial = 123.0;
  const double amount = 456.0;
  Account acct(initial);
  acct.deposit(amount);
  ASSERT_EQ(acct.getBalance(), initial + amount);
}

TEST(Account, debitSimple) {
  ::testing::Test::RecordProperty("req", "ATM_test-520");
  ::testing::Test::RecordProperty("cpptest_filename", __FILE__);
  const double initial = 123.0;
  const double amount = 45.0;
  Account acct(initial);
  acct.debit(amount);
  ASSERT_EQ(acct.getBalance(), initial - amount);
}

 
 TEST(Account, getBalanceInitBad) {
  ::testing::Test::RecordProperty("req", "ATM_test-520");
  ::testing::Test::RecordProperty("filename", __FILE__);
  const double initial = 223.0;
  Account acct(initial);
  ASSERT_EQ(acct.getBalance(), initial - 1.0);
 }

 TEST(Bank, addAccount) {
  ::testing::Test::RecordProperty("req", "ATM_test-521");
  ::testing::Test::RecordProperty("cpptest_filename", __FILE__);
  Bank theBank;
  Account * acct = theBank.addAccount();
  ASSERT_TRUE(nullptr != acct);
}

TEST(Bank, addAccountMultiple) {
  ::testing::Test::RecordProperty("req", "ATM_test-521");
  ::testing::Test::RecordProperty("cpptest_filename", __FILE__);
  int count = 10;
  Bank theBank;
  for (int i = 0; i < count; i ++) {
    Account * acct = theBank.addAccount();
    ASSERT_TRUE(nullptr != acct);
    ASSERT_EQ(acct->getAccountNumber(), i);
  }
}

TEST(Bank, getAccount_1) {
  ::testing::Test::RecordProperty("cpptest_filename", __FILE__);
  int num = 0;
  string password = "";
  Bank theBank;
  Account * acct = theBank.getAccount(num, password);
  ASSERT_FALSE(nullptr != acct);
}


TEST(Bank, getAccount_2) {
  ::testing::Test::RecordProperty("cpptest_filename", __FILE__);
  int num = 0;
  string password = "";
  Bank theBank;
  theBank.addAccount();
  Account * acct = theBank.getAccount(num, password);
  ASSERT_TRUE(nullptr != acct);
}

TEST(Bank, getAccount_3) {
  ::testing::Test::RecordProperty("cpptest_filename", __FILE__);
  int num = 0;
  string password = "test";
  Bank theBank;
  theBank.addAccount();
  Account * acct = theBank.getAccount(num, password);
  ASSERT_TRUE(nullptr != acct);
}

TEST(BaseDisplay, getType) {
  ::testing::Test::RecordProperty("req", "ATM_test-522");
  ::testing::Test::RecordProperty("cpptest_filename", __FILE__);
  BaseDisplay disp;
  ASSERT_EQ(disp.getType(), BaseDisplay::SECURE);
}

