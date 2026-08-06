// #include "ATM.hxx"
// #include "Account.hxx"
// #include "BaseDisplay.hxx"

// using std::string;

// ATM::ATM(Bank* bank, BaseDisplay* display)
// {
//     myBank = bank;
//     myDisplay = display;
// }
  
// void ATM::viewAccount(int accountNumber, string password)
// {
//     if ( !(myCurrentAccount = myBank->getAccount(accountNumber, password)) )
//     {
//         myDisplay->showInfoToUser("Invalid account");
//     }
// }

// void ATM::fillUserRequest(UserRequest request, double amount)
// {
//     if (myCurrentAccount)
//         switch (request)
//         {
//             case UserRequest::REQUEST_BALANCE:
//                 showBalance(); break;
//             case UserRequest::REQUEST_DEPOSIT:
//                 makeDeposit(amount); break;
//             case UserRequest::REQUEST_WITHDRAW:
//                 withdraw(amount); break;
//             case UserRequest::REQUEST_TRANSACTIONS:
//                 showTransations();
//         }
// }

// void ATM::showBalance()
// {
//     double bal = myCurrentAccount->getBalance();
//     myDisplay->showInfoToUser("Current Balance");
//     myDisplay->showBalance(bal);
// }

// void ATM::showTransations()
// {
//     myCurrentAccount->forEachTransaction(
//     		[this] (const std::tuple<UserRequest, double>& tuple)
//     	{
//         myDisplay->showTransaction(std::get<0>(tuple), std::get<1>(tuple));
//     });
// }


// void ATM::makeDeposit(double amount)
// {
//     auto bal = myCurrentAccount->deposit(amount);
//     myDisplay->showInfoToUser("Updated Balance");
//     myDisplay->showBalance(bal);
// }

// void ATM::withdraw(double amount)
// {
//     auto bal = myCurrentAccount->deposit(amount * -1.0);
//     myDisplay->showInfoToUser("Updated Balance");
//     myDisplay->showBalance(bal);
// }

// void test(void){
//     int test = 0;
//     int right = 10;

//     if (test < right){
//         int x = 5;
//     }
// }

#define EEPROM_WRITE_ATTEMPTS        0x02
#define EEPROM_READ_ATTEMPTS         0x05

// --- Temporary stubs for undefined symbols ---
static unsigned char external_memory_data_array[12] = {0};

static void I2C1_RegWrite(unsigned char devAddr, unsigned char regAddr, unsigned char data)
{
    // Stub: no hardware available
    (void)devAddr;
    (void)regAddr;
    (void)data;
}

static unsigned char I2C1_RegRead(unsigned char devAddr, unsigned char regAddr)
{
    // Stub: no hardware available
    (void)devAddr;
    (void)regAddr;
    return 0;
}
// --- End temporary stubs ---

void TestCase2(void)
{
    float decimal_value = 0;
    unsigned int shift_variable = 0;
    unsigned char external_eeprom_save_variable = 0xFF;
    unsigned char external_eeprom_read_variable = 0xFE;
    unsigned char parsing_counter = 0;
    unsigned char write_read_error = 0;
    unsigned char read_attempt_counter = 0;
    unsigned char write_attempt_counter = 0;

    parsing_counter = 0;
    while(parsing_counter < 12){
        external_eeprom_save_variable = 0xFF;
        external_eeprom_read_variable = 0xFE;
        write_read_error = 0;
        write_attempt_counter = 0;

        while(write_read_error == false){
            if(write_attempt_counter < EEPROM_WRITE_ATTEMPTS){
                external_eeprom_save_variable = external_memory_data_array[parsing_counter];
                I2C1_RegWrite(0xA0, (parsing_counter), external_eeprom_save_variable);
                read_attempt_counter = 0;
                while((external_eeprom_save_variable != external_eeprom_read_variable) // Problem line
                      && (read_attempt_counter < EEPROM_READ_ATTEMPTS))
                {
                    external_eeprom_read_variable = I2C1_RegRead(0xA0, (parsing_counter));
                    read_attempt_counter++;
                }
            }
            else{
                write_read_error = true;
            }
        }
        parsing_counter++;
    }
}