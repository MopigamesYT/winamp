// ----------------------------------------------------------------------------
// Generated by InterfaceFactory [Wed May 07 00:58:14 2003]
// 
// File        : api_syscbx.h
// Class       : api_syscb
// class layer : Dispatchable Receiver
// ----------------------------------------------------------------------------

#ifndef __API_SYSCBX_H
#define __API_SYSCBX_H

#include "api_syscb.h"

class SysCallback;



// ----------------------------------------------------------------------------

class api_syscbX : public api_syscb {
  protected:
    api_syscbX() {}
  public:
    virtual int syscb_registerCallback(SysCallback *cb, void *param = NULL)=0;
    virtual int syscb_deregisterCallback(SysCallback *cb)=0;
    virtual int syscb_issueCallback(int eventtype, int msg, intptr_t p1=0, intptr_t p2=0)=0;
  
  protected:
    RECVS_DISPATCH;
};

#endif // __API_SYSCBX_H
