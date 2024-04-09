#include "CommandPanel.h"

ITurtle* CommandPanel::GetTurtle(vl::Scene* scene)
{
    // idk why this new is a preprocessor new 
    // hopefully that doesnt break everything
    return new Turtle(scene);
}
