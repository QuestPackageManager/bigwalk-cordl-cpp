#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/DisplayNameAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__DisplayNameAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::DisplayNameAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::PostProcessing::DisplayNameAttribute::*)(::StringW)>(&::UnityEngine::Rendering::PostProcessing::DisplayNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DisplayNameAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::PostProcessing::DisplayNameAttribute::__cordl_internal_get_displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr ::StringW const& UnityEngine::Rendering::PostProcessing::DisplayNameAttribute::__cordl_internal_get_displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr void UnityEngine::Rendering::PostProcessing::DisplayNameAttribute::__cordl_internal_set_displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayName = value;
}
inline void UnityEngine::Rendering::PostProcessing::DisplayNameAttribute::_ctor(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::DisplayNameAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayName);
}
inline ::UnityEngine::Rendering::PostProcessing::DisplayNameAttribute* UnityEngine::Rendering::PostProcessing::DisplayNameAttribute::New_ctor(::StringW  displayName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::PostProcessing::DisplayNameAttribute*>(displayName));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::DisplayNameAttribute::DisplayNameAttribute()   {
}
