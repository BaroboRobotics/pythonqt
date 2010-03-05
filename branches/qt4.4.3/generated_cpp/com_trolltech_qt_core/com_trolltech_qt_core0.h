#include <PythonQt.h>
#include <QDateTime>
#include <QDir>
#include <QNoImplicitBoolCast>
#include <QObject>
#include <QSize>
#include <QStringList>
#include <QUrl>
#include <QVarLengthArray>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbasictimer.h>
#include <qbuffer.h>
#include <qbytearray.h>
#include <qbytearraymatcher.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcryptographichash.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdir.h>
#include <qdiriterator.h>
#include <qeventloop.h>
#include <qfile.h>
#include <qfileinfo.h>
#include <qfilesystemwatcher.h>
#include <qiodevice.h>
#include <qlibraryinfo.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qmutex.h>
#include <qobject.h>
#include <qprocess.h>
#include <qrunnable.h>
#include <qsemaphore.h>
#include <qsettings.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qtranslator.h>
#include <qurl.h>



class PythonQtShell_QAbstractItemModel : public QAbstractItemModel
{
public:
    PythonQtShell_QAbstractItemModel(QObject*  parent = 0):QAbstractItemModel(parent),_wrapper(NULL) {};

virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
virtual QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const;
virtual QModelIndex  parent(const QModelIndex&  child) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual QSize  span(const QModelIndex&  index) const;
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual Qt::DropActions  supportedDropActions() const;
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
virtual void fetchMore(const QModelIndex&  parent);
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex());
virtual bool  submit();
virtual void revert();
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual bool  hasChildren(const QModelIndex&  parent = QModelIndex()) const;
virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual int  columnCount(const QModelIndex&  parent = QModelIndex()) const;
virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual QStringList  mimeTypes() const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractItemModel : public QAbstractItemModel
{ public:
inline QMap<int , QVariant >  promoted_itemData(const QModelIndex&  index) const { return QAbstractItemModel::itemData(index); }
inline bool  promoted_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::insertRows(row, count, parent); }
inline QVariant  promoted_headerData(int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const { return QAbstractItemModel::headerData(section, orientation, role); }
inline QList<QModelIndex >  promoted_match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const { return QAbstractItemModel::match(start, role, value, hits, flags); }
inline bool  promoted_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractItemModel::dropMimeData(data, action, row, column, parent); }
inline QMimeData*  promoted_mimeData(const QList<QModelIndex >&  indexes) const { return QAbstractItemModel::mimeData(indexes); }
inline QSize  promoted_span(const QModelIndex&  index) const { return QAbstractItemModel::span(index); }
inline bool  promoted_removeColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::removeColumns(column, count, parent); }
inline bool  promoted_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QAbstractItemModel::setItemData(index, roles); }
inline Qt::ItemFlags  promoted_flags(const QModelIndex&  index) const { return QAbstractItemModel::flags(index); }
inline void promoted_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QAbstractItemModel::sort(column, order); }
inline Qt::DropActions  promoted_supportedDropActions() const { return QAbstractItemModel::supportedDropActions(); }
inline bool  promoted_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::removeRows(row, count, parent); }
inline bool  promoted_setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractItemModel::setHeaderData(section, orientation, value, role); }
inline void promoted_fetchMore(const QModelIndex&  parent) { QAbstractItemModel::fetchMore(parent); }
inline bool  promoted_insertColumns(int  column, int  count, const QModelIndex&  parent = QModelIndex()) { return QAbstractItemModel::insertColumns(column, count, parent); }
inline bool  promoted_submit() { return QAbstractItemModel::submit(); }
inline void promoted_revert() { QAbstractItemModel::revert(); }
inline bool  promoted_canFetchMore(const QModelIndex&  parent) const { return QAbstractItemModel::canFetchMore(parent); }
inline bool  promoted_hasChildren(const QModelIndex&  parent = QModelIndex()) const { return QAbstractItemModel::hasChildren(parent); }
inline QModelIndex  promoted_buddy(const QModelIndex&  index) const { return QAbstractItemModel::buddy(index); }
inline QStringList  promoted_mimeTypes() const { return QAbstractItemModel::mimeTypes(); }
inline bool  promoted_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QAbstractItemModel::setData(index, value, role); }
};

class PythonQtWrapper_QAbstractItemModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractItemModel* new_QAbstractItemModel(QObject*  parent = 0);
void delete_QAbstractItemModel(QAbstractItemModel* obj) { delete obj; } 
   QMap<int , QVariant >  itemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   bool  insertRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   bool  hasIndex(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   bool  insertColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex());
   QVariant  headerData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, int  role = Qt::DisplayRole) const;
   QList<QModelIndex >  match(QAbstractItemModel* theWrappedObject, const QModelIndex&  start, int  role, const QVariant&  value, int  hits = 1, Qt::MatchFlags  flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const;
   bool  dropMimeData(QAbstractItemModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   QMimeData*  mimeData(QAbstractItemModel* theWrappedObject, const QList<QModelIndex >&  indexes) const;
   QObject*  parent(QAbstractItemModel* theWrappedObject) const;
   QSize  span(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   bool  removeColumn(QAbstractItemModel* theWrappedObject, int  column, const QModelIndex&  parent = QModelIndex());
   bool  insertRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex());
   bool  removeColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  setItemData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles);
   Qt::ItemFlags  flags(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   Qt::DropActions  supportedDragActions(QAbstractItemModel* theWrappedObject) const;
   void sort(QAbstractItemModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   Qt::DropActions  supportedDropActions(QAbstractItemModel* theWrappedObject) const;
   bool  removeRows(QAbstractItemModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   bool  setHeaderData(QAbstractItemModel* theWrappedObject, int  section, Qt::Orientation  orientation, const QVariant&  value, int  role = Qt::EditRole);
   void fetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent);
   QModelIndex  sibling(QAbstractItemModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const;
   bool  insertColumns(QAbstractItemModel* theWrappedObject, int  column, int  count, const QModelIndex&  parent = QModelIndex());
   bool  canFetchMore(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent) const;
   bool  hasChildren(QAbstractItemModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   QModelIndex  buddy(QAbstractItemModel* theWrappedObject, const QModelIndex&  index) const;
   bool  removeRow(QAbstractItemModel* theWrappedObject, int  row, const QModelIndex&  parent = QModelIndex());
   void setSupportedDragActions(QAbstractItemModel* theWrappedObject, Qt::DropActions  arg__1);
   QStringList  mimeTypes(QAbstractItemModel* theWrappedObject) const;
   bool  setData(QAbstractItemModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
};





class PythonQtShell_QAbstractListModel : public QAbstractListModel
{
public:
    PythonQtShell_QAbstractListModel(QObject*  parent = 0):QAbstractListModel(parent),_wrapper(NULL) {};

virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual QModelIndex  index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent);
virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent);
virtual QSize  span(const QModelIndex&  index) const;
virtual void sort(int  column, Qt::SortOrder  order);
virtual int  rowCount(const QModelIndex&  parent) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual QStringList  mimeTypes() const;
virtual QVariant  data(const QModelIndex&  index, int  role) const;
virtual bool  submit();
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent);
virtual Qt::DropActions  supportedDropActions() const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role);
virtual void revert();
virtual void fetchMore(const QModelIndex&  parent);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void customEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractListModel : public QAbstractListModel
{ public:
inline bool  promoted_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractListModel::dropMimeData(data, action, row, column, parent); }
inline QModelIndex  promoted_index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const { return QAbstractListModel::index(row, column, parent); }
};

class PythonQtWrapper_QAbstractListModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractListModel* new_QAbstractListModel(QObject*  parent = 0);
void delete_QAbstractListModel(QAbstractListModel* obj) { delete obj; } 
   bool  dropMimeData(QAbstractListModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
   QModelIndex  index(QAbstractListModel* theWrappedObject, int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const;
};





class PythonQtShell_QAbstractTableModel : public QAbstractTableModel
{
public:
    PythonQtShell_QAbstractTableModel(QObject*  parent = 0):QAbstractTableModel(parent),_wrapper(NULL) {};

virtual QModelIndex  index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual QModelIndex  buddy(const QModelIndex&  index) const;
virtual bool  insertColumns(int  column, int  count, const QModelIndex&  parent);
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual bool  removeColumns(int  column, int  count, const QModelIndex&  parent);
virtual QSize  span(const QModelIndex&  index) const;
virtual void sort(int  column, Qt::SortOrder  order);
virtual int  rowCount(const QModelIndex&  parent) const;
virtual QVariant  headerData(int  section, Qt::Orientation  orientation, int  role) const;
virtual bool  canFetchMore(const QModelIndex&  parent) const;
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual QStringList  mimeTypes() const;
virtual QVariant  data(const QModelIndex&  index, int  role) const;
virtual bool  submit();
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent);
virtual bool  setHeaderData(int  section, Qt::Orientation  orientation, const QVariant&  value, int  role);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QMimeData*  mimeData(const QList<QModelIndex >&  indexes) const;
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent);
virtual int  columnCount(const QModelIndex&  parent) const;
virtual Qt::DropActions  supportedDropActions() const;
virtual QList<QModelIndex >  match(const QModelIndex&  start, int  role, const QVariant&  value, int  hits, Qt::MatchFlags  flags) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role);
virtual void revert();
virtual void fetchMore(const QModelIndex&  parent);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void customEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractTableModel : public QAbstractTableModel
{ public:
inline QModelIndex  promoted_index(int  row, int  column, const QModelIndex&  parent = QModelIndex()) const { return QAbstractTableModel::index(row, column, parent); }
inline bool  promoted_dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent) { return QAbstractTableModel::dropMimeData(data, action, row, column, parent); }
};

class PythonQtWrapper_QAbstractTableModel : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractTableModel* new_QAbstractTableModel(QObject*  parent = 0);
void delete_QAbstractTableModel(QAbstractTableModel* obj) { delete obj; } 
   QModelIndex  index(QAbstractTableModel* theWrappedObject, int  row, int  column, const QModelIndex&  parent = QModelIndex()) const;
   bool  dropMimeData(QAbstractTableModel* theWrappedObject, const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
};





class PythonQtWrapper_QBasicTimer : public QObject
{ Q_OBJECT
public:
public slots:
QBasicTimer* new_QBasicTimer();
QBasicTimer* new_QBasicTimer(const QBasicTimer& other) {
QBasicTimer* a = new QBasicTimer();
*((QBasicTimer*)a) = other;
return a; }
void delete_QBasicTimer(QBasicTimer* obj) { delete obj; } 
   void stop(QBasicTimer* theWrappedObject);
   bool  isActive(QBasicTimer* theWrappedObject) const;
   int  timerId(QBasicTimer* theWrappedObject) const;
   void start(QBasicTimer* theWrappedObject, int  msec, QObject*  obj);
};





