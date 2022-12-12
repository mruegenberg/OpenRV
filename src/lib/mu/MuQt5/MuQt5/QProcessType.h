//
// Copyright (c) 2009, Jim Hourihan
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0 
// 
#ifndef __MuQt5__QProcessType__h__
#define __MuQt5__QProcessType__h__
#include <iostream>
#include <Mu/Class.h>
#include <Mu/MuProcess.h>
#include <QtCore/QtCore>
#include <QtGui/QtGui>
#include <QtWidgets/QtWidgets>
#include <QtNetwork/QtNetwork>
#include <QtWebEngine/QtWebEngine>
#include <QtWebEngineWidgets/QtWebEngineWidgets>
#include <QtQml/QtQml>
#include <QtQuick/QtQuick>
#include <QtQuickWidgets/QtQuickWidgets>
#include <QtSvg/QtSvg>
#include <MuQt5/Bridge.h>

namespace Mu {
class MuQt_QProcess;

//
//  NOTE: file generated by qt2mu.py
//

class QProcessType : public Class
{
  public:

    typedef MuQt_QProcess MuQtType;
    typedef QProcess QtType;

    //
    //  Constructors
    //

    QProcessType(Context* context, 
           const char* name,
           Class* superClass = 0,
           Class* superClass2 = 0);

    virtual ~QProcessType();

    static bool isInheritable() { return true; }
    static inline ClassInstance* cachedInstance(const MuQtType*);

    //
    //  Class API
    //

    virtual void load();

    MemberFunction* _func[14];
};

// Inheritable object

class MuQt_QProcess : public QProcess
{
  public:
    virtual ~MuQt_QProcess();
    MuQt_QProcess(Pointer muobj, const CallEnvironment*, QObject * parent) ;
    virtual bool atEnd() const;
    virtual qint64 bytesAvailable() const;
    virtual qint64 bytesToWrite() const;
    virtual bool canReadLine() const;
    virtual void close() ;
    virtual bool isSequential() const;
    virtual bool open(OpenMode mode) ;
    virtual bool waitForBytesWritten(int msecs) ;
    virtual bool waitForReadyRead(int msecs) ;
  protected:
    virtual void setupChildProcess() ;
  public:
    virtual qint64 pos() const;
    virtual bool reset() ;
    virtual bool seek(qint64 pos) ;
    virtual qint64 size() const;
  public:
    void setProcessState_pub(QProcess::ProcessState state)  { setProcessState(state); }
    void setProcessState_pub_parent(QProcess::ProcessState state)  { QProcess::setProcessState(state); }
    void setupChildProcess_pub()  { setupChildProcess(); }
    void setupChildProcess_pub_parent()  { QProcess::setupChildProcess(); }
  public:
    const QProcessType* _baseType;
    ClassInstance* _obj;
    const CallEnvironment* _env;
};

inline ClassInstance* QProcessType::cachedInstance(const QProcessType::MuQtType* obj) { return obj->_obj; }

} // Mu

#endif // __MuQt__QProcessType__h__