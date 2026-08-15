#pragma once
// IWYU pragma private; include "GlobalNamespace/LAWdDgCTfWDAtvfcAWIOolUUnLxjA.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LAWdDgCTfWDAtvfcAWIOolUUnLxjA_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LAWdDgCTfWDAtvfcAWIOolUUnLxjA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LAWdDgCTfWDAtvfcAWIOolUUnLxjA::*)()>(&::GlobalNamespace::LAWdDgCTfWDAtvfcAWIOolUUnLxjA::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LAWdDgCTfWDAtvfcAWIOolUUnLxjA*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LAWdDgCTfWDAtvfcAWIOolUUnLxjA::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LAWdDgCTfWDAtvfcAWIOolUUnLxjA*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LAWdDgCTfWDAtvfcAWIOolUUnLxjA* GlobalNamespace::LAWdDgCTfWDAtvfcAWIOolUUnLxjA::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LAWdDgCTfWDAtvfcAWIOolUUnLxjA*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LAWdDgCTfWDAtvfcAWIOolUUnLxjA::LAWdDgCTfWDAtvfcAWIOolUUnLxjA()   {
}
