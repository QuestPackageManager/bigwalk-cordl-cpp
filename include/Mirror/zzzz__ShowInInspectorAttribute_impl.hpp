#pragma once
// IWYU pragma private; include "Mirror/ShowInInspectorAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Mirror/zzzz__ShowInInspectorAttribute_def.hpp"
//  Writing Method size for method: ::Mirror::ShowInInspectorAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ShowInInspectorAttribute::*)()>(&::Mirror::ShowInInspectorAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ShowInInspectorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Mirror::ShowInInspectorAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ShowInInspectorAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::ShowInInspectorAttribute* Mirror::ShowInInspectorAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::ShowInInspectorAttribute*>());
}
// Ctor Parameters []
constexpr ::Mirror::ShowInInspectorAttribute::ShowInInspectorAttribute()   {
}
