#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/Basic/BasicAdaptivePerformanceSubsystem.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__AdaptivePerformanceSubsystem_impl.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__Feature_impl.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__PerformanceDataRecord_impl.hpp"
#include "UnityEngine/AdaptivePerformance/Basic/zzzz__BasicAdaptivePerformanceSubsystem_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "UnityEngine/AdaptivePerformance/Basic/zzzz__BasicAdaptivePerformanceSubsystem_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__Feature_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__IApplicationLifecycle_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__IDevicePerformanceLevelControl_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__PerformanceDataRecord_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182224230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.get_ApplicationLifecycle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle* (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_ApplicationLifecycle)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.get_PerformanceLevelControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl* (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_PerformanceLevelControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.get_Stats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_Stats)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182224270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.set_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)(bool)>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::set_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18051e980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.get_Capabilities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::Provider::Feature (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_Capabilities)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.set_Capabilities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)(::UnityEngine::AdaptivePerformance::Provider::Feature)>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::set_Capabilities)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f67b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.Stop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::Stop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1818762d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::Destroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e1d0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::Update)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1822241a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.ApplicationPause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::ApplicationPause)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {"ApplicationPause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.ApplicationResume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::ApplicationResume)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {"ApplicationResume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.SetPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)(::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::SetPerformanceLevel)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182224180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {"SetPerformanceLevel", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.EnableCpuBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::EnableCpuBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {"EnableCpuBoost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.EnableGpuBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::EnableGpuBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {"EnableGpuBoost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_Version)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x182224280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.get_MaxCpuPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_MaxCpuPerformanceLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {"get_MaxCpuPerformanceLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider.get_MaxGpuPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_MaxGpuPerformanceLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {"get_MaxGpuPerformanceLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord& UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::__cordl_internal_get_m_UpdatedPerfRecord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdatedPerfRecord;
}
constexpr ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord const& UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::__cordl_internal_get_m_UpdatedPerfRecord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdatedPerfRecord;
}
constexpr void UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::__cordl_internal_set_m_UpdatedPerfRecord(::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdatedPerfRecord = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::__cordl_internal_get__Initialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr bool const& UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::__cordl_internal_get__Initialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::__cordl_internal_set__Initialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Initialized_k__BackingField = value;
}
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature& UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::__cordl_internal_get__Capabilities_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capabilities_k__BackingField;
}
constexpr ::UnityEngine::AdaptivePerformance::Provider::Feature const& UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::__cordl_internal_get__Capabilities_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Capabilities_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::__cordl_internal_set__Capabilities_k__BackingField(::UnityEngine::AdaptivePerformance::Provider::Feature  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Capabilities_k__BackingField = value;
}
inline void UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle* UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_ApplicationLifecycle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl* UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_PerformanceLevelControl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(this, ___internal_method);
}
inline ::StringW UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_Stats()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_Initialized()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::set_Initialized(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AdaptivePerformance::Provider::Feature UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_Capabilities()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::Provider::Feature>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::set_Capabilities(::UnityEngine::AdaptivePerformance::Provider::Feature  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::Stop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::Provider::PerformanceDataRecord>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::ApplicationPause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {"ApplicationPause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::ApplicationResume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {"ApplicationResume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::SetPerformanceLevel(::by_ref<int32_t>  cpuLevel, ::by_ref<int32_t>  gpuLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {"SetPerformanceLevel", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cpuLevel, gpuLevel);
}
inline bool UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::EnableCpuBoost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {"EnableCpuBoost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::EnableGpuBoost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {"EnableGpuBoost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Version* UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_Version()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Version*>(this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_MaxCpuPerformanceLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {"get_MaxCpuPerformanceLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::get_MaxGpuPerformanceLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>(),
                        {"get_MaxGpuPerformanceLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider* UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider*>());
}
/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle"
constexpr  UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::operator ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle"
constexpr ::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle* UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::i___UnityEngine__AdaptivePerformance__Provider__IApplicationLifecycle() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::Provider::IApplicationLifecycle*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl"
constexpr  UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::operator ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl"
constexpr ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl* UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::i___UnityEngine__AdaptivePerformance__Provider__IDevicePerformanceLevelControl() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem_BasicProvider::BasicAdaptivePerformanceSubsystem_BasicProvider()   {
}
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem::*)()>(&::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem* UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::Basic::BasicAdaptivePerformanceSubsystem::BasicAdaptivePerformanceSubsystem()   {
}
