/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 5.5.1
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // /home/anderson/git/battlecity/BattleCity/log_parsing.txt
  0x0,0x0,0x0,0xbe,
  0x0,
  0x0,0x8,0x0,0x78,0x9c,0xcd,0x94,0x49,0xe,0xc3,0x20,0xc,0x45,0xf7,0x3e,0x85,
  0x8f,0x0,0x49,0xd3,0xfb,0x1f,0x2d,0xa1,0xd4,0x1,0xcb,0x3,0x53,0x23,0x55,0x7f,
  0x43,0x2c,0x3f,0x3c,0x92,0x80,0x61,0x45,0xb0,0x44,0x5f,0xfc,0x8e,0x59,0xdc,0xbe,
  0x1b,0x12,0x1e,0xe0,0x7b,0x59,0xba,0x7d,0x41,0x8b,0x96,0x6c,0x87,0xa3,0x50,0xfc,
  0xcc,0xfa,0x5b,0x3c,0xd5,0x1f,0x31,0x4e,0xf4,0x2d,0xf3,0x17,0x5b,0xf1,0xaf,0x21,
  0x11,0x5f,0xee,0x1c,0xe7,0x29,0xff,0x99,0xa,0x3e,0xd1,0x59,0xfe,0x53,0x37,0xc0,
  0x86,0x52,0x34,0x81,0x70,0x7f,0x1f,0x5f,0x9b,0xf0,0xfd,0x19,0xaf,0x6d,0x80,0x7e,
  0x66,0xf7,0x80,0xce,0xa6,0xae,0x70,0x5e,0xeb,0x53,0xe6,0xad,0xde,0xb6,0xf9,0x34,
  0x3f,0x8f,0xaf,0x15,0x51,0x9d,0xb4,0xb1,0xff,0xfd,0xbc,0xf5,0xd2,0x3b,0x5,0x63,
  0x5b,0x2b,0xf4,0x17,0xf1,0x67,0xf7,0x9f,0xfe,0x7f,0xc2,0xea,0xaa,0x87,0x77,0x22,
  0x3e,0xc0,0xf3,0xdc,0x7a,0xf8,0xd2,0xff,0x27,0x79,0xd9,0xb5,0x1e,0xbe,0x8e,0x26,
  0x4f,0x61,0x90,0x7f,0x2f,0xf2,0xad,0xf8,0x27,0x63,0x64,0x43,0x96,
  
};

static const unsigned char qt_resource_name[] = {
  // log_parsing.txt
  0x0,0xf,
  0x6,0x86,0x85,0xb4,
  0x0,0x6c,
  0x0,0x6f,0x0,0x67,0x0,0x5f,0x0,0x70,0x0,0x61,0x0,0x72,0x0,0x73,0x0,0x69,0x0,0x6e,0x0,0x67,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
  // :/log_parsing.txt
  0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_map)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_map)()
{
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_map)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_map)()
{
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (0x01, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_map)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_map)(); }
   } dummy;
}