class PythonQtShell_QBuffer : public QBuffer
{
public:
    PythonQtShell_QBuffer(QByteArray*  buf, QObject*  parent = 0):QBuffer(buf, parent),_wrapper(NULL) {};
    PythonQtShell_QBuffer(QObject*  parent = 0):QBuffer(parent),_wrapper(NULL) {};

virtual bool  open(QIODevice::OpenMode  openMode);
virtual qint64  pos() const;
virtual bool  seek(qint64  off);
virtual void close();
virtual qint64  size() const;
virtual bool  canReadLine() const;
virtual qint64  writeData(const char*  data, qint64  len);
virtual bool  atEnd() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  waitForBytesWritten(int  msecs);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  waitForReadyRead(int  msecs);
virtual bool  isSequential() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QBuffer : public QBuffer
{ public:
inline bool  promoted_open(QIODevice::OpenMode  openMode) { return QBuffer::open(openMode); }
inline qint64  promoted_pos() const { return QBuffer::pos(); }
inline bool  promoted_seek(qint64  off) { return QBuffer::seek(off); }
inline void promoted_close() { QBuffer::close(); }
inline qint64  promoted_size() const { return QBuffer::size(); }
inline bool  promoted_canReadLine() const { return QBuffer::canReadLine(); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QBuffer::writeData(data, len); }
inline bool  promoted_atEnd() const { return QBuffer::atEnd(); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QBuffer::readData(data, maxlen); }
};

class PythonQtWrapper_QBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QBuffer* new_QBuffer(QByteArray*  buf, QObject*  parent = 0);
QBuffer* new_QBuffer(QObject*  parent = 0);
void delete_QBuffer(QBuffer* obj) { delete obj; } 
   bool  open(QBuffer* theWrappedObject, QIODevice::OpenMode  openMode);
   qint64  pos(QBuffer* theWrappedObject) const;
   bool  seek(QBuffer* theWrappedObject, qint64  off);
   void setData(QBuffer* theWrappedObject, const QByteArray&  data);
   void close(QBuffer* theWrappedObject);
   void setBuffer(QBuffer* theWrappedObject, QByteArray*  a);
   qint64  size(QBuffer* theWrappedObject) const;
   bool  canReadLine(QBuffer* theWrappedObject) const;
   qint64  writeData(QBuffer* theWrappedObject, const char*  data, qint64  len);
   bool  atEnd(QBuffer* theWrappedObject) const;
   qint64  readData(QBuffer* theWrappedObject, char*  data, qint64  maxlen);
};





class PythonQtWrapper_QByteArray : public QObject
{ Q_OBJECT
public:
public slots:
QByteArray* new_QByteArray();
QByteArray* new_QByteArray(const QByteArray&  arg__1);
QByteArray* new_QByteArray(const char*  arg__1);
QByteArray* new_QByteArray(int  size, char  c);
void delete_QByteArray(QByteArray* obj) { delete obj; } 
   QByteArray*  setNum(QByteArray* theWrappedObject, short  arg__1, int  base = 10);
   QByteArray  static_QByteArray_fromHex(const QByteArray&  hexEncoded);
   QByteArray  static_QByteArray_number(qlonglong  arg__1, int  base = 10);
   QByteArray*  insert(QByteArray* theWrappedObject, int  i, const QString&  s);
   QBool  contains(QByteArray* theWrappedObject, const char*  a) const;
   QByteArray  toUpper(QByteArray* theWrappedObject) const;
   QByteArray*  remove(QByteArray* theWrappedObject, int  index, int  len);
   QByteArray  toHex(QByteArray* theWrappedObject) const;
   QList<QByteArray >  split(QByteArray* theWrappedObject, char  sep) const;
   QByteArray*  replace(QByteArray* theWrappedObject, const QString&  before, const QByteArray&  after);
   QByteArray*  replace(QByteArray* theWrappedObject, char  c, const QString&  after);
   QByteArray*  replace(QByteArray* theWrappedObject, char  before, char  after);
   QByteArray*  append(QByteArray* theWrappedObject, const QByteArray&  a);
   QByteArray*  append(QByteArray* theWrappedObject, const QString&  s);
   QByteArray*  replace(QByteArray* theWrappedObject, const QByteArray&  before, const QByteArray&  after);
   QByteArray*  replace(QByteArray* theWrappedObject, char  before, const QByteArray&  after);
   QByteArray  toPercentEncoding(QByteArray* theWrappedObject, const QByteArray&  exclude = QByteArray(), const QByteArray&  include = QByteArray(), char  percent = '%') const;
   int  count(QByteArray* theWrappedObject, char  c) const;
   QByteArray  rightJustified(QByteArray* theWrappedObject, int  width, char  fill = ' ', bool  truncate = false) const;
   void reserve(QByteArray* theWrappedObject, int  size);
   QByteArray*  replace(QByteArray* theWrappedObject, int  index, int  len, const QByteArray&  s);
   int  indexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from = 0) const;
   int  indexOf(QByteArray* theWrappedObject, const QString&  s, int  from = 0) const;
   int  indexOf(QByteArray* theWrappedObject, char  c, int  from = 0) const;
   double  toDouble(QByteArray* theWrappedObject, bool*  ok = 0) const;
   int  capacity(QByteArray* theWrappedObject) const;
   int  lastIndexOf(QByteArray* theWrappedObject, char  c, int  from = -1) const;
   int  count(QByteArray* theWrappedObject, const QByteArray&  a) const;
   int  lastIndexOf(QByteArray* theWrappedObject, const QString&  s, int  from = -1) const;
   int  lastIndexOf(QByteArray* theWrappedObject, const QByteArray&  a, int  from = -1) const;
   bool  isEmpty(QByteArray* theWrappedObject) const;
   int  toInt(QByteArray* theWrappedObject, bool*  ok = 0, int  base = 10) const;
   QByteArray*  append(QByteArray* theWrappedObject, char  c);
   ushort  toUShort(QByteArray* theWrappedObject, bool*  ok = 0, int  base = 10) const;
   QByteArray  static_QByteArray_fromPercentEncoding(const QByteArray&  pctEncoded, char  percent = '%');
   QByteArray  mid(QByteArray* theWrappedObject, int  index, int  len = -1) const;
   char  at(QByteArray* theWrappedObject, int  i) const;
   bool  operator_equal(QByteArray* theWrappedObject, const QString&  s2) const;
   float  toFloat(QByteArray* theWrappedObject, bool*  ok = 0) const;
   QByteArray  right(QByteArray* theWrappedObject, int  len) const;
   int  size(QByteArray* theWrappedObject) const;
   QByteArray*  fill(QByteArray* theWrappedObject, char  c, int  size = -1);
   int  length(QByteArray* theWrappedObject) const;
   QByteArray  trimmed(QByteArray* theWrappedObject) const;
   QByteArray*  setNum(QByteArray* theWrappedObject, qlonglong  arg__1, int  base = 10);
   bool  startsWith(QByteArray* theWrappedObject, const QByteArray&  a) const;
   bool  startsWith(QByteArray* theWrappedObject, char  c) const;
   QByteArray  static_QByteArray_fromBase64(const QByteArray&  base64);
   QByteArray*  setNum(QByteArray* theWrappedObject, double  arg__1, char  f = 'g', int  prec = 6);
   QByteArray*  prepend(QByteArray* theWrappedObject, char  c);
   QByteArray  left(QByteArray* theWrappedObject, int  len) const;
   void squeeze(QByteArray* theWrappedObject);
   QByteArray*  prepend(QByteArray* theWrappedObject, const QByteArray&  a);
   QByteArray*  setNum(QByteArray* theWrappedObject, float  arg__1, char  f = 'g', int  prec = 6);
   QByteArray*  setNum(QByteArray* theWrappedObject, int  arg__1, int  base = 10);
   bool  isNull(QByteArray* theWrappedObject) const;
   bool  operator_less(QByteArray* theWrappedObject, const QString&  s2) const;
   QByteArray*  operator_assign(QByteArray* theWrappedObject, const QByteArray&  arg__1);
   QByteArray  simplified(QByteArray* theWrappedObject) const;
   QByteArray  static_QByteArray_number(double  arg__1, char  f = 'g', int  prec = 6);
   QByteArray  leftJustified(QByteArray* theWrappedObject, int  width, char  fill = ' ', bool  truncate = false) const;
   void chop(QByteArray* theWrappedObject, int  n);
   void clear(QByteArray* theWrappedObject);
   QByteArray  static_QByteArray_number(int  arg__1, int  base = 10);
   QByteArray  toBase64(QByteArray* theWrappedObject) const;
   QByteArray  toLower(QByteArray* theWrappedObject) const;
   void resize(QByteArray* theWrappedObject, int  size);
   void truncate(QByteArray* theWrappedObject, int  pos);
   QBool  contains(QByteArray* theWrappedObject, const QByteArray&  a) const;
   bool  endsWith(QByteArray* theWrappedObject, char  c) const;
   bool  endsWith(QByteArray* theWrappedObject, const QByteArray&  a) const;
   QBool  contains(QByteArray* theWrappedObject, char  c) const;
   QByteArray*  insert(QByteArray* theWrappedObject, int  i, const QByteArray&  a);
   QByteArray*  insert(QByteArray* theWrappedObject, int  i, char  c);
   bool  operator_less(QByteArray* theWrappedObject, const QByteArray&  a2);
   const QByteArray  __add__(QByteArray* theWrappedObject, char  a2);
   const QByteArray  __add__(QByteArray* theWrappedObject, const QByteArray&  a2);
   const QByteArray  __add__(QByteArray* theWrappedObject, const char*  a2);
   bool  operator_equal(QByteArray* theWrappedObject, const QByteArray&  a2);
   const QString  __add__(QByteArray* theWrappedObject, const QString&  s);
   void writeTo(QByteArray* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QByteArray* theWrappedObject, QDataStream&  arg__1);
};





class PythonQtWrapper_QByteArrayMatcher : public QObject
{ Q_OBJECT
public:
public slots:
QByteArrayMatcher* new_QByteArrayMatcher();
QByteArrayMatcher* new_QByteArrayMatcher(const QByteArray&  pattern);
QByteArrayMatcher* new_QByteArrayMatcher(const QByteArrayMatcher&  other);
void delete_QByteArrayMatcher(QByteArrayMatcher* obj) { delete obj; } 
   int  indexIn(QByteArrayMatcher* theWrappedObject, const QByteArray&  ba, int  from = 0) const;
   QByteArray  pattern(QByteArrayMatcher* theWrappedObject) const;
   void setPattern(QByteArrayMatcher* theWrappedObject, const QByteArray&  pattern);
};





