#ifndef _contactdir_H_
#define _contactdir_H_

#include "contact.h"

class Contact;

class ContactDir
{
public:
  ContactDir(const int maxSize);
  ~ContactDir();

  void Insert(const Contact &);
  void Delete(const char *name);
  Contact Find(const char *name);

  friend std::ostream& operator << (std::ostream &, Contact&);

private:
  int Lookup(const char *name);
  Contact **contacts;
  int dirSize;
  int maxSize;

};

#endif _contactdir_H_