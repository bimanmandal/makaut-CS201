let accountBalance = 5000;
let withdrawlAmount = 4500;
let balance = accountBalance - withdrawlAmount;
if (balance < 1000) {
    console.log("Cannot withdraw amount. Balance Amount should be greater than 1000")
} else  {
    accountBalance = balance;
}
