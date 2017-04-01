#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.switcheroo_control"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[1054]; const double alignment; void * const ptr;}  switcheroo_control_resource_data = { {
  0x47, 0x56, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x74, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x28, 0x05, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
  0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x05, 0x00, 0x00, 0x00, 0x4a, 0x8e, 0x8f, 0x0b, 
  0x01, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 
  0x04, 0x00, 0x4c, 0x00, 0xb0, 0x00, 0x00, 0x00, 
  0xb4, 0x00, 0x00, 0x00, 0xd4, 0xb5, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xb4, 0x00, 0x00, 0x00, 
  0x01, 0x00, 0x4c, 0x00, 0xb8, 0x00, 0x00, 0x00, 
  0xbc, 0x00, 0x00, 0x00, 0xc8, 0x7d, 0x4b, 0x83, 
  0x03, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 
  0x12, 0x00, 0x4c, 0x00, 0xd0, 0x00, 0x00, 0x00, 
  0xd4, 0x00, 0x00, 0x00, 0x51, 0x57, 0x03, 0x93, 
  0x00, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 
  0x07, 0x00, 0x4c, 0x00, 0xdc, 0x00, 0x00, 0x00, 
  0xe0, 0x00, 0x00, 0x00, 0x2a, 0xeb, 0x68, 0x25, 
  0x02, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 
  0x20, 0x00, 0x76, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x1e, 0x04, 0x00, 0x00, 0x6e, 0x65, 0x74, 0x2f, 
  0x03, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x53, 0x77, 0x69, 0x74, 
  0x63, 0x68, 0x65, 0x72, 0x6f, 0x6f, 0x43, 0x6f, 
  0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x2f, 0x00, 0x00, 
  0x04, 0x00, 0x00, 0x00, 0x68, 0x61, 0x64, 0x65, 
  0x73, 0x73, 0x2f, 0x00, 0x02, 0x00, 0x00, 0x00, 
  0x6e, 0x65, 0x74, 0x2e, 0x68, 0x61, 0x64, 0x65, 
  0x73, 0x73, 0x2e, 0x53, 0x77, 0x69, 0x74, 0x63, 
  0x68, 0x65, 0x72, 0x6f, 0x6f, 0x43, 0x6f, 0x6e, 
  0x74, 0x72, 0x6f, 0x6c, 0x2e, 0x78, 0x6d, 0x6c, 
  0x0e, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3c, 0x3f, 0x78, 0x6d, 0x6c, 0x20, 0x76, 0x65, 
  0x72, 0x73, 0x69, 0x6f, 0x6e, 0x3d, 0x22, 0x31, 
  0x2e, 0x30, 0x22, 0x3f, 0x3e, 0x0a, 0x3c, 0x21, 
  0x44, 0x4f, 0x43, 0x54, 0x59, 0x50, 0x45, 0x20, 
  0x6e, 0x6f, 0x64, 0x65, 0x20, 0x50, 0x55, 0x42, 
  0x4c, 0x49, 0x43, 0x20, 0x22, 0x2d, 0x2f, 0x2f, 
  0x66, 0x72, 0x65, 0x65, 0x64, 0x65, 0x73, 0x6b, 
  0x74, 0x6f, 0x70, 0x2f, 0x2f, 0x44, 0x54, 0x44, 
  0x20, 0x44, 0x2d, 0x42, 0x55, 0x53, 0x20, 0x4f, 
  0x62, 0x6a, 0x65, 0x63, 0x74, 0x20, 0x49, 0x6e, 
  0x74, 0x72, 0x6f, 0x73, 0x70, 0x65, 0x63, 0x74, 
  0x69, 0x6f, 0x6e, 0x20, 0x31, 0x2e, 0x30, 0x2f, 
  0x2f, 0x45, 0x4e, 0x22, 0x20, 0x22, 0x68, 0x74, 
  0x74, 0x70, 0x3a, 0x2f, 0x2f, 0x77, 0x77, 0x77, 
  0x2e, 0x66, 0x72, 0x65, 0x65, 0x64, 0x65, 0x73, 
  0x6b, 0x74, 0x6f, 0x70, 0x2e, 0x6f, 0x72, 0x67, 
  0x2f, 0x73, 0x74, 0x61, 0x6e, 0x64, 0x61, 0x72, 
  0x64, 0x73, 0x2f, 0x64, 0x62, 0x75, 0x73, 0x2f, 
  0x31, 0x2e, 0x30, 0x2f, 0x69, 0x6e, 0x74, 0x72, 
  0x6f, 0x73, 0x70, 0x65, 0x63, 0x74, 0x2e, 0x64, 
  0x74, 0x64, 0x22, 0x3e, 0x0a, 0x3c, 0x6e, 0x6f, 
  0x64, 0x65, 0x3e, 0x3c, 0x21, 0x2d, 0x2d, 0x0a, 
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x6e, 0x65, 
  0x74, 0x2e, 0x68, 0x61, 0x64, 0x65, 0x73, 0x73, 
  0x2e, 0x53, 0x77, 0x69, 0x74, 0x63, 0x68, 0x65, 
  0x72, 0x6f, 0x6f, 0x43, 0x6f, 0x6e, 0x74, 0x72, 
  0x6f, 0x6c, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 
  0x20, 0x20, 0x40, 0x73, 0x68, 0x6f, 0x72, 0x74, 
  0x5f, 0x64, 0x65, 0x73, 0x63, 0x72, 0x69, 0x70, 
  0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x20, 0x44, 0x2d, 
  0x42, 0x75, 0x73, 0x20, 0x70, 0x72, 0x6f, 0x78, 
  0x79, 0x20, 0x74, 0x6f, 0x20, 0x61, 0x63, 0x63, 
  0x65, 0x73, 0x73, 0x20, 0x64, 0x75, 0x61, 0x6c, 
  0x2d, 0x47, 0x50, 0x55, 0x20, 0x63, 0x6f, 0x6e, 
  0x74, 0x72, 0x6f, 0x6c, 0x73, 0x2e, 0x0a, 0x0a, 
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x41, 0x66, 
  0x74, 0x65, 0x72, 0x20, 0x63, 0x68, 0x65, 0x63, 
  0x6b, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x68, 0x65, 
  0x20, 0x61, 0x76, 0x61, 0x69, 0x6c, 0x61, 0x62, 
  0x69, 0x6c, 0x69, 0x74, 0x79, 0x20, 0x6f, 0x66, 
  0x20, 0x74, 0x77, 0x6f, 0x20, 0x73, 0x77, 0x69, 
  0x74, 0x63, 0x68, 0x61, 0x62, 0x6c, 0x65, 0x20, 
  0x47, 0x50, 0x55, 0x73, 0x20, 0x69, 0x6e, 0x20, 
  0x74, 0x68, 0x65, 0x20, 0x6d, 0x61, 0x63, 0x68, 
  0x69, 0x6e, 0x65, 0x2c, 0x0a, 0x20, 0x20, 0x20, 
  0x20, 0x20, 0x20, 0x63, 0x68, 0x65, 0x63, 0x6b, 
  0x20, 0x74, 0x68, 0x65, 0x20, 0x76, 0x61, 0x6c, 
  0x75, 0x65, 0x20, 0x6f, 0x66, 0x20, 0x6e, 0x65, 
  0x74, 0x2e, 0x68, 0x61, 0x64, 0x65, 0x73, 0x73, 
  0x2e, 0x53, 0x77, 0x69, 0x74, 0x63, 0x68, 0x65, 
  0x72, 0x6f, 0x6f, 0x43, 0x6f, 0x6e, 0x74, 0x72, 
  0x6f, 0x6c, 0x2e, 0x48, 0x61, 0x73, 0x44, 0x75, 
  0x61, 0x6c, 0x47, 0x70, 0x75, 0x20, 0x74, 0x6f, 
  0x20, 0x73, 0x65, 0x65, 0x0a, 0x20, 0x20, 0x20, 
  0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x72, 0x75, 
  0x6e, 0x6e, 0x69, 0x6e, 0x67, 0x20, 0x61, 0x70, 
  0x70, 0x6c, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 
  0x6e, 0x73, 0x20, 0x6f, 0x6e, 0x20, 0x74, 0x68, 
  0x65, 0x20, 0x64, 0x69, 0x73, 0x63, 0x72, 0x65, 
  0x74, 0x65, 0x20, 0x47, 0x50, 0x55, 0x20, 0x73, 
  0x68, 0x6f, 0x75, 0x6c, 0x64, 0x20, 0x62, 0x65, 
  0x20, 0x6f, 0x66, 0x66, 0x65, 0x72, 0x65, 0x64, 
  0x2e, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 
  0x20, 0x54, 0x68, 0x65, 0x20, 0x6f, 0x62, 0x6a, 
  0x65, 0x63, 0x74, 0x20, 0x70, 0x61, 0x74, 0x68, 
  0x20, 0x77, 0x69, 0x6c, 0x6c, 0x20, 0x62, 0x65, 
  0x20, 0x22, 0x2f, 0x6e, 0x65, 0x74, 0x2f, 0x68, 
  0x61, 0x64, 0x65, 0x73, 0x73, 0x2f, 0x53, 0x77, 
  0x69, 0x74, 0x63, 0x68, 0x65, 0x72, 0x6f, 0x6f, 
  0x43, 0x6f, 0x6e, 0x74, 0x72, 0x6f, 0x6c, 0x22, 
  0x2e, 0x0a, 0x20, 0x20, 0x2d, 0x2d, 0x3e, 0x3c, 
  0x69, 0x6e, 0x74, 0x65, 0x72, 0x66, 0x61, 0x63, 
  0x65, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x3d, 0x22, 
  0x6e, 0x65, 0x74, 0x2e, 0x68, 0x61, 0x64, 0x65, 
  0x73, 0x73, 0x2e, 0x53, 0x77, 0x69, 0x74, 0x63, 
  0x68, 0x65, 0x72, 0x6f, 0x6f, 0x43, 0x6f, 0x6e, 
  0x74, 0x72, 0x6f, 0x6c, 0x22, 0x3e, 0x3c, 0x21, 
  0x2d, 0x2d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 
  0x20, 0x20, 0x20, 0x48, 0x61, 0x73, 0x44, 0x75, 
  0x61, 0x6c, 0x47, 0x70, 0x75, 0x3a, 0x0a, 0x0a, 
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
  0x57, 0x68, 0x65, 0x74, 0x68, 0x65, 0x72, 0x20, 
  0x74, 0x77, 0x6f, 0x20, 0x73, 0x77, 0x69, 0x74, 
  0x63, 0x68, 0x61, 0x62, 0x6c, 0x65, 0x20, 0x47, 
  0x50, 0x55, 0x73, 0x20, 0x61, 0x72, 0x65, 0x20, 
  0x70, 0x72, 0x65, 0x73, 0x65, 0x6e, 0x74, 0x20, 
  0x6f, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x73, 
  0x79, 0x73, 0x74, 0x65, 0x6d, 0x2e, 0x0a, 0x20, 
  0x20, 0x20, 0x20, 0x2d, 0x2d, 0x3e, 0x3c, 0x70, 
  0x72, 0x6f, 0x70, 0x65, 0x72, 0x74, 0x79, 0x20, 
  0x6e, 0x61, 0x6d, 0x65, 0x3d, 0x22, 0x48, 0x61, 
  0x73, 0x44, 0x75, 0x61, 0x6c, 0x47, 0x70, 0x75, 
  0x22, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3d, 0x22, 
  0x62, 0x22, 0x20, 0x61, 0x63, 0x63, 0x65, 0x73, 
  0x73, 0x3d, 0x22, 0x72, 0x65, 0x61, 0x64, 0x22, 
  0x2f, 0x3e, 0x3c, 0x2f, 0x69, 0x6e, 0x74, 0x65, 
  0x72, 0x66, 0x61, 0x63, 0x65, 0x3e, 0x3c, 0x2f, 
  0x6e, 0x6f, 0x64, 0x65, 0x3e, 0x0a, 0x00, 0x00, 
  0x28, 0x75, 0x75, 0x61, 0x79, 0x29
} };

static GStaticResource static_resource = { switcheroo_control_resource_data.data, sizeof (switcheroo_control_resource_data.data), NULL, NULL, NULL };
extern GResource *switcheroo_control_get_resource (void);
GResource *switcheroo_control_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a sane way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for Win32 (x86) and x64 programs, as symbols on Win32 are prefixed
 * with an underscore but symbols on x64 are not.
 */
#ifdef _WIN64
#define G_MSVC_SYMBOL_PREFIX ""
#else
#define G_MSVC_SYMBOL_PREFIX "_"
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
