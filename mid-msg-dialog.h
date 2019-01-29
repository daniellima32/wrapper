#ifndef __MID_MESSAGE_DIALOG__
#define __MID_MESSAGE_DIALOG__

template <class T>
class MidMessageDialog
{
    T m;
public:
    MidMessageDialog(const char* text)
    {
        m.setText(text);
    }

    void show()
    {
        m.show();
    }
};

#endif /* __MID_MESSAGE_DIALOG__ */