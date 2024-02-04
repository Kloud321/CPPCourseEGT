//
// Created by damya on 4.2.2024 г..
//

#include "Task.h"

Tasks::Tasks(string title, Tasks::Type type ) : name(title), type(type), progress(Tasks::StatusProgress::NotSTARTED) {}


Tasks::Type Tasks::getType() const {
    return type;
}

void Tasks::setType(Tasks::Type type) {
    Tasks::type = type;
}

Tasks::StatusProgress Tasks::getProgress()  const{
    return progress;
}

void Tasks::setProgress(Tasks::StatusProgress progress) {
    Tasks::progress = progress;
}


string Tasks::taskTypeToString(Tasks::Type types) {

    switch (types) {
        case URGENT:
            return "Urgent";
        case HighPriority:
            return "High Priority";
        case MediumPriority:
            return "Medium Priority";
        case LowPriority:
            return "Low Priority";
        case Critical:
            return "Critical";
        default:
            return "There isn't such priority";
    }
}

string Tasks::taskStatusProgressToString(Tasks::StatusProgress statusPr) {

    switch (statusPr) {
        case NotSTARTED:
            return "Not started";
        case InPROGRESS:
            return "In Progress";
        case OnHOLD:
            return "On Hold";
        case COMPLETED:
            return "Completed";
        case CANCELLED:
            return "Cancelled";
        case PendingReview:
            return "Pending Review";
        case POSTPONED:
            return "Postponed";
        default:
            return "There isn't such status";
    }
}

const string &Tasks::getName() const {
    return name;
}

void Tasks::setName(const string &name) {
    Tasks::name = name;
}
