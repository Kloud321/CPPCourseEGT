//
// Created by damya on 4.2.2024 г..
//

#ifndef TODOLIST_TASK_H
#define TODOLIST_TASK_H

#include <string>
using namespace std;
#include <vector>

class Tasks {

public:
    enum Type { URGENT, HighPriority, MediumPriority, LowPriority, Critical };
    enum StatusProgress { NotSTARTED, InPROGRESS, OnHOLD, COMPLETED, CANCELLED, PendingReview, POSTPONED };

    Tasks(string name, Type type);

    Type getType() const;
    void setType(Type type);

    StatusProgress getProgress() const;
    void setProgress(StatusProgress progress);

    const string &getName() const;

    void setName(const string &name);

    const vector<pair<string, StatusProgress>> &getTaskList() const;

    void setTaskList(const vector<pair<string, StatusProgress>> &taskList);


    static string taskTypeToString(Type);
    static string taskStatusProgressToString(StatusProgress);

private:
    string name;
    Type type;
    StatusProgress progress;
//    vector<pair<string, StatusProgress>> taskList;
};

#endif //TODOLIST_TASK_H