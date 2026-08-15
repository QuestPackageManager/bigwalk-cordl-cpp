#pragma once
// IWYU pragma private; include "Rowlan/UnityStandardAssets/CrossPlatformInput/TiltInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Rowlan/UnityStandardAssets/CrossPlatformInput/zzzz__TiltInput_def.hpp"
#include "Rowlan/UnityStandardAssets/CrossPlatformInput/zzzz__CrossPlatformInputManager_def.hpp"
#include "Rowlan/UnityStandardAssets/CrossPlatformInput/zzzz__TiltInput_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions::TiltInput_AxisOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions::TiltInput_AxisOptions()   {
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions  Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions::ForwardAxis{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions  Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions::SidewaysAxis{static_cast<int32_t>(0x1)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType::AxisMapping_TiltInput_MappingType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType::AxisMapping_TiltInput_MappingType()   {
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType  Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType::NamedAxis{static_cast<int32_t>(0x0)};
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType  Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType::MousePositionX{static_cast<int32_t>(0x1)};
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType  Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType::MousePositionY{static_cast<int32_t>(0x2)};
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType  Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType::MousePositionZ{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType& Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType const& Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping::__cordl_internal_set_type(::Rowlan::UnityStandardAssets::CrossPlatformInput::AxisMapping_TiltInput_MappingType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::StringW& Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping::__cordl_internal_get_axisName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisName;
}
constexpr ::StringW const& Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping::__cordl_internal_get_axisName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisName;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping::__cordl_internal_set_axisName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisName = value;
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping* Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping*>());
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping::TiltInput_AxisMapping()   {
}
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::OnEnable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181ac16d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::Update)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x181ac1770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::OnDisable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181ac1610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::*)()>(&::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181ac1a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping*& Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_get_mapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapping;
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping* const& Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_get_mapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapping;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_set_mapping(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisMapping*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapping = value;
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions& Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_get_tiltAroundAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltAroundAxis;
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions const& Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_get_tiltAroundAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiltAroundAxis;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_set_tiltAroundAxis(::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput_AxisOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tiltAroundAxis = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_get_fullTiltAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullTiltAngle;
}
constexpr float_t const& Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_get_fullTiltAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullTiltAngle;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_set_fullTiltAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullTiltAngle = value;
}
constexpr float_t& Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_get_centreAngleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centreAngleOffset;
}
constexpr float_t const& Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_get_centreAngleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centreAngleOffset;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_set_centreAngleOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centreAngleOffset = value;
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*& Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_get_m_SteerAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SteerAxis;
}
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis* const& Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_get_m_SteerAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SteerAxis;
}
constexpr void Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::__cordl_internal_set_m_SteerAxis(::Rowlan::UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager_VirtualAxis*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SteerAxis = value;
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput* Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput*>());
}
// Ctor Parameters []
constexpr ::Rowlan::UnityStandardAssets::CrossPlatformInput::TiltInput::TiltInput()   {
}
