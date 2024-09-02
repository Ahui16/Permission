/****************************************************************************
** Meta object code from reading C++ file 'permissions.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../permissions.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'permissions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSPermissionsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPermissionsENDCLASS = QtMocHelpers::stringData(
    "Permissions",
    "handleButtonClick",
    "",
    "switchToUserPage",
    "switchToRolePage",
    "switchToGroupPage",
    "switchToFunctionPage",
    "addUser",
    "addUserPermission",
    "deleteUser",
    "deleteUserPermission",
    "editUser",
    "editUserPermission",
    "searchUserPermission",
    "addRole",
    "addRolePermission",
    "deleteRole",
    "deleteRolePermission",
    "editRole",
    "editRolePermission",
    "searchRolePermission",
    "addGroup",
    "addGroupPermission",
    "deleteGroup",
    "deleteGroupPermission",
    "editGroup",
    "editGroupPermission",
    "searchGroupPermission",
    "addFunction",
    "addFunctionPermission",
    "deleteFunction",
    "deleteFunctionPermission",
    "editFunction",
    "editFunctionPermission",
    "searchFunctionPermission",
    "addPermission",
    "deletePermission",
    "editPermission",
    "ViewLogs"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPermissionsENDCLASS_t {
    uint offsetsAndSizes[78];
    char stringdata0[12];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[17];
    char stringdata5[18];
    char stringdata6[21];
    char stringdata7[8];
    char stringdata8[18];
    char stringdata9[11];
    char stringdata10[21];
    char stringdata11[9];
    char stringdata12[19];
    char stringdata13[21];
    char stringdata14[8];
    char stringdata15[18];
    char stringdata16[11];
    char stringdata17[21];
    char stringdata18[9];
    char stringdata19[19];
    char stringdata20[21];
    char stringdata21[9];
    char stringdata22[19];
    char stringdata23[12];
    char stringdata24[22];
    char stringdata25[10];
    char stringdata26[20];
    char stringdata27[22];
    char stringdata28[12];
    char stringdata29[22];
    char stringdata30[15];
    char stringdata31[25];
    char stringdata32[13];
    char stringdata33[23];
    char stringdata34[25];
    char stringdata35[14];
    char stringdata36[17];
    char stringdata37[15];
    char stringdata38[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPermissionsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPermissionsENDCLASS_t qt_meta_stringdata_CLASSPermissionsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "Permissions"
        QT_MOC_LITERAL(12, 17),  // "handleButtonClick"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 16),  // "switchToUserPage"
        QT_MOC_LITERAL(48, 16),  // "switchToRolePage"
        QT_MOC_LITERAL(65, 17),  // "switchToGroupPage"
        QT_MOC_LITERAL(83, 20),  // "switchToFunctionPage"
        QT_MOC_LITERAL(104, 7),  // "addUser"
        QT_MOC_LITERAL(112, 17),  // "addUserPermission"
        QT_MOC_LITERAL(130, 10),  // "deleteUser"
        QT_MOC_LITERAL(141, 20),  // "deleteUserPermission"
        QT_MOC_LITERAL(162, 8),  // "editUser"
        QT_MOC_LITERAL(171, 18),  // "editUserPermission"
        QT_MOC_LITERAL(190, 20),  // "searchUserPermission"
        QT_MOC_LITERAL(211, 7),  // "addRole"
        QT_MOC_LITERAL(219, 17),  // "addRolePermission"
        QT_MOC_LITERAL(237, 10),  // "deleteRole"
        QT_MOC_LITERAL(248, 20),  // "deleteRolePermission"
        QT_MOC_LITERAL(269, 8),  // "editRole"
        QT_MOC_LITERAL(278, 18),  // "editRolePermission"
        QT_MOC_LITERAL(297, 20),  // "searchRolePermission"
        QT_MOC_LITERAL(318, 8),  // "addGroup"
        QT_MOC_LITERAL(327, 18),  // "addGroupPermission"
        QT_MOC_LITERAL(346, 11),  // "deleteGroup"
        QT_MOC_LITERAL(358, 21),  // "deleteGroupPermission"
        QT_MOC_LITERAL(380, 9),  // "editGroup"
        QT_MOC_LITERAL(390, 19),  // "editGroupPermission"
        QT_MOC_LITERAL(410, 21),  // "searchGroupPermission"
        QT_MOC_LITERAL(432, 11),  // "addFunction"
        QT_MOC_LITERAL(444, 21),  // "addFunctionPermission"
        QT_MOC_LITERAL(466, 14),  // "deleteFunction"
        QT_MOC_LITERAL(481, 24),  // "deleteFunctionPermission"
        QT_MOC_LITERAL(506, 12),  // "editFunction"
        QT_MOC_LITERAL(519, 22),  // "editFunctionPermission"
        QT_MOC_LITERAL(542, 24),  // "searchFunctionPermission"
        QT_MOC_LITERAL(567, 13),  // "addPermission"
        QT_MOC_LITERAL(581, 16),  // "deletePermission"
        QT_MOC_LITERAL(598, 14),  // "editPermission"
        QT_MOC_LITERAL(613, 8)   // "ViewLogs"
    },
    "Permissions",
    "handleButtonClick",
    "",
    "switchToUserPage",
    "switchToRolePage",
    "switchToGroupPage",
    "switchToFunctionPage",
    "addUser",
    "addUserPermission",
    "deleteUser",
    "deleteUserPermission",
    "editUser",
    "editUserPermission",
    "searchUserPermission",
    "addRole",
    "addRolePermission",
    "deleteRole",
    "deleteRolePermission",
    "editRole",
    "editRolePermission",
    "searchRolePermission",
    "addGroup",
    "addGroupPermission",
    "deleteGroup",
    "deleteGroupPermission",
    "editGroup",
    "editGroupPermission",
    "searchGroupPermission",
    "addFunction",
    "addFunctionPermission",
    "deleteFunction",
    "deleteFunctionPermission",
    "editFunction",
    "editFunctionPermission",
    "searchFunctionPermission",
    "addPermission",
    "deletePermission",
    "editPermission",
    "ViewLogs"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPermissionsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  236,    2, 0x08,    1 /* Private */,
       3,    0,  237,    2, 0x08,    2 /* Private */,
       4,    0,  238,    2, 0x08,    3 /* Private */,
       5,    0,  239,    2, 0x08,    4 /* Private */,
       6,    0,  240,    2, 0x08,    5 /* Private */,
       7,    0,  241,    2, 0x08,    6 /* Private */,
       8,    0,  242,    2, 0x08,    7 /* Private */,
       9,    0,  243,    2, 0x08,    8 /* Private */,
      10,    0,  244,    2, 0x08,    9 /* Private */,
      11,    0,  245,    2, 0x08,   10 /* Private */,
      12,    0,  246,    2, 0x08,   11 /* Private */,
      13,    0,  247,    2, 0x08,   12 /* Private */,
      14,    0,  248,    2, 0x08,   13 /* Private */,
      15,    0,  249,    2, 0x08,   14 /* Private */,
      16,    0,  250,    2, 0x08,   15 /* Private */,
      17,    0,  251,    2, 0x08,   16 /* Private */,
      18,    0,  252,    2, 0x08,   17 /* Private */,
      19,    0,  253,    2, 0x08,   18 /* Private */,
      20,    0,  254,    2, 0x08,   19 /* Private */,
      21,    0,  255,    2, 0x08,   20 /* Private */,
      22,    0,  256,    2, 0x08,   21 /* Private */,
      23,    0,  257,    2, 0x08,   22 /* Private */,
      24,    0,  258,    2, 0x08,   23 /* Private */,
      25,    0,  259,    2, 0x08,   24 /* Private */,
      26,    0,  260,    2, 0x08,   25 /* Private */,
      27,    0,  261,    2, 0x08,   26 /* Private */,
      28,    0,  262,    2, 0x08,   27 /* Private */,
      29,    0,  263,    2, 0x08,   28 /* Private */,
      30,    0,  264,    2, 0x08,   29 /* Private */,
      31,    0,  265,    2, 0x08,   30 /* Private */,
      32,    0,  266,    2, 0x08,   31 /* Private */,
      33,    0,  267,    2, 0x08,   32 /* Private */,
      34,    0,  268,    2, 0x08,   33 /* Private */,
      35,    0,  269,    2, 0x08,   34 /* Private */,
      36,    0,  270,    2, 0x08,   35 /* Private */,
      37,    0,  271,    2, 0x08,   36 /* Private */,
      38,    0,  272,    2, 0x08,   37 /* Private */,

 // slots: parameters
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
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Permissions::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSPermissionsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPermissionsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPermissionsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Permissions, std::true_type>,
        // method 'handleButtonClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchToUserPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchToRolePage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchToGroupPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchToFunctionPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addUserPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteUserPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editUser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editUserPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'searchUserPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addRole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addRolePermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteRole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteRolePermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editRole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editRolePermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'searchRolePermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addGroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addGroupPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteGroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteGroupPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editGroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editGroupPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'searchGroupPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addFunction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addFunctionPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteFunction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteFunctionPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editFunction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editFunctionPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'searchFunctionPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deletePermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ViewLogs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Permissions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Permissions *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleButtonClick(); break;
        case 1: _t->switchToUserPage(); break;
        case 2: _t->switchToRolePage(); break;
        case 3: _t->switchToGroupPage(); break;
        case 4: _t->switchToFunctionPage(); break;
        case 5: _t->addUser(); break;
        case 6: _t->addUserPermission(); break;
        case 7: _t->deleteUser(); break;
        case 8: _t->deleteUserPermission(); break;
        case 9: _t->editUser(); break;
        case 10: _t->editUserPermission(); break;
        case 11: _t->searchUserPermission(); break;
        case 12: _t->addRole(); break;
        case 13: _t->addRolePermission(); break;
        case 14: _t->deleteRole(); break;
        case 15: _t->deleteRolePermission(); break;
        case 16: _t->editRole(); break;
        case 17: _t->editRolePermission(); break;
        case 18: _t->searchRolePermission(); break;
        case 19: _t->addGroup(); break;
        case 20: _t->addGroupPermission(); break;
        case 21: _t->deleteGroup(); break;
        case 22: _t->deleteGroupPermission(); break;
        case 23: _t->editGroup(); break;
        case 24: _t->editGroupPermission(); break;
        case 25: _t->searchGroupPermission(); break;
        case 26: _t->addFunction(); break;
        case 27: _t->addFunctionPermission(); break;
        case 28: _t->deleteFunction(); break;
        case 29: _t->deleteFunctionPermission(); break;
        case 30: _t->editFunction(); break;
        case 31: _t->editFunctionPermission(); break;
        case 32: _t->searchFunctionPermission(); break;
        case 33: _t->addPermission(); break;
        case 34: _t->deletePermission(); break;
        case 35: _t->editPermission(); break;
        case 36: _t->ViewLogs(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Permissions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Permissions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPermissionsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Permissions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 37;
    }
    return _id;
}
QT_WARNING_POP
