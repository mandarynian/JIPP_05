#ifndef _contact_H_
#define _contact_H_

#include <iostream>
#include <fstream>

class Contact
{
public:
  Contact(const char *name, const char *address, const char *tel);
  ~Contact();

  const char * Name();
  const char * Address();
  const char * Tel();

  friend std::ostream& operator << (std::ostream &, Contact&);

private:

  char *name;
  char *address;
  char *tel;

};

#endif _contact_H_