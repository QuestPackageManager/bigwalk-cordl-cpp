#pragma once
// IWYU pragma private; include "GlobalNamespace/FunctionButtonAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__FunctionButtonAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FunctionButtonAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FunctionButtonAttribute::*)(::StringW)>(&::GlobalNamespace::FunctionButtonAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818382a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FunctionButtonAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FunctionButtonAttribute::__cordl_internal_get_Label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Label;
}
constexpr ::StringW const& GlobalNamespace::FunctionButtonAttribute::__cordl_internal_get_Label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Label;
}
constexpr void GlobalNamespace::FunctionButtonAttribute::__cordl_internal_set_Label(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Label = value;
}
inline void GlobalNamespace::FunctionButtonAttribute::_ctor(::StringW  label)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FunctionButtonAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, label);
}
inline ::GlobalNamespace::FunctionButtonAttribute* GlobalNamespace::FunctionButtonAttribute::New_ctor(::StringW  label)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FunctionButtonAttribute*>(label));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FunctionButtonAttribute::FunctionButtonAttribute()   {
}
