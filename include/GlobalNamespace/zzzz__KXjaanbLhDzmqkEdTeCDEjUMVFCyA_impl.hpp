#pragma once
// IWYU pragma private; include "GlobalNamespace/KXjaanbLhDzmqkEdTeCDEjUMVFCyA.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__KXjaanbLhDzmqkEdTeCDEjUMVFCyA_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KXjaanbLhDzmqkEdTeCDEjUMVFCyA._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KXjaanbLhDzmqkEdTeCDEjUMVFCyA::*)()>(&::GlobalNamespace::KXjaanbLhDzmqkEdTeCDEjUMVFCyA::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KXjaanbLhDzmqkEdTeCDEjUMVFCyA*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KXjaanbLhDzmqkEdTeCDEjUMVFCyA::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KXjaanbLhDzmqkEdTeCDEjUMVFCyA*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KXjaanbLhDzmqkEdTeCDEjUMVFCyA* GlobalNamespace::KXjaanbLhDzmqkEdTeCDEjUMVFCyA::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KXjaanbLhDzmqkEdTeCDEjUMVFCyA*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KXjaanbLhDzmqkEdTeCDEjUMVFCyA::KXjaanbLhDzmqkEdTeCDEjUMVFCyA()   {
}
