#ifndef CREATURE_H
#define CREATURE_H

#include "widget.h"

namespace OTUI {
    class Creature : public Widget
    {
    public:
        Creature();
        Creature(QString widgetId);
        ~Creature();
    };
}

#endif // CREATURE_H
