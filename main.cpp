#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:

 int 
 double
 float
 void
 char
 bool

2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    
    int a = 3, b = 4, c = 5;
    double xx = 2.0, yy = 4.5, zz = 3.23; 
    float  diam = 3.2f,  radius = 2.4f, lenght = 3.9f; 
    char red = 'B', green = 'G', blue = 'B'; 
    bool isRed = true, isNoRed = false, noColor = false; 
   
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    ignoreUnused(a, b, c, xx, yy, zz, diam, radius, lenght, red, green, blue, isRed, isNoRed, noColor);
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int calculateVolume(int lenght =30, int wide = 20)
{
    ignoreUnused(lenght, wide); 
    int vol = 0;
    vol = lenght * wide * wide;
    return{};
}
/*
 2)
 */
bool chooseInstrument(int playTime , int instrumentType = 0 )
{
    ignoreUnused(playTime, instrumentType);
    return{};
}

/*
 3)
 */
float getTempo(float rhythym = 3.2f, int bars = 4)
{
    ignoreUnused(rhythym, bars);
    return{};
}
/*
 4)
 */
double calcTemperature(int type = 0, double degrees =36.0)
{
    ignoreUnused(type, degrees);
    return{};
}

/*
 5)
 */
bool solutionDone(double result = 0, int type = 1)
{
    ignoreUnused(result,type);
    return{};
}
/*
 6)
 */
double getAmplification(double initialValue=1, double finalValue=100)
{
    ignoreUnused(initialValue, finalValue);
    return{};
}
/*
 7)
 */
int getNumberCables(int sources, int outputs= 30)
{
    ignoreUnused(sources, outputs);
    int cables = 0; 
    cables = (outputs - sources)*2;
    return {};
}

/*
 8)
 */
double setInitialGain(double noiseLevel, double intensity)
{
    ignoreUnused(noiseLevel,intensity);
    return{};
}
/*
 9)
 */
float calculateDistance(float initialPoint, float finalPoint)
{
    ignoreUnused(initialPoint, finalPoint);
    return{};
}
/*
 10)
 */
bool checkConsole(double voltage, double signal)
{
    ignoreUnused(voltage,signal);
    return{};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto volume = calculateVolume(30);

    //2)
    auto instrument = chooseInstrument(300, 2);

    //3)
    auto tempo = getTempo();

    //4)
    auto temp = calcTemperature();

    //5)
    auto solution = solutionDone(1,2);

    //6)
    auto ampl = getAmplification(3.2, 103.5);

    //7)
    auto cables = getNumberCables(10, 20);

    //8)
    auto gain = setInitialGain(300, 400.3);

    //9)
    auto distance = calculateDistance(300.3f, 300.4f);

    //10)
    auto console = checkConsole(5.5, 3.3);

    ignoreUnused(carRented, console,  solution, ampl, volume, cables, distance, gain, instrument,  temp, tempo);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
