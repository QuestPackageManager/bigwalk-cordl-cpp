#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/IAdaptivePerformanceSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScalerProfile_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IAdaptivePerformanceSettings_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceIndexerSettings_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScalerProfile_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScalerSettings_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IAdaptivePerformanceSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0._ApplyScalerProfileToAllScalers_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0::*)(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0::_ApplyScalerProfileToAllScalers_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182222ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0*>(),
                        {"<ApplyScalerProfileToAllScalers>b__0", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::PropertyInfo*& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0::__cordl_internal_get_property()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___property;
}
constexpr ::System::Reflection::PropertyInfo* const& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0::__cordl_internal_get_property() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___property;
}
constexpr void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0::__cordl_internal_set_property(::System::Reflection::PropertyInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___property = value;
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0::_ApplyScalerProfileToAllScalers_b__0(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0*>(),
                        {"<ApplyScalerProfileToAllScalers>b__0", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, s);
}
inline ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0* UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings___c__DisplayClass41_0::IAdaptivePerformanceSettings___c__DisplayClass41_0()   {
}
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.get_logging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_logging)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_logging", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.set_logging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)(bool)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_logging)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a7530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_logging", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.get_automaticPerformanceMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_automaticPerformanceMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814f8710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_automaticPerformanceMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.set_automaticPerformanceMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)(bool)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_automaticPerformanceMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818376c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_automaticPerformanceMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.get_automaticGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_automaticGameMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c5560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_automaticGameMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.set_automaticGameMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)(bool)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_automaticGameMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805c55e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_automaticGameMode", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.get_enableBoostOnStartup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_enableBoostOnStartup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819b9460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_enableBoostOnStartup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.set_enableBoostOnStartup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)(bool)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_enableBoostOnStartup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1819b9510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_enableBoostOnStartup", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.get_statsLoggingFrequencyInFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_statsLoggingFrequencyInFrames)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_statsLoggingFrequencyInFrames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.set_statsLoggingFrequencyInFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_statsLoggingFrequencyInFrames)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_statsLoggingFrequencyInFrames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.get_indexerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings* (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_indexerSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_indexerSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.set_indexerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_indexerSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_indexerSettings", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.get_scalerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings* (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_scalerSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_scalerSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.set_scalerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_scalerSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_scalerSettings", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.get_ScalerProfiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*> (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_ScalerProfiles)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e5850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_ScalerProfiles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.get_ActiveScalerProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile* (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_ActiveScalerProfile)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_ActiveScalerProfile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.set_ActiveScalerProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_ActiveScalerProfile)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_ActiveScalerProfile", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.get_AddedScalerViaScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_AddedScalerViaScan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_AddedScalerViaScan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.set_AddedScalerViaScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_AddedScalerViaScan)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_AddedScalerViaScan", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.AddScalerProfileWithDefaultScalers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)(::StringW)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::AddScalerProfileWithDefaultScalers)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1822214c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"AddScalerProfileWithDefaultScalers", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.DeleteScalerProfileAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::DeleteScalerProfileAt)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182221970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"DeleteScalerProfileAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.LoadScalerProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)(::StringW)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::LoadScalerProfile)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x182221bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"LoadScalerProfile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.ApplyScalerProfileToAllScalers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::ApplyScalerProfileToAllScalers)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x1822215e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"ApplyScalerProfileToAllScalers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.GetAvailableScalerProfiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::GetAvailableScalerProfiles)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x182221a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"GetAvailableScalerProfiles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.get_defaultScalerProfilerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_defaultScalerProfilerIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_defaultScalerProfilerIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.set_defaultScalerProfilerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_defaultScalerProfilerIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_defaultScalerProfilerIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182221f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::*)()>(&::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x182221f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_Logging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Logging;
}
constexpr bool const& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_Logging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Logging;
}
constexpr void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_set_m_Logging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Logging = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_AutomaticPerformanceModeEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutomaticPerformanceModeEnabled;
}
constexpr bool const& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_AutomaticPerformanceModeEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutomaticPerformanceModeEnabled;
}
constexpr void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_set_m_AutomaticPerformanceModeEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutomaticPerformanceModeEnabled = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_AutomaticGameModeEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutomaticGameModeEnabled;
}
constexpr bool const& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_AutomaticGameModeEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutomaticGameModeEnabled;
}
constexpr void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_set_m_AutomaticGameModeEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutomaticGameModeEnabled = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_EnableBoostOnStartup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableBoostOnStartup;
}
constexpr bool const& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_EnableBoostOnStartup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableBoostOnStartup;
}
constexpr void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_set_m_EnableBoostOnStartup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableBoostOnStartup = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_StatsLoggingFrequencyInFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StatsLoggingFrequencyInFrames;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_StatsLoggingFrequencyInFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StatsLoggingFrequencyInFrames;
}
constexpr void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_set_m_StatsLoggingFrequencyInFrames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StatsLoggingFrequencyInFrames = value;
}
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_IndexerSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndexerSettings;
}
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings* const& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_IndexerSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IndexerSettings;
}
constexpr void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_set_m_IndexerSettings(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IndexerSettings = value;
}
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_ScalerSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScalerSettings;
}
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings* const& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_ScalerSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScalerSettings;
}
constexpr void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_set_m_ScalerSettings(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScalerSettings = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_AddedScalerViaScan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddedScalerViaScan;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* const& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_AddedScalerViaScan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddedScalerViaScan;
}
constexpr void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_set_m_AddedScalerViaScan(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AddedScalerViaScan = value;
}
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_ActiveScalerProfile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveScalerProfile;
}
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile* const& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_ActiveScalerProfile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveScalerProfile;
}
constexpr void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_set_m_ActiveScalerProfile(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActiveScalerProfile = value;
}
constexpr ::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_scalerProfileList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_scalerProfileList;
}
constexpr ::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*> const& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_scalerProfileList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_scalerProfileList;
}
constexpr void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_set_m_scalerProfileList(::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_scalerProfileList = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_DefaultScalerProfilerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultScalerProfilerIndex;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_m_DefaultScalerProfilerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultScalerProfilerIndex;
}
constexpr void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_set_m_DefaultScalerProfilerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultScalerProfilerIndex = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_k_AssetVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_AssetVersion;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_get_k_AssetVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_AssetVersion;
}
constexpr void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::__cordl_internal_set_k_AssetVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___k_AssetVersion = value;
}
inline bool UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_logging()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_logging", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_logging(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_logging", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_automaticPerformanceMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_automaticPerformanceMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_automaticPerformanceMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_automaticPerformanceMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_automaticGameMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_automaticGameMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_automaticGameMode(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_automaticGameMode", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_enableBoostOnStartup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_enableBoostOnStartup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_enableBoostOnStartup(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_enableBoostOnStartup", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_statsLoggingFrequencyInFrames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_statsLoggingFrequencyInFrames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_statsLoggingFrequencyInFrames(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_statsLoggingFrequencyInFrames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings* UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_indexerSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_indexerSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_indexerSettings(::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_indexerSettings", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings* UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_scalerSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_scalerSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_scalerSettings(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_scalerSettings", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*> UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_ScalerProfiles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_ScalerProfiles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile* UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_ActiveScalerProfile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_ActiveScalerProfile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_ActiveScalerProfile(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_ActiveScalerProfile", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_AddedScalerViaScan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_AddedScalerViaScan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_AddedScalerViaScan(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_AddedScalerViaScan", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::AddScalerProfileWithDefaultScalers(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"AddScalerProfileWithDefaultScalers", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::DeleteScalerProfileAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"DeleteScalerProfileAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::LoadScalerProfile(::StringW  scalerProfileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"LoadScalerProfile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scalerProfileName);
}
inline bool UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::ApplyScalerProfileToAllScalers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"ApplyScalerProfileToAllScalers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::GetAvailableScalerProfiles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"GetAvailableScalerProfiles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::get_defaultScalerProfilerIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"get_defaultScalerProfilerIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::set_defaultScalerProfilerIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"set_defaultScalerProfilerIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings* UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings::IAdaptivePerformanceSettings()   {
}