class PythonQtShell_QChildEvent : public QChildEvent
{
public:
    PythonQtShell_QChildEvent(QEvent::Type  type, QObject*  child):QChildEvent(type, child),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QChildEvent : public QObject
{ Q_OBJECT
public:
public slots:
QChildEvent* new_QChildEvent(QEvent::Type  type, QObject*  child);
void delete_QChildEvent(QChildEvent* obj) { delete obj; } 
   bool  added(QChildEvent* theWrappedObject) const;
   bool  polished(QChildEvent* theWrappedObject) const;
   QObject*  child(QChildEvent* theWrappedObject) const;
   bool  removed(QChildEvent* theWrappedObject) const;
};





class PythonQtShell_QCoreApplication : public QCoreApplication
{
public:

virtual bool  notify(QObject*  arg__1, QEvent*  arg__2);
virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCoreApplication : public QCoreApplication
{ public:
inline bool  promoted_notify(QObject*  arg__1, QEvent*  arg__2) { return QCoreApplication::notify(arg__1, arg__2); }
inline bool  promoted_event(QEvent*  arg__1) { return QCoreApplication::event(arg__1); }
};

class PythonQtWrapper_QCoreApplication : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Encoding )
enum Encoding{
  CodecForTr = QCoreApplication::CodecForTr,   UnicodeUTF8 = QCoreApplication::UnicodeUTF8,   DefaultCodec = QCoreApplication::DefaultCodec};
public slots:
void delete_QCoreApplication(QCoreApplication* obj) { delete obj; } 
   void static_QCoreApplication_setApplicationName(const QString&  application);
   QCoreApplication*  static_QCoreApplication_instance();
   void static_QCoreApplication_exit(int  retcode = 0);
   bool  static_QCoreApplication_closingDown();
   void static_QCoreApplication_flush();
   void static_QCoreApplication_setOrganizationName(const QString&  orgName);
   qint64  static_QCoreApplication_applicationPid();
   void static_QCoreApplication_setAttribute(Qt::ApplicationAttribute  attribute, bool  on = true);
   int  static_QCoreApplication_exec();
   QString  static_QCoreApplication_applicationFilePath();
   QString  static_QCoreApplication_translate(const char*  context, const char*  key, const char*  comment = 0, QCoreApplication::Encoding  encoding = QCoreApplication::CodecForTr);
   QString  static_QCoreApplication_translate(const char*  context, const char*  key, const char*  comment, QCoreApplication::Encoding  encoding, int  n);
   bool  static_QCoreApplication_startingUp();
   bool  static_QCoreApplication_hasPendingEvents();
   void static_QCoreApplication_setLibraryPaths(const QStringList&  arg__1);
   QString  static_QCoreApplication_applicationVersion();
   void static_QCoreApplication_addLibraryPath(const QString&  arg__1);
   void static_QCoreApplication_postEvent(QObject*  receiver, QEvent*  event, int  priority);
   void static_QCoreApplication_sendPostedEvents(QObject*  receiver, int  event_type);
   bool  static_QCoreApplication_sendEvent(QObject*  receiver, QEvent*  event);
   QString  static_QCoreApplication_organizationDomain();
   void static_QCoreApplication_sendPostedEvents();
   QStringList  static_QCoreApplication_libraryPaths();
   bool  notify(QCoreApplication* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void static_QCoreApplication_removePostedEvents(QObject*  receiver);
   void static_QCoreApplication_removePostedEvents(QObject*  receiver, int  eventType);
   void static_QCoreApplication_removeLibraryPath(const QString&  arg__1);
   QString  static_QCoreApplication_organizationName();
   void static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void static_QCoreApplication_setOrganizationDomain(const QString&  orgDomain);
   void static_QCoreApplication_processEvents(QEventLoop::ProcessEventsFlags  flags, int  maxtime);
   void static_QCoreApplication_removeTranslator(QTranslator*  messageFile);
   bool  static_QCoreApplication_testAttribute(Qt::ApplicationAttribute  attribute);
   void static_QCoreApplication_installTranslator(QTranslator*  messageFile);
   void static_QCoreApplication_postEvent(QObject*  receiver, QEvent*  event);
   void static_QCoreApplication_setApplicationVersion(const QString&  version);
   QString  static_QCoreApplication_applicationName();
   QString  static_QCoreApplication_applicationDirPath();
   bool  event(QCoreApplication* theWrappedObject, QEvent*  arg__1);
};





class PythonQtWrapper_QCryptographicHash : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Algorithm )
enum Algorithm{
  Md4 = QCryptographicHash::Md4,   Md5 = QCryptographicHash::Md5,   Sha1 = QCryptographicHash::Sha1};
public slots:
QCryptographicHash* new_QCryptographicHash(QCryptographicHash::Algorithm  method);
void delete_QCryptographicHash(QCryptographicHash* obj) { delete obj; } 
   void reset(QCryptographicHash* theWrappedObject);
   QByteArray  result(QCryptographicHash* theWrappedObject) const;
   void addData(QCryptographicHash* theWrappedObject, const QByteArray&  data);
   QByteArray  static_QCryptographicHash_hash(const QByteArray&  data, QCryptographicHash::Algorithm  method);
};





class PythonQtShell_QDataStream : public QDataStream
{
public:
    PythonQtShell_QDataStream():QDataStream(),_wrapper(NULL) {};
    PythonQtShell_QDataStream(QByteArray*  arg__1, QIODevice::OpenMode  flags):QDataStream(arg__1, flags),_wrapper(NULL) {};
    PythonQtShell_QDataStream(QIODevice*  arg__1):QDataStream(arg__1),_wrapper(NULL) {};
    PythonQtShell_QDataStream(const QByteArray&  arg__1):QDataStream(arg__1),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDataStream : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Version Status )
enum Version{
  Qt_1_0 = QDataStream::Qt_1_0,   Qt_2_0 = QDataStream::Qt_2_0,   Qt_2_1 = QDataStream::Qt_2_1,   Qt_3_0 = QDataStream::Qt_3_0,   Qt_3_1 = QDataStream::Qt_3_1,   Qt_3_3 = QDataStream::Qt_3_3,   Qt_4_0 = QDataStream::Qt_4_0,   Qt_4_1 = QDataStream::Qt_4_1,   Qt_4_2 = QDataStream::Qt_4_2,   Qt_4_3 = QDataStream::Qt_4_3,   Qt_4_4 = QDataStream::Qt_4_4};
enum Status{
  Ok = QDataStream::Ok,   ReadPastEnd = QDataStream::ReadPastEnd,   ReadCorruptData = QDataStream::ReadCorruptData};
public slots:
QDataStream* new_QDataStream();
QDataStream* new_QDataStream(QByteArray*  arg__1, QIODevice::OpenMode  flags);
QDataStream* new_QDataStream(QIODevice*  arg__1);
QDataStream* new_QDataStream(const QByteArray&  arg__1);
void delete_QDataStream(QDataStream* obj) { delete obj; } 
   int  skipRawData(QDataStream* theWrappedObject, int  len);
   QIODevice*  device(QDataStream* theWrappedObject) const;
   void resetStatus(QDataStream* theWrappedObject);
   QDataStream*  readDouble(QDataStream* theWrappedObject, double&  f);
   QDataStream*  readFloat(QDataStream* theWrappedObject, float&  f);
   QDataStream*  readBoolean(QDataStream* theWrappedObject, bool&  i);
   QDataStream*  readULongLong(QDataStream* theWrappedObject, quint64&  i);
   QDataStream*  readUInt(QDataStream* theWrappedObject, unsigned int&  i);
   QDataStream*  readLongLong(QDataStream* theWrappedObject, qint64&  i);
   QDataStream*  readInt(QDataStream* theWrappedObject, int&  i);
   QDataStream*  writeFloat(QDataStream* theWrappedObject, float  f);
   QDataStream*  readUShort(QDataStream* theWrappedObject, unsigned short&  i);
   QDataStream*  readByte(QDataStream* theWrappedObject, unsigned char&  i);
   QDataStream*  readShort(QDataStream* theWrappedObject, short&  i);
   QDataStream*  writeDouble(QDataStream* theWrappedObject, double  f);
   QDataStream*  writeBoolean(QDataStream* theWrappedObject, bool  i);
   QDataStream*  writeLongLong(QDataStream* theWrappedObject, qint64  i);
   bool  atEnd(QDataStream* theWrappedObject) const;
   QDataStream*  writeInt(QDataStream* theWrappedObject, int  i);
   QDataStream*  writeShort(QDataStream* theWrappedObject, short  i);
   void unsetDevice(QDataStream* theWrappedObject);
   QDataStream*  writeByte(QDataStream* theWrappedObject, unsigned char  i);
   QDataStream::Status  status(QDataStream* theWrappedObject) const;
   void setVersion(QDataStream* theWrappedObject, int  arg__1);
   void setStatus(QDataStream* theWrappedObject, QDataStream::Status  status);
   int  version(QDataStream* theWrappedObject) const;
   void setDevice(QDataStream* theWrappedObject, QIODevice*  arg__1);
};





class PythonQtWrapper_QDir : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Filter SortFlag )
Q_FLAGS(Filters SortFlags )
enum Filter{
  Dirs = QDir::Dirs,   Files = QDir::Files,   Drives = QDir::Drives,   NoSymLinks = QDir::NoSymLinks,   AllEntries = QDir::AllEntries,   TypeMask = QDir::TypeMask,   Readable = QDir::Readable,   Writable = QDir::Writable,   Executable = QDir::Executable,   PermissionMask = QDir::PermissionMask,   Modified = QDir::Modified,   Hidden = QDir::Hidden,   System = QDir::System,   AccessMask = QDir::AccessMask,   AllDirs = QDir::AllDirs,   CaseSensitive = QDir::CaseSensitive,   NoDotAndDotDot = QDir::NoDotAndDotDot,   NoFilter = QDir::NoFilter};
enum SortFlag{
  Name = QDir::Name,   Time = QDir::Time,   Size = QDir::Size,   Unsorted = QDir::Unsorted,   SortByMask = QDir::SortByMask,   DirsFirst = QDir::DirsFirst,   Reversed = QDir::Reversed,   IgnoreCase = QDir::IgnoreCase,   DirsLast = QDir::DirsLast,   LocaleAware = QDir::LocaleAware,   Type = QDir::Type,   NoSort = QDir::NoSort};
