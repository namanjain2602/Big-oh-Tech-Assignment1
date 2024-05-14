here are assignment1 of big-oh tech 
"Assignment Tasks :
Solve using OOPS concepts
1: Abstraction
2: Encapsulation
3: Polymorphism
4: Inheritance
5: Association
6: Aggregation
7: Composition
Task 1 :
Write a program to depict Indian Politics.
Consider the politics use cases :
MP: is a person who won from a constituency 
getConstituency - return their winning constituency.
getDriver - returns the driver assigned for their vehicle (default car).
exceedsSpendingLimit - returns true or false if Mps exceeds to their spending limit.
PM->Ministers->MP (All of them are MPS) - PM has special permissions such as it can give permission to arrest any minister.
PM enjoys special benefits such as Aircraft (along with car) and its designated driver. 
Note: PM spending limit : 1 crore, Ministers: 10 lakhs, MP: 1 lakh.
Need to design in a way  where Commisioner class can arrest MP, Ministers and PM when their expense exceeds their spending limit:
canArrest - can arrest one or many MP.  
          Note: If PM  cant arrest.
                If minister can arrest with PM permission
                if mps they can be arrested without anyones permission.
In Short, If the MP is not PM then he can be arrested by commisoner , If he is minister then can be arrested with PMs permisison.

Task 2: 
suppose you are making a program for a very famous IoT Inverter company,
company have multiple inverters with multiple business logic,
use cases:
company have PCU, GTI, Zelio, Regalia, iCruze Inverters,
All Inverters have Power rating which is determined by ( Current * Operating Voltage )
Only PCU, GTI and Regalia are solar Inverters other are not (solar inverters get charge by solar panels and solar energy),
Solar Inverters have Solar Panels also
Solar Inverters further have two option one Battery version that whatever energy is produced will be stored in battery other will not store any energy,
so PCU comes with battery but GTI have no battery,
Solar Inverter also have GRID On , system where you can sell your extra energy back, GTI is GRID On where as this feature is not available in PCU,
Non Solar Inverters are Simple Home Inverters Which have a Battery,"
