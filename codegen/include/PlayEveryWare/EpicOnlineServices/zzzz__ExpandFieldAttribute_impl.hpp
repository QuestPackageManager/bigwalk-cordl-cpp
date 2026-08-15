#pragma once
// IWYU pragma private; include "PlayEveryWare/EpicOnlineServices/ExpandFieldAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "PlayEveryWare/EpicOnlineServices/zzzz__ExpandFieldAttribute_def.hpp"
//  Writing Method size for method: ::PlayEveryWare::EpicOnlineServices::ExpandFieldAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayEveryWare::EpicOnlineServices::ExpandFieldAttribute::*)()>(&::PlayEveryWare::EpicOnlineServices::ExpandFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ExpandFieldAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayEveryWare::EpicOnlineServices::ExpandFieldAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayEveryWare::EpicOnlineServices::ExpandFieldAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayEveryWare::EpicOnlineServices::ExpandFieldAttribute* PlayEveryWare::EpicOnlineServices::ExpandFieldAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayEveryWare::EpicOnlineServices::ExpandFieldAttribute*>());
}
// Ctor Parameters []
constexpr ::PlayEveryWare::EpicOnlineServices::ExpandFieldAttribute::ExpandFieldAttribute()   {
}
