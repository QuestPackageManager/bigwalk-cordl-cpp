#pragma once
// IWYU pragma private; include "Enviro/EnviroTimeModule.hpp"
#include "GlobalNamespace/zzzz__EnviroModule_impl.hpp"
#include "Enviro/zzzz__EnviroTimeModule_def.hpp"
#include "Enviro/zzzz__EnviroTime_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Enviro::EnviroTimeModule.SetDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::Enviro::EnviroTimeModule::SetDateTime)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x18061e820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"SetDateTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.get_seconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::get_seconds)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18061f900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"get_seconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.set_seconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)(int32_t)>(&::Enviro::EnviroTimeModule::set_seconds)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18061fac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"set_seconds", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.get_minutes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::get_minutes)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18061f880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"get_minutes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.set_minutes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)(int32_t)>(&::Enviro::EnviroTimeModule::set_minutes)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18061fa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"set_minutes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.get_hours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::get_hours)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18061f840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"get_hours", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.set_hours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)(int32_t)>(&::Enviro::EnviroTimeModule::set_hours)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18061f9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"set_hours", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.get_days
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::get_days)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18061f800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"get_days", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.set_days
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)(int32_t)>(&::Enviro::EnviroTimeModule::set_days)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18061f980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"set_days", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.get_months
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::get_months)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18061f8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"get_months", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.set_months
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)(int32_t)>(&::Enviro::EnviroTimeModule::set_months)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18061fa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"set_months", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.get_years
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::get_years)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18061f940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"get_years", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.set_years
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)(int32_t)>(&::Enviro::EnviroTimeModule::set_years)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18061fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"set_years", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.UpdateModule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::UpdateModule)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18061f420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                    {::i2c::class_of<::Enviro::EnviroTimeModule*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.UpdateSunAndMoonPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::UpdateSunAndMoonPosition)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18061f590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"UpdateSunAndMoonPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.UpdateCustomSunAndMoonPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::UpdateCustomSunAndMoonPosition)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x18061f090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"UpdateCustomSunAndMoonPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.GetUniversalTimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::GetUniversalTimeOfDay)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18061e680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"GetUniversalTimeOfDay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.GetTimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::GetTimeOfDay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18061e4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"GetTimeOfDay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.GetDateInHours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::GetDateInHours)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18061e340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"GetDateInHours", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.GetTimeStringWithSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::GetTimeStringWithSeconds)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18061e4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"GetTimeStringWithSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.GetTimeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::GetTimeString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18061e5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"GetTimeString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.SetTimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)(float_t)>(&::Enviro::EnviroTimeModule::SetTimeOfDay)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18061ef20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"SetTimeOfDay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.OrbitalToLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Enviro::EnviroTimeModule::*)(float_t, float_t)>(&::Enviro::EnviroTimeModule::OrbitalToLocal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18061e720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"OrbitalToLocal", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.Remap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Enviro::EnviroTimeModule::*)(float_t, float_t, float_t, float_t, float_t)>(&::Enviro::EnviroTimeModule::Remap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18061e7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"Remap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.CalculateSunPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)(float_t, float_t, bool)>(&::Enviro::EnviroTimeModule::CalculateSunPosition)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x18061dc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"CalculateSunPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.CalculateMoonPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)(float_t, float_t)>(&::Enviro::EnviroTimeModule::CalculateMoonPosition)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x18061d410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"CalculateMoonPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.CalculateStarsPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)(float_t)>(&::Enviro::EnviroTimeModule::CalculateStarsPosition)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x18061d960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"CalculateStarsPosition", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.LoadModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::LoadModuleValues)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18061e6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule.SaveModuleValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)(::Enviro::EnviroTimeModule*)>(&::Enviro::EnviroTimeModule::SaveModuleValues)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18061e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroTimeModule*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Enviro::EnviroTimeModule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Enviro::EnviroTimeModule::*)()>(&::Enviro::EnviroTimeModule::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18060c360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Enviro::EnviroTime*& Enviro::EnviroTimeModule::__cordl_internal_get_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr ::Enviro::EnviroTime* const& Enviro::EnviroTimeModule::__cordl_internal_get_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Settings;
}
constexpr void Enviro::EnviroTimeModule::__cordl_internal_set_Settings(::Enviro::EnviroTime*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Settings = value;
}
constexpr ::UnityW<::Enviro::EnviroTimeModule>& Enviro::EnviroTimeModule::__cordl_internal_get_preset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr ::UnityW<::Enviro::EnviroTimeModule> const& Enviro::EnviroTimeModule::__cordl_internal_get_preset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preset;
}
constexpr void Enviro::EnviroTimeModule::__cordl_internal_set_preset(::UnityW<::Enviro::EnviroTimeModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preset = value;
}
constexpr bool& Enviro::EnviroTimeModule::__cordl_internal_get_showTimeControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showTimeControls;
}
constexpr bool const& Enviro::EnviroTimeModule::__cordl_internal_get_showTimeControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showTimeControls;
}
constexpr void Enviro::EnviroTimeModule::__cordl_internal_set_showTimeControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showTimeControls = value;
}
constexpr bool& Enviro::EnviroTimeModule::__cordl_internal_get_showLocationControls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showLocationControls;
}
constexpr bool const& Enviro::EnviroTimeModule::__cordl_internal_get_showLocationControls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showLocationControls;
}
constexpr void Enviro::EnviroTimeModule::__cordl_internal_set_showLocationControls(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showLocationControls = value;
}
constexpr float_t& Enviro::EnviroTimeModule::__cordl_internal_get_LST()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LST;
}
constexpr float_t const& Enviro::EnviroTimeModule::__cordl_internal_get_LST() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LST;
}
constexpr void Enviro::EnviroTimeModule::__cordl_internal_set_LST(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LST = value;
}
constexpr float_t& Enviro::EnviroTimeModule::__cordl_internal_get_internalTimeOverflow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalTimeOverflow;
}
constexpr float_t const& Enviro::EnviroTimeModule::__cordl_internal_get_internalTimeOverflow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalTimeOverflow;
}
constexpr void Enviro::EnviroTimeModule::__cordl_internal_set_internalTimeOverflow(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internalTimeOverflow = value;
}
inline void Enviro::EnviroTimeModule::SetDateTime(int32_t  sec, int32_t  min, int32_t  hours, int32_t  day, int32_t  month, int32_t  year)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"SetDateTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sec, min, hours, day, month, year);
}
inline int32_t Enviro::EnviroTimeModule::get_seconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"get_seconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Enviro::EnviroTimeModule::set_seconds(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"set_seconds", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Enviro::EnviroTimeModule::get_minutes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"get_minutes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Enviro::EnviroTimeModule::set_minutes(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"set_minutes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Enviro::EnviroTimeModule::get_hours()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"get_hours", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Enviro::EnviroTimeModule::set_hours(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"set_hours", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Enviro::EnviroTimeModule::get_days()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"get_days", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Enviro::EnviroTimeModule::set_days(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"set_days", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Enviro::EnviroTimeModule::get_months()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"get_months", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Enviro::EnviroTimeModule::set_months(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"set_months", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Enviro::EnviroTimeModule::get_years()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"get_years", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Enviro::EnviroTimeModule::set_years(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"set_years", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Enviro::EnviroTimeModule::UpdateModule()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Enviro::EnviroTimeModule*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroTimeModule::UpdateSunAndMoonPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"UpdateSunAndMoonPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroTimeModule::UpdateCustomSunAndMoonPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"UpdateCustomSunAndMoonPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Enviro::EnviroTimeModule::GetUniversalTimeOfDay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"GetUniversalTimeOfDay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Enviro::EnviroTimeModule::GetTimeOfDay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"GetTimeOfDay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t Enviro::EnviroTimeModule::GetDateInHours()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"GetDateInHours", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::StringW Enviro::EnviroTimeModule::GetTimeStringWithSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"GetTimeStringWithSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Enviro::EnviroTimeModule::GetTimeString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"GetTimeString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Enviro::EnviroTimeModule::SetTimeOfDay(float_t  tod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"SetTimeOfDay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tod);
}
inline ::UnityEngine::Vector3 Enviro::EnviroTimeModule::OrbitalToLocal(float_t  theta, float_t  phi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"OrbitalToLocal", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, theta, phi);
}
inline float_t Enviro::EnviroTimeModule::Remap(float_t  value, float_t  from1, float_t  to1, float_t  from2, float_t  to2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"Remap", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, from1, to1, from2, to2);
}
inline void Enviro::EnviroTimeModule::CalculateSunPosition(float_t  d, float_t  ecl, bool  simpleMoon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"CalculateSunPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, ecl, simpleMoon);
}
inline void Enviro::EnviroTimeModule::CalculateMoonPosition(float_t  d, float_t  ecl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"CalculateMoonPosition", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d, ecl);
}
inline void Enviro::EnviroTimeModule::CalculateStarsPosition(float_t  siderealTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"CalculateStarsPosition", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, siderealTime);
}
inline void Enviro::EnviroTimeModule::LoadModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"LoadModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroTimeModule::SaveModuleValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"SaveModuleValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Enviro::EnviroTimeModule::SaveModuleValues(::Enviro::EnviroTimeModule*  _cordl_module)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {"SaveModuleValues", {}, {::i2c::type_of<::Enviro::EnviroTimeModule*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_module);
}
inline void Enviro::EnviroTimeModule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Enviro::EnviroTimeModule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Enviro::EnviroTimeModule* Enviro::EnviroTimeModule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Enviro::EnviroTimeModule*>());
}
// Ctor Parameters []
constexpr ::Enviro::EnviroTimeModule::EnviroTimeModule()   {
}
