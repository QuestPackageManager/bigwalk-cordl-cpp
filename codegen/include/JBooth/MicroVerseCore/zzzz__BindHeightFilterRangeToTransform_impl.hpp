#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/BindHeightFilterRangeToTransform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__BindHeightFilterRangeToTransform_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__BindHeightFilterRangeToTransform_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget::BindHeightFilterRangeToTransform_BindTarget(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget::BindHeightFilterRangeToTransform_BindTarget()   {
}
constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget  JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget::Minimum{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget  JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget::Maximum{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode::BindHeightFilterRangeToTransform_ValueMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode::BindHeightFilterRangeToTransform_ValueMode()   {
}
constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode  JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode::Absolute{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode  JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode::Relative{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::*)()>(&::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::JBooth::MicroVerseCore::Stamp>& JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::Stamp> const& JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::__cordl_internal_set_target(::UnityW<::JBooth::MicroVerseCore::Stamp>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr float_t& JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr float_t const& JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::__cordl_internal_set_offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget& JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::__cordl_internal_get_bindTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bindTarget;
}
constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget const& JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::__cordl_internal_get_bindTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bindTarget;
}
constexpr void JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::__cordl_internal_set_bindTarget(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_BindTarget  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bindTarget = value;
}
constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode& JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::__cordl_internal_get_valueMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueMode;
}
constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode const& JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::__cordl_internal_get_valueMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueMode;
}
constexpr void JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::__cordl_internal_set_valueMode(::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform_ValueMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___valueMode = value;
}
inline void JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform* JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::BindHeightFilterRangeToTransform::BindHeightFilterRangeToTransform()   {
}
