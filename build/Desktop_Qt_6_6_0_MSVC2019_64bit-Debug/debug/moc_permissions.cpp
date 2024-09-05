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
    "switchToMenuPage",
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
    "addMenu",
    "addMenuPermission",
    "deleteMenu",
    "deleteMenuPermission",
    "editMenu",
    "editMenuPermission",
    "searchMenuPermission",
    "addPermission",
    "deletePermission",
    "editPermission",
    "ViewLogs"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPermissionsENDCLASS_t {
    uint offsetsAndSizes[94];
    char stringdata0[12];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[17];
    char stringdata5[18];
    char stringdata6[21];
    char stringdata7[17];
    char stringdata8[8];
    char stringdata9[18];
    char stringdata10[11];
    char stringdata11[21];
    char stringdata12[9];
    char stringdata13[19];
    char stringdata14[21];
    char stringdata15[8];
    char stringdata16[18];
    char stringdata17[11];
    char stringdata18[21];
    char stringdata19[9];
    char stringdata20[19];
    char stringdata21[21];
    char stringdata22[9];
    char stringdata23[19];
    char stringdata24[12];
    char stringdata25[22];
    char stringdata26[10];
    char stringdata27[20];
    char stringdata28[22];
    char stringdata29[12];
    char stringdata30[22];
    char stringdata31[15];
    char stringdata32[25];
    char stringdata33[13];
    char stringdata34[23];
    char stringdata35[25];
    char stringdata36[8];
    char stringdata37[18];
    char stringdata38[11];
    char stringdata39[21];
    char stringdata40[9];
    char stringdata41[19];
    char stringdata42[21];
    char stringdata43[14];
    char stringdata44[17];
    char stringdata45[15];
    char stringdata46[9];
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
        QT_MOC_LITERAL(104, 16),  // "switchToMenuPage"
        QT_MOC_LITERAL(121, 7),  // "addUser"
        QT_MOC_LITERAL(129, 17),  // "addUserPermission"
        QT_MOC_LITERAL(147, 10),  // "deleteUser"
        QT_MOC_LITERAL(158, 20),  // "deleteUserPermission"
        QT_MOC_LITERAL(179, 8),  // "editUser"
        QT_MOC_LITERAL(188, 18),  // "editUserPermission"
        QT_MOC_LITERAL(207, 20),  // "searchUserPermission"
        QT_MOC_LITERAL(228, 7),  // "addRole"
        QT_MOC_LITERAL(236, 17),  // "addRolePermission"
        QT_MOC_LITERAL(254, 10),  // "deleteRole"
        QT_MOC_LITERAL(265, 20),  // "deleteRolePermission"
        QT_MOC_LITERAL(286, 8),  // "editRole"
        QT_MOC_LITERAL(295, 18),  // "editRolePermission"
        QT_MOC_LITERAL(314, 20),  // "searchRolePermission"
        QT_MOC_LITERAL(335, 8),  // "addGroup"
        QT_MOC_LITERAL(344, 18),  // "addGroupPermission"
        QT_MOC_LITERAL(363, 11),  // "deleteGroup"
        QT_MOC_LITERAL(375, 21),  // "deleteGroupPermission"
        QT_MOC_LITERAL(397, 9),  // "editGroup"
        QT_MOC_LITERAL(407, 19),  // "editGroupPermission"
        QT_MOC_LITERAL(427, 21),  // "searchGroupPermission"
        QT_MOC_LITERAL(449, 11),  // "addFunction"
        QT_MOC_LITERAL(461, 21),  // "addFunctionPermission"
        QT_MOC_LITERAL(483, 14),  // "deleteFunction"
        QT_MOC_LITERAL(498, 24),  // "deleteFunctionPermission"
        QT_MOC_LITERAL(523, 12),  // "editFunction"
        QT_MOC_LITERAL(536, 22),  // "editFunctionPermission"
        QT_MOC_LITERAL(559, 24),  // "searchFunctionPermission"
        QT_MOC_LITERAL(584, 7),  // "addMenu"
        QT_MOC_LITERAL(592, 17),  // "addMenuPermission"
        QT_MOC_LITERAL(610, 10),  // "deleteMenu"
        QT_MOC_LITERAL(621, 20),  // "deleteMenuPermission"
        QT_MOC_LITERAL(642, 8),  // "editMenu"
        QT_MOC_LITERAL(651, 18),  // "editMenuPermission"
        QT_MOC_LITERAL(670, 20),  // "searchMenuPermission"
        QT_MOC_LITERAL(691, 13),  // "addPermission"
        QT_MOC_LITERAL(705, 16),  // "deletePermission"
        QT_MOC_LITERAL(722, 14),  // "editPermission"
        QT_MOC_LITERAL(737, 8)   // "ViewLogs"
    },
    "Permissions",
    "handleButtonClick",
    "",
    "switchToUserPage",
    "switchToRolePage",
    "switchToGroupPage",
    "switchToFunctionPage",
    "switchToMenuPage",
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
    "addMenu",
    "addMenuPermission",
    "deleteMenu",
    "deleteMenuPermission",
    "editMenu",
    "editMenuPermission",
    "searchMenuPermission",
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
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  284,    2, 0x08,    1 /* Private */,
       3,    0,  285,    2, 0x08,    2 /* Private */,
       4,    0,  286,    2, 0x08,    3 /* Private */,
       5,    0,  287,    2, 0x08,    4 /* Private */,
       6,    0,  288,    2, 0x08,    5 /* Private */,
       7,    0,  289,    2, 0x08,    6 /* Private */,
       8,    0,  290,    2, 0x08,    7 /* Private */,
       9,    0,  291,    2, 0x08,    8 /* Private */,
      10,    0,  292,    2, 0x08,    9 /* Private */,
      11,    0,  293,    2, 0x08,   10 /* Private */,
      12,    0,  294,    2, 0x08,   11 /* Private */,
      13,    0,  295,    2, 0x08,   12 /* Private */,
      14,    0,  296,    2, 0x08,   13 /* Private */,
      15,    0,  297,    2, 0x08,   14 /* Private */,
      16,    0,  298,    2, 0x08,   15 /* Private */,
      17,    0,  299,    2, 0x08,   16 /* Private */,
      18,    0,  300,    2, 0x08,   17 /* Private */,
      19,    0,  301,    2, 0x08,   18 /* Private */,
      20,    0,  302,    2, 0x08,   19 /* Private */,
      21,    0,  303,    2, 0x08,   20 /* Private */,
      22,    0,  304,    2, 0x08,   21 /* Private */,
      23,    0,  305,    2, 0x08,   22 /* Private */,
      24,    0,  306,    2, 0x08,   23 /* Private */,
      25,    0,  307,    2, 0x08,   24 /* Private */,
      26,    0,  308,    2, 0x08,   25 /* Private */,
      27,    0,  309,    2, 0x08,   26 /* Private */,
      28,    0,  310,    2, 0x08,   27 /* Private */,
      29,    0,  311,    2, 0x08,   28 /* Private */,
      30,    0,  312,    2, 0x08,   29 /* Private */,
      31,    0,  313,    2, 0x08,   30 /* Private */,
      32,    0,  314,    2, 0x08,   31 /* Private */,
      33,    0,  315,    2, 0x08,   32 /* Private */,
      34,    0,  316,    2, 0x08,   33 /* Private */,
      35,    0,  317,    2, 0x08,   34 /* Private */,
      36,    0,  318,    2, 0x08,   35 /* Private */,
      37,    0,  319,    2, 0x08,   36 /* Private */,
      38,    0,  320,    2, 0x08,   37 /* Private */,
      39,    0,  321,    2, 0x08,   38 /* Private */,
      40,    0,  322,    2, 0x08,   39 /* Private */,
      41,    0,  323,    2, 0x08,   40 /* Private */,
      42,    0,  324,    2, 0x08,   41 /* Private */,
      43,    0,  325,    2, 0x08,   42 /* Private */,
      44,    0,  326,    2, 0x08,   43 /* Private */,
      45,    0,  327,    2, 0x08,   44 /* Private */,
      46,    0,  328,    2, 0x08,   45 /* Private */,

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
        // method 'switchToMenuPage'
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
        // method 'addMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addMenuPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteMenuPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'editMenuPermission'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'searchMenuPermission'
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
        case 5: _t->switchToMenuPage(); break;
        case 6: _t->addUser(); break;
        case 7: _t->addUserPermission(); break;
        case 8: _t->deleteUser(); break;
        case 9: _t->deleteUserPermission(); break;
        case 10: _t->editUser(); break;
        case 11: _t->editUserPermission(); break;
        case 12: _t->searchUserPermission(); break;
        case 13: _t->addRole(); break;
        case 14: _t->addRolePermission(); break;
        case 15: _t->deleteRole(); break;
        case 16: _t->deleteRolePermission(); break;
        case 17: _t->editRole(); break;
        case 18: _t->editRolePermission(); break;
        case 19: _t->searchRolePermission(); break;
        case 20: _t->addGroup(); break;
        case 21: _t->addGroupPermission(); break;
        case 22: _t->deleteGroup(); break;
        case 23: _t->deleteGroupPermission(); break;
        case 24: _t->editGroup(); break;
        case 25: _t->editGroupPermission(); break;
        case 26: _t->searchGroupPermission(); break;
        case 27: _t->addFunction(); break;
        case 28: _t->addFunctionPermission(); break;
        case 29: _t->deleteFunction(); break;
        case 30: _t->deleteFunctionPermission(); break;
        case 31: _t->editFunction(); break;
        case 32: _t->editFunctionPermission(); break;
        case 33: _t->searchFunctionPermission(); break;
        case 34: _t->addMenu(); break;
        case 35: _t->addMenuPermission(); break;
        case 36: _t->deleteMenu(); break;
        case 37: _t->deleteMenuPermission(); break;
        case 38: _t->editMenu(); break;
        case 39: _t->editMenuPermission(); break;
        case 40: _t->searchMenuPermission(); break;
        case 41: _t->addPermission(); break;
        case 42: _t->deletePermission(); break;
        case 43: _t->editPermission(); break;
        case 44: _t->ViewLogs(); break;
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
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 45;
    }
    return _id;
}
QT_WARNING_POP
