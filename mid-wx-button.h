#ifndef __MID_WX_BUTTON__
#define __MID_WX_BUTTON__

#include <wx/button.h>
#include "IDsdefinitions.h"

class MidWxWindow;

class MidWxButton: public wxButton
{
    MidWindow<MidWxWindow> *parent = nullptr;
public:
    MidWxButton(MidWindow<MidWxWindow> *parent = nullptr,
                long long int midID = 0,
                const char *title = ""):
        wxButton(parent != nullptr? parent->get(): nullptr,
            midID,
            title) {}
    void setText(const char *title)
    {
        this->SetLabelText(title);
    }
    void setParent(MidWindow<MidWxWindow> *parent)
    {
        this->parent = parent;
    }
};

#endif /* __MID_WX_BUTTON__ */ 
