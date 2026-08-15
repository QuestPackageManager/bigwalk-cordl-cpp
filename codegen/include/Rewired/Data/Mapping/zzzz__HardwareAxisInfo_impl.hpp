#pragma once
// IWYU pragma private; include "Rewired/Data/Mapping/HardwareAxisInfo.hpp"
#include "Rewired/Data/Mapping/zzzz__SpecialAxisType_impl.hpp"
#include "Rewired/zzzz__AxisCoordinateMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/Data/Mapping/zzzz__HardwareAxisInfo_def.hpp"
#include "Rewired/Data/Mapping/zzzz__SpecialAxisType_def.hpp"
#include "Rewired/Utils/Interfaces/zzzz__IDeepCloneable_def.hpp"
#include "Rewired/zzzz__AxisCoordinateMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareAxisInfo.get_dataFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::AxisCoordinateMode (::Rewired::Data::Mapping::HardwareAxisInfo::*)()>(&::Rewired::Data::Mapping::HardwareAxisInfo::get_dataFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {"get_dataFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareAxisInfo.get_excludeFromPolling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Data::Mapping::HardwareAxisInfo::*)()>(&::Rewired::Data::Mapping::HardwareAxisInfo::get_excludeFromPolling)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039e7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {"get_excludeFromPolling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareAxisInfo.get_specialAxisType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::SpecialAxisType (::Rewired::Data::Mapping::HardwareAxisInfo::*)()>(&::Rewired::Data::Mapping::HardwareAxisInfo::get_specialAxisType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {"get_specialAxisType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareAxisInfo.get_pollingDeadZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Rewired::Data::Mapping::HardwareAxisInfo::*)()>(&::Rewired::Data::Mapping::HardwareAxisInfo::get_pollingDeadZone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {"get_pollingDeadZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareAxisInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareAxisInfo::*)()>(&::Rewired::Data::Mapping::HardwareAxisInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818d0c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareAxisInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Data::Mapping::HardwareAxisInfo::*)(::Rewired::AxisCoordinateMode, bool, float_t, ::Rewired::Data::Mapping::SpecialAxisType)>(&::Rewired::Data::Mapping::HardwareAxisInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1818d0ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::AxisCoordinateMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::Data::Mapping::SpecialAxisType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareAxisInfo.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::HardwareAxisInfo* (*)()>(&::Rewired::Data::Mapping::HardwareAxisInfo::get_Default)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818d0cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Data::Mapping::HardwareAxisInfo.DeepClone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Rewired::Data::Mapping::HardwareAxisInfo::*)()>(&::Rewired::Data::Mapping::HardwareAxisInfo::DeepClone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1818d0c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {"DeepClone", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::AxisCoordinateMode& Rewired::Data::Mapping::HardwareAxisInfo::__cordl_internal_get__dataFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataFormat;
}
constexpr ::Rewired::AxisCoordinateMode const& Rewired::Data::Mapping::HardwareAxisInfo::__cordl_internal_get__dataFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataFormat;
}
constexpr void Rewired::Data::Mapping::HardwareAxisInfo::__cordl_internal_set__dataFormat(::Rewired::AxisCoordinateMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataFormat = value;
}
constexpr bool& Rewired::Data::Mapping::HardwareAxisInfo::__cordl_internal_get__excludeFromPolling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____excludeFromPolling;
}
constexpr bool const& Rewired::Data::Mapping::HardwareAxisInfo::__cordl_internal_get__excludeFromPolling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____excludeFromPolling;
}
constexpr void Rewired::Data::Mapping::HardwareAxisInfo::__cordl_internal_set__excludeFromPolling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____excludeFromPolling = value;
}
constexpr ::Rewired::Data::Mapping::SpecialAxisType& Rewired::Data::Mapping::HardwareAxisInfo::__cordl_internal_get__specialAxisType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____specialAxisType;
}
constexpr ::Rewired::Data::Mapping::SpecialAxisType const& Rewired::Data::Mapping::HardwareAxisInfo::__cordl_internal_get__specialAxisType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____specialAxisType;
}
constexpr void Rewired::Data::Mapping::HardwareAxisInfo::__cordl_internal_set__specialAxisType(::Rewired::Data::Mapping::SpecialAxisType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____specialAxisType = value;
}
constexpr float_t& Rewired::Data::Mapping::HardwareAxisInfo::__cordl_internal_get__pollingDeadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pollingDeadZone;
}
constexpr float_t const& Rewired::Data::Mapping::HardwareAxisInfo::__cordl_internal_get__pollingDeadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pollingDeadZone;
}
constexpr void Rewired::Data::Mapping::HardwareAxisInfo::__cordl_internal_set__pollingDeadZone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pollingDeadZone = value;
}
inline ::Rewired::AxisCoordinateMode Rewired::Data::Mapping::HardwareAxisInfo::get_dataFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {"get_dataFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::AxisCoordinateMode>(this, ___internal_method);
}
inline bool Rewired::Data::Mapping::HardwareAxisInfo::get_excludeFromPolling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {"get_excludeFromPolling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::SpecialAxisType Rewired::Data::Mapping::HardwareAxisInfo::get_specialAxisType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {"get_specialAxisType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::SpecialAxisType>(this, ___internal_method);
}
inline float_t Rewired::Data::Mapping::HardwareAxisInfo::get_pollingDeadZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {"get_pollingDeadZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::HardwareAxisInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Data::Mapping::HardwareAxisInfo::_ctor(::Rewired::AxisCoordinateMode  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Data::Mapping::SpecialAxisType  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::AxisCoordinateMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Rewired::Data::Mapping::SpecialAxisType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline ::Rewired::Data::Mapping::HardwareAxisInfo* Rewired::Data::Mapping::HardwareAxisInfo::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::HardwareAxisInfo*>(nullptr, ___internal_method);
}
inline ::System::Object* Rewired::Data::Mapping::HardwareAxisInfo::DeepClone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Data::Mapping::HardwareAxisInfo*>(),
                        {"DeepClone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Rewired::Data::Mapping::HardwareAxisInfo* Rewired::Data::Mapping::HardwareAxisInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::HardwareAxisInfo*>());
}
inline ::Rewired::Data::Mapping::HardwareAxisInfo* Rewired::Data::Mapping::HardwareAxisInfo::New_ctor(::Rewired::AxisCoordinateMode  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, ::Rewired::Data::Mapping::SpecialAxisType  _cordl_fixed_empty_name_whitespace_param_3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Data::Mapping::HardwareAxisInfo*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3));
}
/// @brief Convert operator to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr  Rewired::Data::Mapping::HardwareAxisInfo::operator ::Rewired::Utils::Interfaces::IDeepCloneable*() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IDeepCloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Utils::Interfaces::IDeepCloneable"
constexpr ::Rewired::Utils::Interfaces::IDeepCloneable* Rewired::Data::Mapping::HardwareAxisInfo::i___Rewired__Utils__Interfaces__IDeepCloneable() noexcept {
return static_cast<::Rewired::Utils::Interfaces::IDeepCloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::Data::Mapping::HardwareAxisInfo::HardwareAxisInfo()   {
}
