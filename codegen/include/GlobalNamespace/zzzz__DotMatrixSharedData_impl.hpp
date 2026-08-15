#pragma once
// IWYU pragma private; include "GlobalNamespace/DotMatrixSharedData.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__DotMatrixSharedData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DotMatrixSharedData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DotMatrixSharedData::*)()>(&::GlobalNamespace::DotMatrixSharedData::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DotMatrixSharedData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::DotMatrixSharedData::__cordl_internal_get_animationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationDuration;
}
constexpr float_t const& GlobalNamespace::DotMatrixSharedData::__cordl_internal_get_animationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationDuration;
}
constexpr void GlobalNamespace::DotMatrixSharedData::__cordl_internal_set_animationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationDuration = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DotMatrixSharedData::__cordl_internal_get_standardLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standardLeft;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DotMatrixSharedData::__cordl_internal_get_standardLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standardLeft;
}
constexpr void GlobalNamespace::DotMatrixSharedData::__cordl_internal_set_standardLeft(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___standardLeft = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DotMatrixSharedData::__cordl_internal_get_standardRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standardRight;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DotMatrixSharedData::__cordl_internal_get_standardRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standardRight;
}
constexpr void GlobalNamespace::DotMatrixSharedData::__cordl_internal_set_standardRight(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___standardRight = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DotMatrixSharedData::__cordl_internal_get_sucessLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sucessLeft;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DotMatrixSharedData::__cordl_internal_get_sucessLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sucessLeft;
}
constexpr void GlobalNamespace::DotMatrixSharedData::__cordl_internal_set_sucessLeft(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sucessLeft = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DotMatrixSharedData::__cordl_internal_get_sucessRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sucessRight;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DotMatrixSharedData::__cordl_internal_get_sucessRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sucessRight;
}
constexpr void GlobalNamespace::DotMatrixSharedData::__cordl_internal_set_sucessRight(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sucessRight = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DotMatrixSharedData::__cordl_internal_get_failureLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureLeft;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DotMatrixSharedData::__cordl_internal_get_failureLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureLeft;
}
constexpr void GlobalNamespace::DotMatrixSharedData::__cordl_internal_set_failureLeft(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failureLeft = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::DotMatrixSharedData::__cordl_internal_get_failureRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureRight;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::DotMatrixSharedData::__cordl_internal_get_failureRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failureRight;
}
constexpr void GlobalNamespace::DotMatrixSharedData::__cordl_internal_set_failureRight(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failureRight = value;
}
inline void GlobalNamespace::DotMatrixSharedData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DotMatrixSharedData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DotMatrixSharedData* GlobalNamespace::DotMatrixSharedData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DotMatrixSharedData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DotMatrixSharedData::DotMatrixSharedData()   {
}
