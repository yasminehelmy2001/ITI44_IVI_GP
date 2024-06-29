/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[54];
    char stringdata0[1106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "on_videoButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 22), // "on_musicButton_clicked"
QT_MOC_LITERAL(4, 58, 25), // "on_settingsButton_clicked"
QT_MOC_LITERAL(5, 84, 36), // "on_themeComboBox_currentIndex..."
QT_MOC_LITERAL(6, 121, 5), // "index"
QT_MOC_LITERAL(7, 127, 10), // "updateTime"
QT_MOC_LITERAL(8, 138, 10), // "goBackHome"
QT_MOC_LITERAL(9, 149, 17), // "updateFlashStatus"
QT_MOC_LITERAL(10, 167, 15), // "updateSongsList"
QT_MOC_LITERAL(11, 183, 21), // "on_playButton_clicked"
QT_MOC_LITERAL(12, 205, 24), // "on_forwardButton_clicked"
QT_MOC_LITERAL(13, 230, 25), // "on_backwardButton_clicked"
QT_MOC_LITERAL(14, 256, 23), // "on_repeatButton_clicked"
QT_MOC_LITERAL(15, 280, 24), // "on_shuffleButton_clicked"
QT_MOC_LITERAL(16, 305, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(17, 327, 8), // "playSong"
QT_MOC_LITERAL(18, 336, 10), // "playToggle"
QT_MOC_LITERAL(19, 347, 21), // "onSongListItemClicked"
QT_MOC_LITERAL(20, 369, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(21, 386, 4), // "item"
QT_MOC_LITERAL(22, 391, 12), // "onSongChange"
QT_MOC_LITERAL(23, 404, 27), // "on_volumeDownButton_clicked"
QT_MOC_LITERAL(24, 432, 25), // "on_volumeUpButton_clicked"
QT_MOC_LITERAL(25, 458, 16), // "updateVideosList"
QT_MOC_LITERAL(26, 475, 31), // "on_goTovideosListButton_clicked"
QT_MOC_LITERAL(27, 507, 22), // "onVideoListItemClicked"
QT_MOC_LITERAL(28, 530, 30), // "on_backwardVideoButton_clicked"
QT_MOC_LITERAL(29, 561, 29), // "on_forwardVideoButton_clicked"
QT_MOC_LITERAL(30, 591, 26), // "on_playVideoButton_clicked"
QT_MOC_LITERAL(31, 618, 26), // "on_stopVideoButton_clicked"
QT_MOC_LITERAL(32, 645, 32), // "on_volumeDownVideoButton_clicked"
QT_MOC_LITERAL(33, 678, 30), // "on_volumeUpVideoButton_clicked"
QT_MOC_LITERAL(34, 709, 9), // "playVideo"
QT_MOC_LITERAL(35, 719, 9), // "stopVideo"
QT_MOC_LITERAL(36, 729, 28), // "on_setTimeDateButton_clicked"
QT_MOC_LITERAL(37, 758, 29), // "on_doneTimeDateButton_clicked"
QT_MOC_LITERAL(38, 788, 31), // "on_cancelTimeDateButton_clicked"
QT_MOC_LITERAL(39, 820, 17), // "handleButtonPress"
QT_MOC_LITERAL(40, 838, 11), // "buttonIndex"
QT_MOC_LITERAL(41, 850, 17), // "handleSliderMoved"
QT_MOC_LITERAL(42, 868, 5), // "value"
QT_MOC_LITERAL(43, 874, 19), // "on_acButton_clicked"
QT_MOC_LITERAL(44, 894, 21), // "on_calcButton_clicked"
QT_MOC_LITERAL(45, 916, 14), // "onDigitClicked"
QT_MOC_LITERAL(46, 931, 17), // "onOperatorClicked"
QT_MOC_LITERAL(47, 949, 15), // "onEqualsClicked"
QT_MOC_LITERAL(48, 965, 14), // "onClearClicked"
QT_MOC_LITERAL(49, 980, 34), // "on_calendarWidget_selectionCh..."
QT_MOC_LITERAL(50, 1015, 25), // "on_calendarButton_clicked"
QT_MOC_LITERAL(51, 1041, 15), // "enableBluetooth"
QT_MOC_LITERAL(52, 1057, 26), // "on_bluetoothButton_clicked"
QT_MOC_LITERAL(53, 1084, 21) // "updatBluetoothDevices"

    },
    "MainWindow\0on_videoButton_clicked\0\0"
    "on_musicButton_clicked\0on_settingsButton_clicked\0"
    "on_themeComboBox_currentIndexChanged\0"
    "index\0updateTime\0goBackHome\0"
    "updateFlashStatus\0updateSongsList\0"
    "on_playButton_clicked\0on_forwardButton_clicked\0"
    "on_backwardButton_clicked\0"
    "on_repeatButton_clicked\0"
    "on_shuffleButton_clicked\0on_stopButton_clicked\0"
    "playSong\0playToggle\0onSongListItemClicked\0"
    "QListWidgetItem*\0item\0onSongChange\0"
    "on_volumeDownButton_clicked\0"
    "on_volumeUpButton_clicked\0updateVideosList\0"
    "on_goTovideosListButton_clicked\0"
    "onVideoListItemClicked\0"
    "on_backwardVideoButton_clicked\0"
    "on_forwardVideoButton_clicked\0"
    "on_playVideoButton_clicked\0"
    "on_stopVideoButton_clicked\0"
    "on_volumeDownVideoButton_clicked\0"
    "on_volumeUpVideoButton_clicked\0playVideo\0"
    "stopVideo\0on_setTimeDateButton_clicked\0"
    "on_doneTimeDateButton_clicked\0"
    "on_cancelTimeDateButton_clicked\0"
    "handleButtonPress\0buttonIndex\0"
    "handleSliderMoved\0value\0on_acButton_clicked\0"
    "on_calcButton_clicked\0onDigitClicked\0"
    "onOperatorClicked\0onEqualsClicked\0"
    "onClearClicked\0on_calendarWidget_selectionChanged\0"
    "on_calendarButton_clicked\0enableBluetooth\0"
    "on_bluetoothButton_clicked\0"
    "updatBluetoothDevices"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  249,    2, 0x08 /* Private */,
       3,    0,  250,    2, 0x08 /* Private */,
       4,    0,  251,    2, 0x08 /* Private */,
       5,    1,  252,    2, 0x08 /* Private */,
       7,    0,  255,    2, 0x08 /* Private */,
       8,    0,  256,    2, 0x08 /* Private */,
       9,    0,  257,    2, 0x08 /* Private */,
      10,    0,  258,    2, 0x08 /* Private */,
      11,    0,  259,    2, 0x08 /* Private */,
      12,    0,  260,    2, 0x08 /* Private */,
      13,    0,  261,    2, 0x08 /* Private */,
      14,    0,  262,    2, 0x08 /* Private */,
      15,    0,  263,    2, 0x08 /* Private */,
      16,    0,  264,    2, 0x08 /* Private */,
      17,    0,  265,    2, 0x08 /* Private */,
      18,    0,  266,    2, 0x08 /* Private */,
      19,    1,  267,    2, 0x08 /* Private */,
      22,    0,  270,    2, 0x08 /* Private */,
      23,    0,  271,    2, 0x08 /* Private */,
      24,    0,  272,    2, 0x08 /* Private */,
      25,    0,  273,    2, 0x08 /* Private */,
      26,    0,  274,    2, 0x08 /* Private */,
      27,    1,  275,    2, 0x08 /* Private */,
      28,    0,  278,    2, 0x08 /* Private */,
      29,    0,  279,    2, 0x08 /* Private */,
      30,    0,  280,    2, 0x08 /* Private */,
      31,    0,  281,    2, 0x08 /* Private */,
      32,    0,  282,    2, 0x08 /* Private */,
      33,    0,  283,    2, 0x08 /* Private */,
      34,    0,  284,    2, 0x08 /* Private */,
      35,    0,  285,    2, 0x08 /* Private */,
      36,    0,  286,    2, 0x08 /* Private */,
      37,    0,  287,    2, 0x08 /* Private */,
      38,    0,  288,    2, 0x08 /* Private */,
      39,    1,  289,    2, 0x08 /* Private */,
      41,    1,  292,    2, 0x08 /* Private */,
      43,    0,  295,    2, 0x08 /* Private */,
      44,    0,  296,    2, 0x08 /* Private */,
      45,    0,  297,    2, 0x08 /* Private */,
      46,    0,  298,    2, 0x08 /* Private */,
      47,    0,  299,    2, 0x08 /* Private */,
      48,    0,  300,    2, 0x08 /* Private */,
      49,    0,  301,    2, 0x08 /* Private */,
      50,    0,  302,    2, 0x08 /* Private */,
      51,    0,  303,    2, 0x08 /* Private */,
      52,    0,  304,    2, 0x08 /* Private */,
      53,    0,  305,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_videoButton_clicked(); break;
        case 1: _t->on_musicButton_clicked(); break;
        case 2: _t->on_settingsButton_clicked(); break;
        case 3: _t->on_themeComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateTime(); break;
        case 5: _t->goBackHome(); break;
        case 6: _t->updateFlashStatus(); break;
        case 7: _t->updateSongsList(); break;
        case 8: _t->on_playButton_clicked(); break;
        case 9: _t->on_forwardButton_clicked(); break;
        case 10: _t->on_backwardButton_clicked(); break;
        case 11: _t->on_repeatButton_clicked(); break;
        case 12: _t->on_shuffleButton_clicked(); break;
        case 13: _t->on_stopButton_clicked(); break;
        case 14: _t->playSong(); break;
        case 15: _t->playToggle(); break;
        case 16: _t->onSongListItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 17: _t->onSongChange(); break;
        case 18: _t->on_volumeDownButton_clicked(); break;
        case 19: _t->on_volumeUpButton_clicked(); break;
        case 20: _t->updateVideosList(); break;
        case 21: _t->on_goTovideosListButton_clicked(); break;
        case 22: _t->onVideoListItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 23: _t->on_backwardVideoButton_clicked(); break;
        case 24: _t->on_forwardVideoButton_clicked(); break;
        case 25: _t->on_playVideoButton_clicked(); break;
        case 26: _t->on_stopVideoButton_clicked(); break;
        case 27: _t->on_volumeDownVideoButton_clicked(); break;
        case 28: _t->on_volumeUpVideoButton_clicked(); break;
        case 29: _t->playVideo(); break;
        case 30: _t->stopVideo(); break;
        case 31: _t->on_setTimeDateButton_clicked(); break;
        case 32: _t->on_doneTimeDateButton_clicked(); break;
        case 33: _t->on_cancelTimeDateButton_clicked(); break;
        case 34: _t->handleButtonPress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->handleSliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->on_acButton_clicked(); break;
        case 37: _t->on_calcButton_clicked(); break;
        case 38: _t->onDigitClicked(); break;
        case 39: _t->onOperatorClicked(); break;
        case 40: _t->onEqualsClicked(); break;
        case 41: _t->onClearClicked(); break;
        case 42: _t->on_calendarWidget_selectionChanged(); break;
        case 43: _t->on_calendarButton_clicked(); break;
        case 44: _t->enableBluetooth(); break;
        case 45: _t->on_bluetoothButton_clicked(); break;
        case 46: _t->updatBluetoothDevices(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 47;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
