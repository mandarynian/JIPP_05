#ifndef _smarddir_H_
#define _smarddir_H_

#include "contactdir.h"

class SmartDir : public ContactDir
{
public:
  SmartDir(const int max);
  Contact *Recent(void);
  Contact *Find(const char *name);

private:
  char *recent;

};


#endif _smarddir_H_