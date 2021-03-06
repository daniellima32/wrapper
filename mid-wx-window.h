#ifndef __MID_WX_WINDOW__
#define __MID_WX_WINDOW__

#include <wx/frame.h>
#include "mid-object.h"

class MidWxWindow: public wxFrame
{
public:
    MidWxWindow(int width,
                int height,
                const char *title,
                wxFrame *parent = nullptr):
        wxFrame(parent, wxID_ANY, title)
    {
        this->SetSize(0, 20, width, height);
    }
    MidWxWindow(MidWxWindow const& other): wxFrame(nullptr, wxID_ANY, "", other.GetPosition(), other.GetSize())
    {
    }
    void addChild(MidObject *object)
    {
    }
    void show()
    {
        this->Show(true);
    }

    void setMidLayout(wxSizer* layout)
    {
        SetSizer(layout);
    }
};

#endif /* __MID_WX_WINDOW_ */
