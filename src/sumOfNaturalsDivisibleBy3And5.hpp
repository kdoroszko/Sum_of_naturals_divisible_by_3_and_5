int SumOfNaturalsDivisibleBy3And5(int limitNumber)
{
    int currentNaturalNumber = 0;
    int sum = 0;

    for(currentNaturalNumber; currentNaturalNumber <= limitNumber; currentNaturalNumber++)
        if(currentNaturalNumber % 3 == 0)
            sum += currentNaturalNumber;

    return sum;
}
