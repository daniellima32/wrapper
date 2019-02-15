#ifndef MIDQT5CONNECT_H
#define MIDQT5CONNECT_H

#include "mid-connect.h"
#include "mid-qt5-window.h"
#include "mid-qt5-button.h"
#include "button.h"
#include "mid-handler.h"

#include "QObject"
#include "QPushButton"

#include <iostream>
using std::cout;
using std::endl;

//class MidQt5Connect: public MidConnect, public QObject
class MidQt5Connect: public QObject
{
    Q_OBJECT
private:
    MidWindow<MidQt5Window>* parent = nullptr;

public:
    MidQt5Connect(MidWindow<MidQt5Window>* parent = nullptr):
        parent(parent)
    {
    }


    bool connect(
            Button* source,   //Fonte do evento
            //void (MidObject::*signal)(bool),
            EventTable eventTable,
            MidHandler* eventhandler
            )
    {
        //Implements the logic of connection in qt
        QPushButton *obj = (QPushButton*) source->ref<MidQt5Button>();
        if (obj != nullptr)
        {
            if (eventTable == EventTable::BUTTONCLICK)
            {
                QObject::connect(obj, &QPushButton::clicked, [&]()
                {
                    /*MidMessageDialog<MidQt5MsgDialog> msgDlg(parent, "SIGA", "This is a SIGA message");
                        msgDlg.show();*/
                    cout << "event called" << endl;

                });
            }
        }

        return true;
    }
};

#endif // MIDQT5CONNECT_H
