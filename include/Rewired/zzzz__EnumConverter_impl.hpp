#pragma once
// IWYU pragma private; include "Rewired/EnumConverter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__EnumConverter_def.hpp"
#include "Rewired/Config/zzzz__ThrottleCalibrationMode_def.hpp"
#include "Rewired/Config/zzzz__UpdateLoopSetting_def.hpp"
#include "Rewired/Data/Mapping/zzzz__AlternateAxisCalibrationType_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Rewired::EnumConverter.ToUpdateLoopTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Rewired::Config::UpdateLoopSetting, ::System::Collections::Generic::List_1<::Rewired::UpdateLoopType>*)>(&::Rewired::EnumConverter::ToUpdateLoopTypes)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181843110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::EnumConverter*>(),
                        {"ToUpdateLoopTypes", {}, {::i2c::type_of<::Rewired::Config::UpdateLoopSetting>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::UpdateLoopType>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::EnumConverter.ToAlternateAxisCalibrationType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Data::Mapping::AlternateAxisCalibrationType (*)(::Rewired::Config::ThrottleCalibrationMode)>(&::Rewired::EnumConverter::ToAlternateAxisCalibrationType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818430e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::EnumConverter*>(),
                        {"ToAlternateAxisCalibrationType", {}, {::i2c::type_of<::Rewired::Config::ThrottleCalibrationMode>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Rewired::EnumConverter::ToUpdateLoopTypes(::Rewired::Config::UpdateLoopSetting  updateLoopSetting, ::System::Collections::Generic::List_1<::Rewired::UpdateLoopType>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::EnumConverter*>(),
                        {"ToUpdateLoopTypes", {}, {::i2c::type_of<::Rewired::Config::UpdateLoopSetting>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Rewired::UpdateLoopType>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, updateLoopSetting, results);
}
inline ::Rewired::Data::Mapping::AlternateAxisCalibrationType Rewired::EnumConverter::ToAlternateAxisCalibrationType(::Rewired::Config::ThrottleCalibrationMode  throttleCalibrationMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::EnumConverter*>(),
                        {"ToAlternateAxisCalibrationType", {}, {::i2c::type_of<::Rewired::Config::ThrottleCalibrationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Data::Mapping::AlternateAxisCalibrationType>(nullptr, ___internal_method, throttleCalibrationMode);
}
// Ctor Parameters []
constexpr ::Rewired::EnumConverter::EnumConverter()   {
}
