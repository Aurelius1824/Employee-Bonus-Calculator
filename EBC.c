struct employees    //Employee structure
{
    char name[100];        //Members of the employee structure
    float salary;
    int sales;
};

int main()
{
    struct employees individual[5] = {  //5 empolyees, so they will be stored in the array called individual
                                     {"Christian Pumarada", 188000, 200000},  
                                     {"Roronoa Zoro", 76000, 40000},
                                     {"Aleksander Adams", 46000, 300000},
                                     {"Monkey D. Luffy", 300000, 46000},
                                     {"Son Gohan", 1000000, 100000}
                                     };
    
    for (int i = 0; i < 5; i++) //loops through each employee
    {
        float bonus = 0;    //If not set to 0, causes errors
        if (individual[i].sales >= 90000)
        {
            bonus = individual[i].salary * 0.035;   //determines bonus, if employee is eligible
        }
        printf("Employee name: %s\nEmployee Salary: $%.2f\nTotal Sales for the year: %d\n", individual[i].name, individual[i].salary, individual[i].sales);
        
        if (bonus > 0)  //If the employee got a bonus, it will be printed
        {
            printf("Bonus of %.2f \nGood Job!\n\n", bonus);
        }
        else
        {       //If they did not get a bonus, this will print
            printf("You didn't get the bonus this year, better luck next year!\n\n");
        }
    }

    return 0;
}