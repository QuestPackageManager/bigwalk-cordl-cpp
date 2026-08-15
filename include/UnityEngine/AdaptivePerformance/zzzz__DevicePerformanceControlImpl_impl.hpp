#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/DevicePerformanceControlImpl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceControlMode_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__DevicePerformanceControlImpl_def.hpp"
#include "UnityEngine/AdaptivePerformance/Provider/zzzz__IDevicePerformanceLevelControl_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IDevicePerformanceControl_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceControlMode_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceLevelChangeEventArgs_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)(::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*)>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182221320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)(::by_ref<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs>)>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::Update)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x182221080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"Update", {}, {::i2c::type_of<::by_ref<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.ComputeDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)(int32_t, int32_t)>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::ComputeDelta)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182221050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"ComputeDelta", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.get_PerformanceControlMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::PerformanceControlMode (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)()>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_PerformanceControlMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f41a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_PerformanceControlMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.set_PerformanceControlMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)(::UnityEngine::AdaptivePerformance::PerformanceControlMode)>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::set_PerformanceControlMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f4390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"set_PerformanceControlMode", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceControlMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.get_MaxCpuPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)()>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_MaxCpuPerformanceLevel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182221360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_MaxCpuPerformanceLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.get_MaxGpuPerformanceLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)()>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_MaxGpuPerformanceLevel)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182221390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_MaxGpuPerformanceLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.get_CpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)()>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_CpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_CpuLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.set_CpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::set_CpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f43d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"set_CpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.get_GpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)()>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_GpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_GpuLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.set_GpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::set_GpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803164e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"set_GpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.get_CurrentCpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)()>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_CurrentCpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_CurrentCpuLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.set_CurrentCpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::set_CurrentCpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180396f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"set_CurrentCpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.get_CurrentGpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)()>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_CurrentGpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_CurrentGpuLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.set_CurrentGpuLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)(int32_t)>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::set_CurrentGpuLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803914c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"set_CurrentGpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.get_CpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)()>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_CpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_CpuPerformanceBoost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.set_CpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)(bool)>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::set_CpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"set_CpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.get_GpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)()>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_GpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_GpuPerformanceBoost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl.set_GpuPerformanceBoost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::*)(bool)>(&::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::set_GpuPerformanceBoost)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18049ec60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"set_GpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get_m_PerformanceLevelControl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerformanceLevelControl;
}
constexpr ::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl* const& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get_m_PerformanceLevelControl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerformanceLevelControl;
}
constexpr void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_set_m_PerformanceLevelControl(::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PerformanceLevelControl = value;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceControlMode& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get__PerformanceControlMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerformanceControlMode_k__BackingField;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceControlMode const& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get__PerformanceControlMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerformanceControlMode_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_set__PerformanceControlMode_k__BackingField(::UnityEngine::AdaptivePerformance::PerformanceControlMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PerformanceControlMode_k__BackingField = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get__CpuLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CpuLevel_k__BackingField;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get__CpuLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CpuLevel_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_set__CpuLevel_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CpuLevel_k__BackingField = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get__GpuLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GpuLevel_k__BackingField;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get__GpuLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GpuLevel_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_set__GpuLevel_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GpuLevel_k__BackingField = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get__CurrentCpuLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentCpuLevel_k__BackingField;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get__CurrentCpuLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentCpuLevel_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_set__CurrentCpuLevel_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentCpuLevel_k__BackingField = value;
}
constexpr int32_t& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get__CurrentGpuLevel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentGpuLevel_k__BackingField;
}
constexpr int32_t const& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get__CurrentGpuLevel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentGpuLevel_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_set__CurrentGpuLevel_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentGpuLevel_k__BackingField = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get__CpuPerformanceBoost_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CpuPerformanceBoost_k__BackingField;
}
constexpr bool const& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get__CpuPerformanceBoost_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CpuPerformanceBoost_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_set__CpuPerformanceBoost_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CpuPerformanceBoost_k__BackingField = value;
}
constexpr bool& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get__GpuPerformanceBoost_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GpuPerformanceBoost_k__BackingField;
}
constexpr bool const& UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_get__GpuPerformanceBoost_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GpuPerformanceBoost_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::__cordl_internal_set__GpuPerformanceBoost_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GpuPerformanceBoost_k__BackingField = value;
}
inline void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::_ctor(::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*  performanceLevelControl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, performanceLevelControl);
}
inline bool UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::Update(::by_ref<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs>  changeArgs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"Update", {}, {::i2c::type_of<::by_ref<::UnityEngine::AdaptivePerformance::PerformanceLevelChangeEventArgs>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, changeArgs);
}
inline int32_t UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::ComputeDelta(int32_t  oldLevel, int32_t  newLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"ComputeDelta", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, oldLevel, newLevel);
}
inline ::UnityEngine::AdaptivePerformance::PerformanceControlMode UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_PerformanceControlMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_PerformanceControlMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::PerformanceControlMode>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::set_PerformanceControlMode(::UnityEngine::AdaptivePerformance::PerformanceControlMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"set_PerformanceControlMode", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceControlMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_MaxCpuPerformanceLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_MaxCpuPerformanceLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_MaxGpuPerformanceLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_MaxGpuPerformanceLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_CpuLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_CpuLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::set_CpuLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"set_CpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_GpuLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_GpuLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::set_GpuLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"set_GpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_CurrentCpuLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_CurrentCpuLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::set_CurrentCpuLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"set_CurrentCpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_CurrentGpuLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_CurrentGpuLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::set_CurrentGpuLevel(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"set_CurrentGpuLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_CpuPerformanceBoost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_CpuPerformanceBoost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::set_CpuPerformanceBoost(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"set_CpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::get_GpuPerformanceBoost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"get_GpuPerformanceBoost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::set_GpuPerformanceBoost(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(),
                        {"set_GpuPerformanceBoost", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl* UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::New_ctor(::UnityEngine::AdaptivePerformance::Provider::IDevicePerformanceLevelControl*  performanceLevelControl)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl*>(performanceLevelControl));
}
/// @brief Convert operator to "::UnityEngine::AdaptivePerformance::IDevicePerformanceControl"
constexpr  UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::operator ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::AdaptivePerformance::IDevicePerformanceControl"
constexpr ::UnityEngine::AdaptivePerformance::IDevicePerformanceControl* UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::i___UnityEngine__AdaptivePerformance__IDevicePerformanceControl() noexcept {
return static_cast<::UnityEngine::AdaptivePerformance::IDevicePerformanceControl*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::DevicePerformanceControlImpl::DevicePerformanceControlImpl()   {
}
