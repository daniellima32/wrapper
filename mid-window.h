#ifndef __MID_WINDOW__
#define __MID_WINDOW__

#include <vector>
#include <iostream>
#include <type_traits>
#include "mid-object.h"

using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::is_reference;

template <class T>
class MidWindow: public MidObject
{
    T* ptr = nullptr;

    vector<shared_ptr<MidObject>> child;
public:
    MidWindow(int width,
              int height,
              const char* title):
        MidObject((ptr = new T{ width, height, title }))
    {
    }
    /*template <typename U, typename V>
    void connect(MidObject *sender,
                 const char *signal,
                 MidObject *receiver,
                 const char *slot)
    {
        this->get()->connect(sender->ref<U>(),
                             signal,
                             receiver->ref<V>(),
                             slot);
    }*/

    void processButtonClick()
    {
        std::cout << "processButtonClick() of MidWindow\n";
        std::cout.flush();

        this->get()->processButtonClick();
    }

    MidWindow(const T& t): MidObject(t){}
    int getWidth() const
    {
        return this->get().getWidth();
    }
    int getHeight() const
    {
        return this->get().getHeight();
    }
    void addChild(MidObject *child)
    {
        if (child != nullptr)
        {
            this->child.push_back(make_shared<MidObject>(child));
            // To Do: Layout
            this->get()->addChild(child);
        }
    }
    virtual ~MidWindow()
    {
        //delete ptr;
    }
    T* get()
    {
        return this->ref<T>();
    }
    void show()
    {
        this->get()->show();
    }
};

#endif /* __MID_WINDOW__ */
