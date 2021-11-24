#pragma once

#include "../defines.hpp"
#include <fstream>

std::string exec(const char* cmd);
void clearLogs();
void emptyEvent();
bool xcbContainsAtom(xcb_get_property_reply_t* PROP, xcb_atom_t ATOM);

double parabolic(double from, double to, double incline);