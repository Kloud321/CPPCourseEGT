#include <iostream>
#include "Employee.h"
#include "Manager.h"

int main() {

    // Creating new tasks
   Tasks task1("Write report", Tasks::Type::URGENT);
   Tasks task2("Report on MLT deal", Tasks::Type::LowPriority);
   Tasks task3("Contract for new clean services", Tasks::Type::MediumPriority);
   Tasks task4("Update on negotiation for new leasing company cars", Tasks::Type::Critical);
   Tasks task5("Meeting with CIO of MLT", Tasks::Type::HighPriority);

   // Creating manager and employees
   Manager man1("Mihaela", "Milusheva", "Senior legal adviser");

   Employee empl1("Ivan", "Damyanov", "Legal adviser");
   Employee empl2("Victor", "Peshev", "Legal adviser");
   Employee empl3("Kalin", "Metodiev", "Legal adviser");
   Employee empl4("Jana", "Jeleva", "Legal adviser");
   Employee empl5("Kaloyan", "Dimitrov", "Legal adviser");

   // Adding empls. to manager's team
    man1.addEmployee(empl1);
    man1.addEmployee(empl2);
    man1.addEmployee(empl3);
    man1.addEmployee(empl4);
    man1.addEmployee(empl5);

   // Creating tasks for employees
    man1.createTaskForEmployee(task1,empl1);
    man1.createTaskForEmployee(task2, empl2);
    man1.createTaskForEmployee(task3, empl3);
    man1.createTaskForEmployee(task4, empl4);
    man1.createTaskForEmployee(task5, empl1);

    /// Case -> Empl. doesn't have such a task;

    empl1.setTaskStatus(task4,Tasks::StatusProgress::OnHOLD);

    /// Case - > Empl. changes the task status -> if COMPLETED or CANCELLED removes the task from empl. tasks;

    empl1.setTaskStatus(task1, Tasks::StatusProgress::COMPLETED);

    empl1.displayTasks();

    man1.taskProgressUpdate(task1, empl1);




    return 0;

}
