#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/SplineRelativeTransform.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__SplineRelativeTransform_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineRelativeTransform.CaptureOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineRelativeTransform::*)()>(&::JBooth::MicroVerseCore::SplineRelativeTransform::CaptureOffset)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x1814239a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRelativeTransform*>(),
                        {"CaptureOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineRelativeTransform.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineRelativeTransform::*)()>(&::JBooth::MicroVerseCore::SplineRelativeTransform::Refresh)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x181424160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRelativeTransform*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::SplineRelativeTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::SplineRelativeTransform::*)()>(&::JBooth::MicroVerseCore::SplineRelativeTransform::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRelativeTransform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_get_splineContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineContainer;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_get_splineContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineContainer;
}
constexpr void JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_set_splineContainer(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineContainer = value;
}
constexpr ::Unity::Mathematics::float3& JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::Unity::Mathematics::float3 const& JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_set_offset(::Unity::Mathematics::float3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr ::UnityEngine::Quaternion& JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_get_rotOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotOffset;
}
constexpr ::UnityEngine::Quaternion const& JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_get_rotOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotOffset;
}
constexpr void JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_set_rotOffset(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotOffset = value;
}
constexpr float_t& JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_get_T()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___T;
}
constexpr float_t const& JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_get_T() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___T;
}
constexpr void JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_set_T(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___T = value;
}
constexpr bool& JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_get_keepUpright()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepUpright;
}
constexpr bool const& JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_get_keepUpright() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keepUpright;
}
constexpr void JBooth::MicroVerseCore::SplineRelativeTransform::__cordl_internal_set_keepUpright(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keepUpright = value;
}
inline void JBooth::MicroVerseCore::SplineRelativeTransform::CaptureOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRelativeTransform*>(),
                        {"CaptureOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplineRelativeTransform::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRelativeTransform*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::SplineRelativeTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::SplineRelativeTransform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::SplineRelativeTransform* JBooth::MicroVerseCore::SplineRelativeTransform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::SplineRelativeTransform*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::SplineRelativeTransform::SplineRelativeTransform()   {
}
