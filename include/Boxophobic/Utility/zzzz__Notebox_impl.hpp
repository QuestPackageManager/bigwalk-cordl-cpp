#pragma once
// IWYU pragma private; include "Boxophobic/Utility/Notebox.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Boxophobic/Utility/zzzz__Notebox_def.hpp"
//  Writing Method size for method: ::Boxophobic::Utility::Notebox._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Boxophobic::Utility::Notebox::*)()>(&::Boxophobic::Utility::Notebox::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::Notebox*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Boxophobic::Utility::Notebox::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Boxophobic::Utility::Notebox*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Boxophobic::Utility::Notebox* Boxophobic::Utility::Notebox::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Boxophobic::Utility::Notebox*>());
}
// Ctor Parameters []
constexpr ::Boxophobic::Utility::Notebox::Notebox()   {
}
