#ifndef INTERFACE_USB_H
#define INTERFACE_USB_H

#include <cassert>
#ifdef _DEBUG
#define VERIFY ASSERT
#define VERIFY_(result, expression) assert(result == expression)
#else
#define VERIFY(expression)(expression)
#define VERIFY(result, expression)(expression)
#endif

class Interface_USB
{
public:
    Interface_USB();
};

#endif // INTERFACE_USB_H
