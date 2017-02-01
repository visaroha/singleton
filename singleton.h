#ifndef __SINGLETON_HPP_
#define __SINGLETON_HPP_
#include <stddef.h>  // defines NULL
#include <iostream>
#include <cassert>

template <class T>
class Singleton
{
public:
  static T* Instance() {
      if(!m_pInstance){
        m_pInstance = new T;
        std::cout << "New Instance created" << std::endl;
      } 
      assert(m_pInstance != NULL);
      return m_pInstance;
  }
protected:
  Singleton();
  ~Singleton();
private:
  Singleton(Singleton const&);
  Singleton& operator=(Singleton const&);
  static T* m_pInstance;
};

template <class T> T* Singleton<T>::m_pInstance=NULL;

#endif