Q_DECLARE_FLAGS(Filters, Filter)
Q_DECLARE_FLAGS(SortFlags, SortFlag)
public slots:
QDir* new_QDir(const QDir&  arg__1);
QDir* new_QDir(const QString&  path = QString());
QDir* new_QDir(const QString&  path, const QString&  nameFilter, QDir::SortFlags  sort = QDir::SortFlags(Name | IgnoreCase), QDir::Filters  filter = QDir::AllEntries);
void delete_QDir(QDir* obj) { delete obj; } 
   QList<QFileInfo >  static_QDir_drives();
   bool  makeAbsolute(QDir* theWrappedObject);
   QStringList  entryList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   bool  operator_equal(QDir* theWrappedObject, const QDir&  dir) const;
   bool  static_QDir_isAbsolutePath(const QString&  path);
   bool  remove(QDir* theWrappedObject, const QString&  fileName);
   QString  static_QDir_toNativeSeparators(const QString&  pathName);
   QString  static_QDir_cleanPath(const QString&  path);
   bool  rename(QDir* theWrappedObject, const QString&  oldName, const QString&  newName);
   void static_QDir_addSearchPath(const QString&  prefix, const QString&  path);
   QList<QFileInfo >  entryInfoList(QDir* theWrappedObject, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QList<QFileInfo >  entryInfoList(QDir* theWrappedObject, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QDir::Filters  filter(QDir* theWrappedObject) const;
   bool  cdUp(QDir* theWrappedObject);
   bool  mkpath(QDir* theWrappedObject, const QString&  dirPath) const;
   bool  static_QDir_isRelativePath(const QString&  path);
   QString  relativeFilePath(QDir* theWrappedObject, const QString&  fileName) const;
   QStringList  static_QDir_nameFiltersFromString(const QString&  nameFilter);
   QString  dirName(QDir* theWrappedObject) const;
   QString  canonicalPath(QDir* theWrappedObject) const;
   QString  static_QDir_tempPath();
   void setPath(QDir* theWrappedObject, const QString&  path);
   void setNameFilters(QDir* theWrappedObject, const QStringList&  nameFilters);
   void setFilter(QDir* theWrappedObject, QDir::Filters  filter);
   bool  isReadable(QDir* theWrappedObject) const;
   bool  static_QDir_setCurrent(const QString&  path);
   void refresh(QDir* theWrappedObject) const;
   QString  static_QDir_rootPath();
   void setSorting(QDir* theWrappedObject, QDir::SortFlags  sort);
   QStringList  nameFilters(QDir* theWrappedObject) const;
   QString  static_QDir_fromNativeSeparators(const QString&  pathName);
   QString  absolutePath(QDir* theWrappedObject) const;
   bool  isRoot(QDir* theWrappedObject) const;
   bool  static_QDir_match(const QString&  filter, const QString&  fileName);
   bool  static_QDir_match(const QStringList&  filters, const QString&  fileName);
   QString  path(QDir* theWrappedObject) const;
   QDir  static_QDir_current();
   QString  static_QDir_currentPath();
   QString  operator_subscript(QDir* theWrappedObject, int  arg__1) const;
   void static_QDir_setSearchPaths(const QString&  prefix, const QStringList&  searchPaths);
   QDir  static_QDir_temp();
   bool  rmpath(QDir* theWrappedObject, const QString&  dirPath) const;
   bool  rmdir(QDir* theWrappedObject, const QString&  dirName) const;
   QDir::SortFlags  sorting(QDir* theWrappedObject) const;
   uint  count(QDir* theWrappedObject) const;
   QDir  static_QDir_root();
   bool  mkdir(QDir* theWrappedObject, const QString&  dirName) const;
   QStringList  entryList(QDir* theWrappedObject, QDir::Filters  filters = QDir::NoFilter, QDir::SortFlags  sort = QDir::NoSort) const;
   QStringList  static_QDir_searchPaths(const QString&  prefix);
   bool  isAbsolute(QDir* theWrappedObject) const;
   QString  static_QDir_convertSeparators(const QString&  pathName);
   QChar  static_QDir_separator();
   bool  isRelative(QDir* theWrappedObject) const;
   QDir  static_QDir_home();
   bool  cd(QDir* theWrappedObject, const QString&  dirName);
   QString  absoluteFilePath(QDir* theWrappedObject, const QString&  fileName) const;
   bool  exists(QDir* theWrappedObject, const QString&  name) const;
   bool  exists(QDir* theWrappedObject) const;
   QString  filePath(QDir* theWrappedObject, const QString&  fileName) const;
   QString  static_QDir_homePath();
    QString toString(QDir*);
};





class PythonQtShell_QDirIterator : public QDirIterator
{
public:
    PythonQtShell_QDirIterator(const QDir&  dir, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags):QDirIterator(dir, flags),_wrapper(NULL) {};
    PythonQtShell_QDirIterator(const QString&  path, QDir::Filters  filter, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags):QDirIterator(path, filter, flags),_wrapper(NULL) {};
    PythonQtShell_QDirIterator(const QString&  path, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags):QDirIterator(path, flags),_wrapper(NULL) {};
    PythonQtShell_QDirIterator(const QString&  path, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags):QDirIterator(path, nameFilters, filters, flags),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDirIterator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(IteratorFlag )
Q_FLAGS(IteratorFlags )
enum IteratorFlag{
  NoIteratorFlags = QDirIterator::NoIteratorFlags,   FollowSymlinks = QDirIterator::FollowSymlinks,   Subdirectories = QDirIterator::Subdirectories};
Q_DECLARE_FLAGS(IteratorFlags, IteratorFlag)
public slots:
QDirIterator* new_QDirIterator(const QDir&  dir, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, QDir::Filters  filter, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
QDirIterator* new_QDirIterator(const QString&  path, const QStringList&  nameFilters, QDir::Filters  filters = QDir::NoFilter, QDirIterator::IteratorFlags  flags = QDirIterator::NoIteratorFlags);
void delete_QDirIterator(QDirIterator* obj) { delete obj; } 
   QString  next(QDirIterator* theWrappedObject);
   bool  hasNext(QDirIterator* theWrappedObject) const;
   QString  path(QDirIterator* theWrappedObject) const;
   QFileInfo  fileInfo(QDirIterator* theWrappedObject) const;
   QString  fileName(QDirIterator* theWrappedObject) const;
   QString  filePath(QDirIterator* theWrappedObject) const;
};





class PythonQtWrapper_QDynamicPropertyChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDynamicPropertyChangeEvent* new_QDynamicPropertyChangeEvent(const QByteArray&  name);
void delete_QDynamicPropertyChangeEvent(QDynamicPropertyChangeEvent* obj) { delete obj; } 
   QByteArray  propertyName(QDynamicPropertyChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QEvent : public QEvent
{
public:
    PythonQtShell_QEvent(QEvent::Type  type):QEvent(type),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  None = QEvent::None,   Timer = QEvent::Timer,   MouseButtonPress = QEvent::MouseButtonPress,   MouseButtonRelease = QEvent::MouseButtonRelease,   MouseButtonDblClick = QEvent::MouseButtonDblClick,   MouseMove = QEvent::MouseMove,   KeyPress = QEvent::KeyPress,   KeyRelease = QEvent::KeyRelease,   FocusIn = QEvent::FocusIn,   FocusOut = QEvent::FocusOut,   Enter = QEvent::Enter,   Leave = QEvent::Leave,   Paint = QEvent::Paint,   Move = QEvent::Move,   Resize = QEvent::Resize,   Create = QEvent::Create,   Destroy = QEvent::Destroy,   Show = QEvent::Show,   Hide = QEvent::Hide,   Close = QEvent::Close,   Quit = QEvent::Quit,   ParentChange = QEvent::ParentChange,   ParentAboutToChange = QEvent::ParentAboutToChange,   ThreadChange = QEvent::ThreadChange,   WindowActivate = QEvent::WindowActivate,   WindowDeactivate = QEvent::WindowDeactivate,   ShowToParent = QEvent::ShowToParent,   HideToParent = QEvent::HideToParent,   Wheel = QEvent::Wheel,   WindowTitleChange = QEvent::WindowTitleChange,   WindowIconChange = QEvent::WindowIconChange,   ApplicationWindowIconChange = QEvent::ApplicationWindowIconChange,   ApplicationFontChange = QEvent::ApplicationFontChange,   ApplicationLayoutDirectionChange = QEvent::ApplicationLayoutDirectionChange,   ApplicationPaletteChange = QEvent::ApplicationPaletteChange,   PaletteChange = QEvent::PaletteChange,   Clipboard = QEvent::Clipboard,   Speech = QEvent::Speech,   MetaCall = QEvent::MetaCall,   SockAct = QEvent::SockAct,   WinEventAct = QEvent::WinEventAct,   DeferredDelete = QEvent::DeferredDelete,   DragEnter = QEvent::DragEnter,   DragMove = QEvent::DragMove,   DragLeave = QEvent::DragLeave,   Drop = QEvent::Drop,   DragResponse = QEvent::DragResponse,   ChildAdded = QEvent::ChildAdded,   ChildPolished = QEvent::ChildPolished,   ChildRemoved = QEvent::ChildRemoved,   ShowWindowRequest = QEvent::ShowWindowRequest,   PolishRequest = QEvent::PolishRequest,   Polish = QEvent::Polish,   LayoutRequest = QEvent::LayoutRequest,   UpdateRequest = QEvent::UpdateRequest,   UpdateLater = QEvent::UpdateLater,   EmbeddingControl = QEvent::EmbeddingControl,   ActivateControl = QEvent::ActivateControl,   DeactivateControl = QEvent::DeactivateControl,   ContextMenu = QEvent::ContextMenu,   InputMethod = QEvent::InputMethod,   AccessibilityPrepare = QEvent::AccessibilityPrepare,   TabletMove = QEvent::TabletMove,   LocaleChange = QEvent::LocaleChange,   LanguageChange = QEvent::LanguageChange,   LayoutDirectionChange = QEvent::LayoutDirectionChange,   Style = QEvent::Style,   TabletPress = QEvent::TabletPress,   TabletRelease = QEvent::TabletRelease,   OkRequest = QEvent::OkRequest,   HelpRequest = QEvent::HelpRequest,   IconDrag = QEvent::IconDrag,   FontChange = QEvent::FontChange,   EnabledChange = QEvent::EnabledChange,   ActivationChange = QEvent::ActivationChange,   StyleChange = QEvent::StyleChange,   IconTextChange = QEvent::IconTextChange,   ModifiedChange = QEvent::ModifiedChange,   MouseTrackingChange = QEvent::MouseTrackingChange,   WindowBlocked = QEvent::WindowBlocked,   WindowUnblocked = QEvent::WindowUnblocked,   WindowStateChange = QEvent::WindowStateChange,   ToolTip = QEvent::ToolTip,   WhatsThis = QEvent::WhatsThis,   StatusTip = QEvent::StatusTip,   ActionChanged = QEvent::ActionChanged,   ActionAdded = QEvent::ActionAdded,   ActionRemoved = QEvent::ActionRemoved,   FileOpen = QEvent::FileOpen,   Shortcut = QEvent::Shortcut,   ShortcutOverride = QEvent::ShortcutOverride,   WhatsThisClicked = QEvent::WhatsThisClicked,   ToolBarChange = QEvent::ToolBarChange,   ApplicationActivate = QEvent::ApplicationActivate,   ApplicationActivated = QEvent::ApplicationActivated,   ApplicationDeactivate = QEvent::ApplicationDeactivate,   ApplicationDeactivated = QEvent::ApplicationDeactivated,   QueryWhatsThis = QEvent::QueryWhatsThis,   EnterWhatsThisMode = QEvent::EnterWhatsThisMode,   LeaveWhatsThisMode = QEvent::LeaveWhatsThisMode,   ZOrderChange = QEvent::ZOrderChange,   HoverEnter = QEvent::HoverEnter,   HoverLeave = QEvent::HoverLeave,   HoverMove = QEvent::HoverMove,   AccessibilityHelp = QEvent::AccessibilityHelp,   AccessibilityDescription = QEvent::AccessibilityDescription,   AcceptDropsChange = QEvent::AcceptDropsChange,   MenubarUpdated = QEvent::MenubarUpdated,   ZeroTimerEvent = QEvent::ZeroTimerEvent,   GraphicsSceneMouseMove = QEvent::GraphicsSceneMouseMove,   GraphicsSceneMousePress = QEvent::GraphicsSceneMousePress,   GraphicsSceneMouseRelease = QEvent::GraphicsSceneMouseRelease,   GraphicsSceneMouseDoubleClick = QEvent::GraphicsSceneMouseDoubleClick,   GraphicsSceneContextMenu = QEvent::GraphicsSceneContextMenu,   GraphicsSceneHoverEnter = QEvent::GraphicsSceneHoverEnter,   GraphicsSceneHoverMove = QEvent::GraphicsSceneHoverMove,   GraphicsSceneHoverLeave = QEvent::GraphicsSceneHoverLeave,   GraphicsSceneHelp = QEvent::GraphicsSceneHelp,   GraphicsSceneDragEnter = QEvent::GraphicsSceneDragEnter,   GraphicsSceneDragMove = QEvent::GraphicsSceneDragMove,   GraphicsSceneDragLeave = QEvent::GraphicsSceneDragLeave,   GraphicsSceneDrop = QEvent::GraphicsSceneDrop,   GraphicsSceneWheel = QEvent::GraphicsSceneWheel,   KeyboardLayoutChange = QEvent::KeyboardLayoutChange,   DynamicPropertyChange = QEvent::DynamicPropertyChange,   TabletEnterProximity = QEvent::TabletEnterProximity,   TabletLeaveProximity = QEvent::TabletLeaveProximity,   NonClientAreaMouseMove = QEvent::NonClientAreaMouseMove,   NonClientAreaMouseButtonPress = QEvent::NonClientAreaMouseButtonPress,   NonClientAreaMouseButtonRelease = QEvent::NonClientAreaMouseButtonRelease,   NonClientAreaMouseButtonDblClick = QEvent::NonClientAreaMouseButtonDblClick,   MacSizeChange = QEvent::MacSizeChange,   ContentsRectChange = QEvent::ContentsRectChange,   MacGLWindowChange = QEvent::MacGLWindowChange,   FutureCallOut = QEvent::FutureCallOut,   GraphicsSceneResize = QEvent::GraphicsSceneResize,   GraphicsSceneMove = QEvent::GraphicsSceneMove,   CursorChange = QEvent::CursorChange,   ToolTipChange = QEvent::ToolTipChange,   NetworkReplyUpdated = QEvent::NetworkReplyUpdated,   GrabMouse = QEvent::GrabMouse,   UngrabMouse = QEvent::UngrabMouse,   GrabKeyboard = QEvent::GrabKeyboard,   UngrabKeyboard = QEvent::UngrabKeyboard,   User = QEvent::User,   MaxUser = QEvent::MaxUser};
public slots:
QEvent* new_QEvent(QEvent::Type  type);
void delete_QEvent(QEvent* obj) { delete obj; } 
   bool  spontaneous(QEvent* theWrappedObject) const;
   void ignore(QEvent* theWrappedObject);
   void accept(QEvent* theWrappedObject);
   int  static_QEvent_registerEventType(int  hint = -1);
   QEvent::Type  type(QEvent* theWrappedObject) const;
   void setAccepted(QEvent* theWrappedObject, bool  accepted);
   bool  isAccepted(QEvent* theWrappedObject) const;
    QString toString(QEvent*);
};





class PythonQtShell_QEventLoop : public QEventLoop
{
public:
    PythonQtShell_QEventLoop(QObject*  parent = 0):QEventLoop(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QEventLoop : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ProcessEventsFlag )
Q_FLAGS(ProcessEventsFlags )
enum ProcessEventsFlag{
  AllEvents = QEventLoop::AllEvents,   ExcludeUserInputEvents = QEventLoop::ExcludeUserInputEvents,   ExcludeSocketNotifiers = QEventLoop::ExcludeSocketNotifiers,   WaitForMoreEvents = QEventLoop::WaitForMoreEvents,   X11ExcludeTimers = QEventLoop::X11ExcludeTimers,   DeferredDeletion = QEventLoop::DeferredDeletion};
Q_DECLARE_FLAGS(ProcessEventsFlags, ProcessEventsFlag)
public slots:
QEventLoop* new_QEventLoop(QObject*  parent = 0);
void delete_QEventLoop(QEventLoop* obj) { delete obj; } 
   void wakeUp(QEventLoop* theWrappedObject);
   bool  isRunning(QEventLoop* theWrappedObject) const;
   void exit(QEventLoop* theWrappedObject, int  returnCode = 0);
   int  exec(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   bool  processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags = QEventLoop::AllEvents);
   void processEvents(QEventLoop* theWrappedObject, QEventLoop::ProcessEventsFlags  flags, int  maximumTime);
};





class PythonQtShell_QFile : public QFile
{
public:
    PythonQtShell_QFile():QFile(),_wrapper(NULL) {};
    PythonQtShell_QFile(QObject*  parent):QFile(parent),_wrapper(NULL) {};
    PythonQtShell_QFile(const QString&  name):QFile(name),_wrapper(NULL) {};
    PythonQtShell_QFile(const QString&  name, QObject*  parent):QFile(name, parent),_wrapper(NULL) {};

virtual QAbstractFileEngine*  fileEngine() const;
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  seek(qint64  offset);
virtual qint64  pos() const;
virtual qint64  size() const;
virtual void close();
virtual bool  atEnd() const;
virtual bool  open(QIODevice::OpenMode  flags);
virtual bool  isSequential() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  writeData(const char*  data, qint64  len);
virtual bool  reset();
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  canReadLine() const;
virtual bool  waitForReadyRead(int  msecs);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QFile : public QFile
{ public:
inline QAbstractFileEngine*  promoted_fileEngine() const { return QFile::fileEngine(); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return QFile::readLineData(data, maxlen); }
inline bool  promoted_seek(qint64  offset) { return QFile::seek(offset); }
inline qint64  promoted_pos() const { return QFile::pos(); }
inline qint64  promoted_size() const { return QFile::size(); }
inline void promoted_close() { QFile::close(); }
inline bool  promoted_atEnd() const { return QFile::atEnd(); }
inline bool  promoted_open(QIODevice::OpenMode  flags) { return QFile::open(flags); }
inline bool  promoted_isSequential() const { return QFile::isSequential(); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QFile::readData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QFile::writeData(data, len); }
};

class PythonQtWrapper_QFile : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FileError MemoryMapFlags Permission )
Q_FLAGS(Permissions )
enum FileError{
  NoError = QFile::NoError,   ReadError = QFile::ReadError,   WriteError = QFile::WriteError,   FatalError = QFile::FatalError,   ResourceError = QFile::ResourceError,   OpenError = QFile::OpenError,   AbortError = QFile::AbortError,   TimeOutError = QFile::TimeOutError,   UnspecifiedError = QFile::UnspecifiedError,   RemoveError = QFile::RemoveError,   RenameError = QFile::RenameError,   PositionError = QFile::PositionError,   ResizeError = QFile::ResizeError,   PermissionsError = QFile::PermissionsError,   CopyError = QFile::CopyError};
enum MemoryMapFlags{
  NoOptions = QFile::NoOptions};
enum Permission{
  ReadOwner = QFile::ReadOwner,   WriteOwner = QFile::WriteOwner,   ExeOwner = QFile::ExeOwner,   ReadUser = QFile::ReadUser,   WriteUser = QFile::WriteUser,   ExeUser = QFile::ExeUser,   ReadGroup = QFile::ReadGroup,   WriteGroup = QFile::WriteGroup,   ExeGroup = QFile::ExeGroup,   ReadOther = QFile::ReadOther,   WriteOther = QFile::WriteOther,   ExeOther = QFile::ExeOther};
Q_DECLARE_FLAGS(Permissions, Permission)
public slots:
QFile* new_QFile();
QFile* new_QFile(QObject*  parent);
QFile* new_QFile(const QString&  name);
QFile* new_QFile(const QString&  name, QObject*  parent);
void delete_QFile(QFile* obj) { delete obj; } 
   bool  static_QFile_exists(const QString&  fileName);
   bool  setPermissions(QFile* theWrappedObject, QFile::Permissions  permissionSpec);
   int  handle(QFile* theWrappedObject) const;
   bool  exists(QFile* theWrappedObject) const;
   QAbstractFileEngine*  fileEngine(QFile* theWrappedObject) const;
   qint64  readLineData(QFile* theWrappedObject, char*  data, qint64  maxlen);
   bool  seek(QFile* theWrappedObject, qint64  offset);
   QFile::Permissions  static_QFile_permissions(const QString&  filename);
   QFile::Permissions  permissions(QFile* theWrappedObject) const;
   QByteArray  static_QFile_encodeName(const QString&  fileName);
   qint64  pos(QFile* theWrappedObject) const;
   QFile::FileError  error(QFile* theWrappedObject) const;
   bool  static_QFile_rename(const QString&  oldName, const QString&  newName);
   bool  rename(QFile* theWrappedObject, const QString&  newName);
   qint64  size(QFile* theWrappedObject) const;
   QString  static_QFile_decodeName(const QByteArray&  localFileName);
   void close(QFile* theWrappedObject);
   void setFileName(QFile* theWrappedObject, const QString&  name);
   bool  atEnd(QFile* theWrappedObject) const;
   bool  static_QFile_resize(const QString&  filename, qint64  sz);
   bool  static_QFile_link(const QString&  oldname, const QString&  newName);
   bool  link(QFile* theWrappedObject, const QString&  newName);
   bool  resize(QFile* theWrappedObject, qint64  sz);
   bool  open(QFile* theWrappedObject, QIODevice::OpenMode  flags);
   QString  symLinkTarget(QFile* theWrappedObject) const;
   bool  static_QFile_setPermissions(const QString&  filename, QFile::Permissions  permissionSpec);
   QString  static_QFile_symLinkTarget(const QString&  fileName);
   bool  isSequential(QFile* theWrappedObject) const;
   QString  fileName(QFile* theWrappedObject) const;
   qint64  readData(QFile* theWrappedObject, char*  data, qint64  maxlen);
   bool  remove(QFile* theWrappedObject);
   bool  static_QFile_remove(const QString&  fileName);
   bool  flush(QFile* theWrappedObject);
   qint64  writeData(QFile* theWrappedObject, const char*  data, qint64  len);
   bool  static_QFile_copy(const QString&  fileName, const QString&  newName);
   void unsetError(QFile* theWrappedObject);
   bool  copy(QFile* theWrappedObject, const QString&  newName);
};





class PythonQtWrapper_QFileInfo : public QObject
{ Q_OBJECT
public:
public slots:
QFileInfo* new_QFileInfo();
QFileInfo* new_QFileInfo(const QDir&  dir, const QString&  file);
QFileInfo* new_QFileInfo(const QFile&  file);
QFileInfo* new_QFileInfo(const QFileInfo&  fileinfo);
QFileInfo* new_QFileInfo(const QString&  file);
void delete_QFileInfo(QFileInfo* obj) { delete obj; } 
   bool  operator_equal(QFileInfo* theWrappedObject, const QFileInfo&  fileinfo);
   bool  exists(QFileInfo* theWrappedObject) const;
   QFile::Permissions  permissions(QFileInfo* theWrappedObject) const;
   uint  ownerId(QFileInfo* theWrappedObject) const;
   bool  permission(QFileInfo* theWrappedObject, QFile::Permissions  permissions) const;
   bool  isRelative(QFileInfo* theWrappedObject) const;
   bool  isWritable(QFileInfo* theWrappedObject) const;
   qint64  size(QFileInfo* theWrappedObject) const;
   bool  isSymLink(QFileInfo* theWrappedObject) const;
   bool  isRoot(QFileInfo* theWrappedObject) const;
   QString  filePath(QFileInfo* theWrappedObject) const;
   QString  completeSuffix(QFileInfo* theWrappedObject) const;
   QString  suffix(QFileInfo* theWrappedObject) const;
   void setFile(QFileInfo* theWrappedObject, const QDir&  dir, const QString&  file);
   void setFile(QFileInfo* theWrappedObject, const QFile&  file);
   bool  isReadable(QFileInfo* theWrappedObject) const;
   bool  isAbsolute(QFileInfo* theWrappedObject) const;
   QString  group(QFileInfo* theWrappedObject) const;
   void setFile(QFileInfo* theWrappedObject, const QString&  file);
   QString  completeBaseName(QFileInfo* theWrappedObject) const;
   bool  isExecutable(QFileInfo* theWrappedObject) const;
   bool  makeAbsolute(QFileInfo* theWrappedObject);
   void refresh(QFileInfo* theWrappedObject);
   bool  isHidden(QFileInfo* theWrappedObject) const;
   bool  isDir(QFileInfo* theWrappedObject) const;
   QString  symLinkTarget(QFileInfo* theWrappedObject) const;
   QString  owner(QFileInfo* theWrappedObject) const;
   QString  baseName(QFileInfo* theWrappedObject) const;
   QString  canonicalPath(QFileInfo* theWrappedObject) const;
   void setCaching(QFileInfo* theWrappedObject, bool  on);
   QString  absoluteFilePath(QFileInfo* theWrappedObject) const;
   QString  fileName(QFileInfo* theWrappedObject) const;
   bool  isFile(QFileInfo* theWrappedObject) const;
   QDateTime  created(QFileInfo* theWrappedObject) const;
   QString  absolutePath(QFileInfo* theWrappedObject) const;
   QDateTime  lastModified(QFileInfo* theWrappedObject) const;
   QDir  dir(QFileInfo* theWrappedObject) const;
   QDateTime  lastRead(QFileInfo* theWrappedObject) const;
   QString  canonicalFilePath(QFileInfo* theWrappedObject) const;
   QDir  absoluteDir(QFileInfo* theWrappedObject) const;
   QString  bundleName(QFileInfo* theWrappedObject) const;
   bool  isBundle(QFileInfo* theWrappedObject) const;
   QString  path(QFileInfo* theWrappedObject) const;
   bool  caching(QFileInfo* theWrappedObject) const;
   uint  groupId(QFileInfo* theWrappedObject) const;
};





class PythonQtShell_QFileSystemWatcher : public QFileSystemWatcher
{
public:
    PythonQtShell_QFileSystemWatcher(QObject*  parent = 0):QFileSystemWatcher(parent),_wrapper(NULL) {};
    PythonQtShell_QFileSystemWatcher(const QStringList&  paths, QObject*  parent = 0):QFileSystemWatcher(paths, parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QFileSystemWatcher : public QObject
{ Q_OBJECT
public:
public slots:
QFileSystemWatcher* new_QFileSystemWatcher(QObject*  parent = 0);
QFileSystemWatcher* new_QFileSystemWatcher(const QStringList&  paths, QObject*  parent = 0);
void delete_QFileSystemWatcher(QFileSystemWatcher* obj) { delete obj; } 
   void removePaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files);
   void addPath(QFileSystemWatcher* theWrappedObject, const QString&  file);
   void removePath(QFileSystemWatcher* theWrappedObject, const QString&  file);
   void addPaths(QFileSystemWatcher* theWrappedObject, const QStringList&  files);
   QStringList  files(QFileSystemWatcher* theWrappedObject) const;
   QStringList  directories(QFileSystemWatcher* theWrappedObject) const;
};





class PythonQtShell_QIODevice : public QIODevice
{
public:
    PythonQtShell_QIODevice():QIODevice(),_wrapper(NULL) {};
    PythonQtShell_QIODevice(QObject*  parent):QIODevice(parent),_wrapper(NULL) {};

virtual bool  canReadLine() const;
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  seek(qint64  pos);
virtual qint64  pos() const;
virtual qint64  bytesAvailable() const;
virtual qint64  size() const;
virtual bool  waitForReadyRead(int  msecs);
virtual void close();
virtual bool  atEnd() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual bool  isSequential() const;
virtual bool  waitForBytesWritten(int  msecs);
virtual qint64  readData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual qint64  writeData(const char*  data, qint64  len);
virtual qint64  bytesToWrite() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QIODevice : public QIODevice
{ public:
inline bool  promoted_canReadLine() const { return QIODevice::canReadLine(); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return QIODevice::readLineData(data, maxlen); }
inline bool  promoted_seek(qint64  pos) { return QIODevice::seek(pos); }
inline qint64  promoted_pos() const { return QIODevice::pos(); }
inline qint64  promoted_bytesAvailable() const { return QIODevice::bytesAvailable(); }
inline qint64  promoted_size() const { return QIODevice::size(); }
inline bool  promoted_waitForReadyRead(int  msecs) { return QIODevice::waitForReadyRead(msecs); }
inline void promoted_close() { QIODevice::close(); }
inline bool  promoted_atEnd() const { return QIODevice::atEnd(); }
inline bool  promoted_open(QIODevice::OpenMode  mode) { return QIODevice::open(mode); }
inline bool  promoted_isSequential() const { return QIODevice::isSequential(); }
inline bool  promoted_waitForBytesWritten(int  msecs) { return QIODevice::waitForBytesWritten(msecs); }
inline bool  promoted_reset() { return QIODevice::reset(); }
inline qint64  promoted_bytesToWrite() const { return QIODevice::bytesToWrite(); }
};

class PythonQtWrapper_QIODevice : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OpenModeFlag )
Q_FLAGS(OpenMode )
enum OpenModeFlag{
  NotOpen = QIODevice::NotOpen,   ReadOnly = QIODevice::ReadOnly,   WriteOnly = QIODevice::WriteOnly,   ReadWrite = QIODevice::ReadWrite,   Append = QIODevice::Append,   Truncate = QIODevice::Truncate,   Text = QIODevice::Text,   Unbuffered = QIODevice::Unbuffered};
Q_DECLARE_FLAGS(OpenMode, OpenModeFlag)
public slots:
QIODevice* new_QIODevice();
QIODevice* new_QIODevice(QObject*  parent);
void delete_QIODevice(QIODevice* obj) { delete obj; } 
   bool  canReadLine(QIODevice* theWrappedObject) const;
   qint64  readLineData(QIODevice* theWrappedObject, char*  data, qint64  maxlen);
   QByteArray  peek(QIODevice* theWrappedObject, qint64  maxlen);
   QByteArray  readLine(QIODevice* theWrappedObject, qint64  maxlen = 0);
   bool  seek(QIODevice* theWrappedObject, qint64  pos);
   void setTextModeEnabled(QIODevice* theWrappedObject, bool  enabled);
   qint64  pos(QIODevice* theWrappedObject) const;
   qint64  bytesAvailable(QIODevice* theWrappedObject) const;
   bool  isOpen(QIODevice* theWrappedObject) const;
   bool  getChar(QIODevice* theWrappedObject, char*  c);
   bool  isWritable(QIODevice* theWrappedObject) const;
   qint64  size(QIODevice* theWrappedObject) const;
   bool  waitForReadyRead(QIODevice* theWrappedObject, int  msecs);
   void ungetChar(QIODevice* theWrappedObject, char  c);
   QIODevice::OpenMode  openMode(QIODevice* theWrappedObject) const;
   void close(QIODevice* theWrappedObject);
   bool  atEnd(QIODevice* theWrappedObject) const;
   QString  errorString(QIODevice* theWrappedObject) const;
   bool  putChar(QIODevice* theWrappedObject, char  c);
   qint64  write(QIODevice* theWrappedObject, const QByteArray&  data);
   bool  isReadable(QIODevice* theWrappedObject) const;
   bool  open(QIODevice* theWrappedObject, QIODevice::OpenMode  mode);
   bool  isTextModeEnabled(QIODevice* theWrappedObject) const;
   bool  isSequential(QIODevice* theWrappedObject) const;
   bool  waitForBytesWritten(QIODevice* theWrappedObject, int  msecs);
   QByteArray  readAll(QIODevice* theWrappedObject);
   QByteArray  read(QIODevice* theWrappedObject, qint64  maxlen);
   bool  reset(QIODevice* theWrappedObject);
   qint64  bytesToWrite(QIODevice* theWrappedObject) const;
};





class PythonQtWrapper_QLibraryInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LibraryLocation )
enum LibraryLocation{
  PrefixPath = QLibraryInfo::PrefixPath,   DocumentationPath = QLibraryInfo::DocumentationPath,   HeadersPath = QLibraryInfo::HeadersPath,   LibrariesPath = QLibraryInfo::LibrariesPath,   BinariesPath = QLibraryInfo::BinariesPath,   PluginsPath = QLibraryInfo::PluginsPath,   DataPath = QLibraryInfo::DataPath,   TranslationsPath = QLibraryInfo::TranslationsPath,   SettingsPath = QLibraryInfo::SettingsPath,   DemosPath = QLibraryInfo::DemosPath,   ExamplesPath = QLibraryInfo::ExamplesPath};
