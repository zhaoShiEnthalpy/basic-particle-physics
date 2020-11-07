#include "EventAction.hh"//包含对应的头文件
#include "G4Event.hh"//包含Geant4中输出信息至程序外的G4cout与G4endl所对应的头文件

int evtid; //声明外部变量，此变量为每个Event对应的序号，在main文件中定义

//EventAction类的构造函数
EventAction::EventAction() : G4UserEventAction() {}

//EventAction类的析构函数
EventAction::~EventAction() {}

//成员函数BeginOfEventAction(const G4Event*)的定义
void EventAction::BeginOfEventAction(const G4Event*) {}

// 成员函数EndOfEventAction(const G4Event*)的定义
void EventAction::EndOfEventAction(const G4Event*) {
    G4cout
        << " This is " << evtid << " event "
        << G4endl
        << "------------------------------------------------------------"
        << G4endl;
    evtid++;//每模拟完成一个Event，将记录Event序号的变量evtid加1
}
