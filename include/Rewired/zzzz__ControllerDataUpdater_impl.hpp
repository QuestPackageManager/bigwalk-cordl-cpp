#pragma once
// IWYU pragma private; include "Rewired/ControllerDataUpdater.hpp"
#include "Rewired/zzzz__InputSource_impl.hpp"
#include "Rewired/zzzz__UnknownControllerHat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__ControllerDataUpdater_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "Rewired/zzzz__UnknownControllerHat_def.hpp"
//  Writing Method size for method: ::Rewired::ControllerDataUpdater._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerDataUpdater::*)(::Rewired::InputSource, int32_t, int32_t, ::ArrayW<::Rewired::UnknownControllerHat*>)>(&::Rewired::ControllerDataUpdater::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18195c8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerDataUpdater*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Rewired::UnknownControllerHat*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerDataUpdater.IsUnknownHatCardinal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::ControllerDataUpdater::*)(int32_t)>(&::Rewired::ControllerDataUpdater::IsUnknownHatCardinal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18195c810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerDataUpdater*>(),
                        {"IsUnknownHatCardinal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerDataUpdater.GetUnknownHatButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::UnknownControllerHat_HatButtons* (::Rewired::ControllerDataUpdater::*)(int32_t)>(&::Rewired::ControllerDataUpdater::GetUnknownHatButtons)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18195c770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerDataUpdater*>(),
                        {"GetUnknownHatButtons", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::ControllerDataUpdater.ClearData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::ControllerDataUpdater::*)()>(&::Rewired::ControllerDataUpdater::ClearData)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18195c6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerDataUpdater*>(),
                        {"ClearData", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::InputSource& Rewired::ControllerDataUpdater::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::Rewired::InputSource const& Rewired::ControllerDataUpdater::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void Rewired::ControllerDataUpdater::__cordl_internal_set_source(::Rewired::InputSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
constexpr int32_t& Rewired::ControllerDataUpdater::__cordl_internal_get_axisCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisCount;
}
constexpr int32_t const& Rewired::ControllerDataUpdater::__cordl_internal_get_axisCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisCount;
}
constexpr void Rewired::ControllerDataUpdater::__cordl_internal_set_axisCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisCount = value;
}
constexpr int32_t& Rewired::ControllerDataUpdater::__cordl_internal_get_buttonCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonCount;
}
constexpr int32_t const& Rewired::ControllerDataUpdater::__cordl_internal_get_buttonCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonCount;
}
constexpr void Rewired::ControllerDataUpdater::__cordl_internal_set_buttonCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonCount = value;
}
constexpr ::ArrayW<float_t>& Rewired::ControllerDataUpdater::__cordl_internal_get_axisValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisValues;
}
constexpr ::ArrayW<float_t> const& Rewired::ControllerDataUpdater::__cordl_internal_get_axisValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisValues;
}
constexpr void Rewired::ControllerDataUpdater::__cordl_internal_set_axisValues(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisValues = value;
}
constexpr ::ArrayW<bool>& Rewired::ControllerDataUpdater::__cordl_internal_get_buttonValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonValues;
}
constexpr ::ArrayW<bool> const& Rewired::ControllerDataUpdater::__cordl_internal_get_buttonValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonValues;
}
constexpr void Rewired::ControllerDataUpdater::__cordl_internal_set_buttonValues(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonValues = value;
}
constexpr ::ArrayW<float_t>& Rewired::ControllerDataUpdater::__cordl_internal_get_buttonPressureValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonPressureValues;
}
constexpr ::ArrayW<float_t> const& Rewired::ControllerDataUpdater::__cordl_internal_get_buttonPressureValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonPressureValues;
}
constexpr void Rewired::ControllerDataUpdater::__cordl_internal_set_buttonPressureValues(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonPressureValues = value;
}
constexpr ::ArrayW<bool>& Rewired::ControllerDataUpdater::__cordl_internal_get_axisHasBeenPressedOSXLinux()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisHasBeenPressedOSXLinux;
}
constexpr ::ArrayW<bool> const& Rewired::ControllerDataUpdater::__cordl_internal_get_axisHasBeenPressedOSXLinux() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axisHasBeenPressedOSXLinux;
}
constexpr void Rewired::ControllerDataUpdater::__cordl_internal_set_axisHasBeenPressedOSXLinux(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axisHasBeenPressedOSXLinux = value;
}
constexpr ::ArrayW<::Rewired::UnknownControllerHat*>& Rewired::ControllerDataUpdater::__cordl_internal_get_XuMeXfVIHvEcIWovAeYEczZBvpNd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XuMeXfVIHvEcIWovAeYEczZBvpNd;
}
constexpr ::ArrayW<::Rewired::UnknownControllerHat*> const& Rewired::ControllerDataUpdater::__cordl_internal_get_XuMeXfVIHvEcIWovAeYEczZBvpNd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XuMeXfVIHvEcIWovAeYEczZBvpNd;
}
constexpr void Rewired::ControllerDataUpdater::__cordl_internal_set_XuMeXfVIHvEcIWovAeYEczZBvpNd(::ArrayW<::Rewired::UnknownControllerHat*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XuMeXfVIHvEcIWovAeYEczZBvpNd = value;
}
constexpr bool& Rewired::ControllerDataUpdater::__cordl_internal_get_hasReceivedInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasReceivedInput;
}
constexpr bool const& Rewired::ControllerDataUpdater::__cordl_internal_get_hasReceivedInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasReceivedInput;
}
constexpr void Rewired::ControllerDataUpdater::__cordl_internal_set_hasReceivedInput(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasReceivedInput = value;
}
inline void Rewired::ControllerDataUpdater::_ctor(::Rewired::InputSource  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::UnknownControllerHat*>  _cordl_fixed_empty_name_whitespace_param_3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerDataUpdater*>(),
                        {".ctor", {}, {::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Rewired::UnknownControllerHat*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3);
}
inline bool Rewired::ControllerDataUpdater::IsUnknownHatCardinal(int32_t  buttonIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerDataUpdater*>(),
                        {"IsUnknownHatCardinal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buttonIndex);
}
inline ::Rewired::UnknownControllerHat_HatButtons* Rewired::ControllerDataUpdater::GetUnknownHatButtons(int32_t  buttonIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerDataUpdater*>(),
                        {"GetUnknownHatButtons", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::UnknownControllerHat_HatButtons*>(this, ___internal_method, buttonIndex);
}
inline void Rewired::ControllerDataUpdater::ClearData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::ControllerDataUpdater*>(),
                        {"ClearData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::ControllerDataUpdater* Rewired::ControllerDataUpdater::New_ctor(::Rewired::InputSource  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, ::ArrayW<::Rewired::UnknownControllerHat*>  _cordl_fixed_empty_name_whitespace_param_3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::ControllerDataUpdater*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3));
}
// Ctor Parameters []
constexpr ::Rewired::ControllerDataUpdater::ControllerDataUpdater()   {
}