public slots:
void delete_QLibraryInfo(QLibraryInfo* obj) { delete obj; } 
   QString  static_QLibraryInfo_licensedProducts();
   QString  static_QLibraryInfo_location(QLibraryInfo::LibraryLocation  arg__1);
   QString  static_QLibraryInfo_buildKey();
   QString  static_QLibraryInfo_licensee();
};





class PythonQtShell_QMimeData : public QMimeData
{
public:
    PythonQtShell_QMimeData():QMimeData(),_wrapper(NULL) {};

virtual bool  hasFormat(const QString&  mimetype) const;
virtual QVariant  retrieveData(const QString&  mimetype, QVariant::Type  preferredType) const;
virtual QStringList  formats() const;
virtual bool  event(QEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QMimeData : public QMimeData
{ public:
inline bool  promoted_hasFormat(const QString&  mimetype) const { return QMimeData::hasFormat(mimetype); }
inline QVariant  promoted_retrieveData(const QString&  mimetype, QVariant::Type  preferredType) const { return QMimeData::retrieveData(mimetype, preferredType); }
inline QStringList  promoted_formats() const { return QMimeData::formats(); }
};

class PythonQtWrapper_QMimeData : public QObject
{ Q_OBJECT
public:
public slots:
QMimeData* new_QMimeData();
void delete_QMimeData(QMimeData* obj) { delete obj; } 
   QVariant  imageData(QMimeData* theWrappedObject) const;
   void setHtml(QMimeData* theWrappedObject, const QString&  html);
   void setColorData(QMimeData* theWrappedObject, const QVariant&  color);
   void setData(QMimeData* theWrappedObject, const QString&  mimetype, const QByteArray&  data);
   bool  hasHtml(QMimeData* theWrappedObject) const;
   bool  hasUrls(QMimeData* theWrappedObject) const;
   bool  hasImage(QMimeData* theWrappedObject) const;
   QVariant  colorData(QMimeData* theWrappedObject) const;
   QByteArray  data(QMimeData* theWrappedObject, const QString&  mimetype) const;
   bool  hasFormat(QMimeData* theWrappedObject, const QString&  mimetype) const;
   bool  hasColor(QMimeData* theWrappedObject) const;
   void removeFormat(QMimeData* theWrappedObject, const QString&  mimetype);
   bool  hasText(QMimeData* theWrappedObject) const;
   QString  text(QMimeData* theWrappedObject) const;
   QVariant  retrieveData(QMimeData* theWrappedObject, const QString&  mimetype, QVariant::Type  preferredType) const;
   QStringList  formats(QMimeData* theWrappedObject) const;
   void setUrls(QMimeData* theWrappedObject, const QList<QUrl >&  urls);
   QString  html(QMimeData* theWrappedObject) const;
   QList<QUrl >  urls(QMimeData* theWrappedObject) const;
   void clear(QMimeData* theWrappedObject);
   void setText(QMimeData* theWrappedObject, const QString&  text);
   void setImageData(QMimeData* theWrappedObject, const QVariant&  image);
};





class PythonQtWrapper_QModelIndex : public QObject
{ Q_OBJECT
public:
public slots:
QModelIndex* new_QModelIndex();
QModelIndex* new_QModelIndex(const QModelIndex&  other);
void delete_QModelIndex(QModelIndex* obj) { delete obj; } 
   const QAbstractItemModel*  model(QModelIndex* theWrappedObject) const;
   bool  isValid(QModelIndex* theWrappedObject) const;
   QModelIndex  child(QModelIndex* theWrappedObject, int  row, int  column) const;
   QModelIndex  parent(QModelIndex* theWrappedObject) const;
   bool  operator_less(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   QVariant  data(QModelIndex* theWrappedObject, int  role = Qt::DisplayRole) const;
   qint64  internalId(QModelIndex* theWrappedObject) const;
   bool  operator_equal(QModelIndex* theWrappedObject, const QModelIndex&  other) const;
   Qt::ItemFlags  flags(QModelIndex* theWrappedObject) const;
   void*  internalPointer(QModelIndex* theWrappedObject) const;
   QModelIndex  sibling(QModelIndex* theWrappedObject, int  row, int  column) const;
   int  column(QModelIndex* theWrappedObject) const;
   int  row(QModelIndex* theWrappedObject) const;
    QString toString(QModelIndex*);
};





class PythonQtWrapper_QMutex : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RecursionMode )
enum RecursionMode{
  NonRecursive = QMutex::NonRecursive,   Recursive = QMutex::Recursive};
public slots:
QMutex* new_QMutex(QMutex::RecursionMode  mode = QMutex::NonRecursive);
void delete_QMutex(QMutex* obj) { delete obj; } 
   void unlock(QMutex* theWrappedObject);
   bool  tryLock(QMutex* theWrappedObject, int  timeout);
   bool  tryLock(QMutex* theWrappedObject);
   void lock(QMutex* theWrappedObject);
};





class PythonQtShell_QObject : public QObject
{
public:
    PythonQtShell_QObject(QObject*  parent = 0):QObject(parent),_wrapper(NULL) {};

virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void childEvent(QChildEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QObject : public QObject
{ public:
inline void promoted_timerEvent(QTimerEvent*  arg__1) { QObject::timerEvent(arg__1); }
inline void promoted_customEvent(QEvent*  arg__1) { QObject::customEvent(arg__1); }
inline bool  promoted_event(QEvent*  arg__1) { return QObject::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QObject::eventFilter(arg__1, arg__2); }
inline void promoted_childEvent(QChildEvent*  arg__1) { QObject::childEvent(arg__1); }
};

class PythonQtWrapper_QObject : public QObject
{ Q_OBJECT
public:
public slots:
QObject* new_QObject(QObject*  parent = 0);
void delete_QObject(QObject* obj) { delete obj; } 
   void removeEventFilter(QObject* theWrappedObject, QObject*  arg__1);
   bool  inherits(QObject* theWrappedObject, const char*  classname) const;
   void installEventFilter(QObject* theWrappedObject, QObject*  arg__1);
   void dumpObjectInfo(QObject* theWrappedObject);
   void moveToThread(QObject* theWrappedObject, QThread*  thread);
   bool  isWidgetType(QObject* theWrappedObject) const;
   bool  setProperty(QObject* theWrappedObject, const char*  name, const QVariant&  value);
   QObject*  parent(QObject* theWrappedObject) const;
   void timerEvent(QObject* theWrappedObject, QTimerEvent*  arg__1);
   void dumpObjectTree(QObject* theWrappedObject);
   QString  objectName(QObject* theWrappedObject) const;
   const QList<QObject* >*  children(QObject* theWrappedObject) const;
   void setObjectName(QObject* theWrappedObject, const QString&  name);
   void killTimer(QObject* theWrappedObject, int  id);
   QThread*  thread(QObject* theWrappedObject) const;
   bool  signalsBlocked(QObject* theWrappedObject) const;
   void setParent(QObject* theWrappedObject, QObject*  arg__1);
   void customEvent(QObject* theWrappedObject, QEvent*  arg__1);
   bool  blockSignals(QObject* theWrappedObject, bool  b);
   int  startTimer(QObject* theWrappedObject, int  interval);
   QVariant  property(QObject* theWrappedObject, const char*  name) const;
   QList<QByteArray >  dynamicPropertyNames(QObject* theWrappedObject) const;
   bool  event(QObject* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QObject* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   void childEvent(QObject* theWrappedObject, QChildEvent*  arg__1);
    QString toString(QObject*);
};





class PythonQtWrapper_QPersistentModelIndex : public QObject
{ Q_OBJECT
public:
public slots:
QPersistentModelIndex* new_QPersistentModelIndex();
QPersistentModelIndex* new_QPersistentModelIndex(const QModelIndex&  index);
QPersistentModelIndex* new_QPersistentModelIndex(const QPersistentModelIndex&  other);
void delete_QPersistentModelIndex(QPersistentModelIndex* obj) { delete obj; } 
   QModelIndex  parent(QPersistentModelIndex* theWrappedObject) const;
   QModelIndex  child(QPersistentModelIndex* theWrappedObject, int  row, int  column) const;
   const QAbstractItemModel*  model(QPersistentModelIndex* theWrappedObject) const;
   bool  isValid(QPersistentModelIndex* theWrappedObject) const;
   QModelIndex  operator_cast_QModelIndex(QPersistentModelIndex* theWrappedObject) const;
   QVariant  data(QPersistentModelIndex* theWrappedObject, int  role = Qt::DisplayRole) const;
   bool  operator_less(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const;
   qint64  internalId(QPersistentModelIndex* theWrappedObject) const;
   bool  operator_equal(QPersistentModelIndex* theWrappedObject, const QModelIndex&  other) const;
   bool  operator_equal(QPersistentModelIndex* theWrappedObject, const QPersistentModelIndex&  other) const;
   QModelIndex  sibling(QPersistentModelIndex* theWrappedObject, int  row, int  column) const;
   Qt::ItemFlags  flags(QPersistentModelIndex* theWrappedObject) const;
   int  column(QPersistentModelIndex* theWrappedObject) const;
   int  row(QPersistentModelIndex* theWrappedObject) const;
    QString toString(QPersistentModelIndex*);
};





class PythonQtShell_QProcess : public QProcess
{
public:
    PythonQtShell_QProcess(QObject*  parent = 0):QProcess(parent),_wrapper(NULL) {};

virtual qint64  size() const;
virtual void setupChildProcess();
virtual bool  canReadLine() const;
virtual qint64  bytesAvailable() const;
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual void close();
virtual bool  atEnd() const;
virtual bool  isSequential() const;
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  writeData(const char*  data, qint64  len);
virtual qint64  bytesToWrite() const;
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual void timerEvent(QTimerEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QProcess : public QProcess
{ public:
inline void promoted_setupChildProcess() { QProcess::setupChildProcess(); }
inline bool  promoted_canReadLine() const { return QProcess::canReadLine(); }
inline qint64  promoted_bytesAvailable() const { return QProcess::bytesAvailable(); }
inline bool  promoted_waitForReadyRead(int  msecs = 30000) { return QProcess::waitForReadyRead(msecs); }
inline void promoted_close() { QProcess::close(); }
inline bool  promoted_atEnd() const { return QProcess::atEnd(); }
inline bool  promoted_isSequential() const { return QProcess::isSequential(); }
inline bool  promoted_waitForBytesWritten(int  msecs = 30000) { return QProcess::waitForBytesWritten(msecs); }
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return QProcess::readData(data, maxlen); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return QProcess::writeData(data, len); }
inline qint64  promoted_bytesToWrite() const { return QProcess::bytesToWrite(); }
};

class PythonQtWrapper_QProcess : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ProcessError ProcessChannelMode ProcessChannel ProcessState ExitStatus )
enum ProcessError{
  FailedToStart = QProcess::FailedToStart,   Crashed = QProcess::Crashed,   Timedout = QProcess::Timedout,   ReadError = QProcess::ReadError,   WriteError = QProcess::WriteError,   UnknownError = QProcess::UnknownError};
enum ProcessChannelMode{
  SeparateChannels = QProcess::SeparateChannels,   MergedChannels = QProcess::MergedChannels,   ForwardedChannels = QProcess::ForwardedChannels};
enum ProcessChannel{
  StandardOutput = QProcess::StandardOutput,   StandardError = QProcess::StandardError};
enum ProcessState{
  NotRunning = QProcess::NotRunning,   Starting = QProcess::Starting,   Running = QProcess::Running};
enum ExitStatus{
  NormalExit = QProcess::NormalExit,   CrashExit = QProcess::CrashExit};
public slots:
QProcess* new_QProcess(QObject*  parent = 0);
void delete_QProcess(QProcess* obj) { delete obj; } 
   void setupChildProcess(QProcess* theWrappedObject);
   bool  waitForStarted(QProcess* theWrappedObject, int  msecs = 30000);
   void setReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   bool  canReadLine(QProcess* theWrappedObject) const;
   void closeReadChannel(QProcess* theWrappedObject, QProcess::ProcessChannel  channel);
   QStringList  environment(QProcess* theWrappedObject) const;
   bool  waitForFinished(QProcess* theWrappedObject, int  msecs = 30000);
   void setWorkingDirectory(QProcess* theWrappedObject, const QString&  dir);
   QProcess::ProcessError  error(QProcess* theWrappedObject) const;
   qint64  bytesAvailable(QProcess* theWrappedObject) const;
   QProcess::ProcessChannelMode  processChannelMode(QProcess* theWrappedObject) const;
   int  static_QProcess_execute(const QString&  program);
   void closeWriteChannel(QProcess* theWrappedObject);
   int  static_QProcess_execute(const QString&  program, const QStringList&  arguments);
   QString  workingDirectory(QProcess* theWrappedObject) const;
   bool  waitForReadyRead(QProcess* theWrappedObject, int  msecs = 30000);
   void start(QProcess* theWrappedObject, const QString&  program, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void start(QProcess* theWrappedObject, const QString&  program, const QStringList&  arguments, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void setStandardInputFile(QProcess* theWrappedObject, const QString&  fileName);
   void close(QProcess* theWrappedObject);
   QProcess::ProcessState  state(QProcess* theWrappedObject) const;
   QStringList  static_QProcess_systemEnvironment();
   void setStandardOutputFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode = QIODevice::Truncate);
   bool  atEnd(QProcess* theWrappedObject) const;
   QByteArray  readAllStandardError(QProcess* theWrappedObject);
   bool  isSequential(QProcess* theWrappedObject) const;
   bool  waitForBytesWritten(QProcess* theWrappedObject, int  msecs = 30000);
   qint64  readData(QProcess* theWrappedObject, char*  data, qint64  maxlen);
   bool  static_QProcess_startDetached(const QString&  program);
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments);
   bool  static_QProcess_startDetached(const QString&  program, const QStringList&  arguments, const QString&  workingDirectory, qint64*  pid = 0);
   void setStandardOutputProcess(QProcess* theWrappedObject, QProcess*  destination);
   void setEnvironment(QProcess* theWrappedObject, const QStringList&  environment);
   QByteArray  readAllStandardOutput(QProcess* theWrappedObject);
   int  exitCode(QProcess* theWrappedObject) const;
   void setProcessChannelMode(QProcess* theWrappedObject, QProcess::ProcessChannelMode  mode);
   QProcess::ProcessChannel  readChannel(QProcess* theWrappedObject) const;
   void setStandardErrorFile(QProcess* theWrappedObject, const QString&  fileName, QIODevice::OpenMode  mode = QIODevice::Truncate);
   QProcess::ExitStatus  exitStatus(QProcess* theWrappedObject) const;
   qint64  writeData(QProcess* theWrappedObject, const char*  data, qint64  len);
   qint64  bytesToWrite(QProcess* theWrappedObject) const;
};





class PythonQtShell_QRunnable : public QRunnable
{
public:
    PythonQtShell_QRunnable():QRunnable(),_wrapper(NULL) {};

virtual void run();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QRunnable : public QObject
{ Q_OBJECT
public:
public slots:
QRunnable* new_QRunnable();
void delete_QRunnable(QRunnable* obj) { delete obj; } 
   bool  autoDelete(QRunnable* theWrappedObject) const;
   void setAutoDelete(QRunnable* theWrappedObject, bool  _autoDelete);
};





class PythonQtWrapper_QSemaphore : public QObject
{ Q_OBJECT
public:
public slots:
QSemaphore* new_QSemaphore(int  n = 0);
void delete_QSemaphore(QSemaphore* obj) { delete obj; } 
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n, int  timeout);
   void acquire(QSemaphore* theWrappedObject, int  n = 1);
   void release(QSemaphore* theWrappedObject, int  n = 1);
   int  available(QSemaphore* theWrappedObject) const;
   bool  tryAcquire(QSemaphore* theWrappedObject, int  n = 1);
};





class PythonQtShell_QSettings : public QSettings
{
public:
    PythonQtShell_QSettings(QObject*  parent = 0):QSettings(parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(format, scope, organization, application, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(scope, organization, application, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = 0):QSettings(fileName, format, parent),_wrapper(NULL) {};
    PythonQtShell_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = 0):QSettings(organization, application, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  event);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSettings : public QSettings
{ public:
inline bool  promoted_event(QEvent*  event) { return QSettings::event(event); }
};

class PythonQtWrapper_QSettings : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Format Status Scope )
enum Format{
  NativeFormat = QSettings::NativeFormat,   IniFormat = QSettings::IniFormat,   InvalidFormat = QSettings::InvalidFormat,   CustomFormat1 = QSettings::CustomFormat1,   CustomFormat2 = QSettings::CustomFormat2,   CustomFormat3 = QSettings::CustomFormat3,   CustomFormat4 = QSettings::CustomFormat4,   CustomFormat5 = QSettings::CustomFormat5,   CustomFormat6 = QSettings::CustomFormat6,   CustomFormat7 = QSettings::CustomFormat7,   CustomFormat8 = QSettings::CustomFormat8,   CustomFormat9 = QSettings::CustomFormat9,   CustomFormat10 = QSettings::CustomFormat10,   CustomFormat11 = QSettings::CustomFormat11,   CustomFormat12 = QSettings::CustomFormat12,   CustomFormat13 = QSettings::CustomFormat13,   CustomFormat14 = QSettings::CustomFormat14,   CustomFormat15 = QSettings::CustomFormat15,   CustomFormat16 = QSettings::CustomFormat16};
enum Status{
  NoError = QSettings::NoError,   AccessError = QSettings::AccessError,   FormatError = QSettings::FormatError};
enum Scope{
  UserScope = QSettings::UserScope,   SystemScope = QSettings::SystemScope};
public slots:
QSettings* new_QSettings(QObject*  parent = 0);
QSettings* new_QSettings(QSettings::Format  format, QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
QSettings* new_QSettings(QSettings::Scope  scope, const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
QSettings* new_QSettings(const QString&  fileName, QSettings::Format  format, QObject*  parent = 0);
QSettings* new_QSettings(const QString&  organization, const QString&  application = QString(), QObject*  parent = 0);
void delete_QSettings(QSettings* obj) { delete obj; } 
   void setArrayIndex(QSettings* theWrappedObject, int  i);
   int  beginReadArray(QSettings* theWrappedObject, const QString&  prefix);
   void clear(QSettings* theWrappedObject);
   bool  isWritable(QSettings* theWrappedObject) const;
   bool  fallbacksEnabled(QSettings* theWrappedObject) const;
   QSettings::Format  static_QSettings_defaultFormat();
   void beginGroup(QSettings* theWrappedObject, const QString&  prefix);
   QString  organizationName(QSettings* theWrappedObject) const;
   bool  contains(QSettings* theWrappedObject, const QString&  key) const;
   QStringList  childGroups(QSettings* theWrappedObject) const;
   void static_QSettings_setPath(QSettings::Format  format, QSettings::Scope  scope, const QString&  path);
   void endGroup(QSettings* theWrappedObject);
   void static_QSettings_setDefaultFormat(QSettings::Format  format);
   QString  group(QSettings* theWrappedObject) const;
   void setFallbacksEnabled(QSettings* theWrappedObject, bool  b);
   void sync(QSettings* theWrappedObject);
   QString  applicationName(QSettings* theWrappedObject) const;
   void endArray(QSettings* theWrappedObject);
   QStringList  childKeys(QSettings* theWrappedObject) const;
   QStringList  allKeys(QSettings* theWrappedObject) const;
   QString  fileName(QSettings* theWrappedObject) const;
   QSettings::Scope  scope(QSettings* theWrappedObject) const;
   QVariant  value(QSettings* theWrappedObject, const QString&  key, const QVariant&  defaultValue = QVariant()) const;
   void remove(QSettings* theWrappedObject, const QString&  key);
   QSettings::Format  format(QSettings* theWrappedObject) const;
   bool  event(QSettings* theWrappedObject, QEvent*  event);
   void beginWriteArray(QSettings* theWrappedObject, const QString&  prefix, int  size = -1);
   QSettings::Status  status(QSettings* theWrappedObject) const;
   void setValue(QSettings* theWrappedObject, const QString&  key, const QVariant&  value);
};


