#pragma once
// IWYU pragma private; include "UnityEngine/AdaptivePerformance/AdaptivePerformanceIndexer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__StateAction_impl.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceIndexer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScalerEfficiencyTracker_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__AdaptivePerformanceScaler_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__IAdaptivePerformanceSettings_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__PerformanceStateTracker_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__StateAction_def.hpp"
#include "UnityEngine/AdaptivePerformance/zzzz__ThermalStateTracker_def.hpp"
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.get_TimeUntilNextAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::get_TimeUntilNextAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"get_TimeUntilNextAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.set_TimeUntilNextAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)(float_t)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::set_TimeUntilNextAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"set_TimeUntilNextAction", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.set_ThermalAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)(::UnityEngine::AdaptivePerformance::StateAction)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::set_ThermalAction)> {
  constexpr static std::size_t size = 0x5f70;
  constexpr static std::size_t addrs = 0x180e25b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"set_ThermalAction", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::StateAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.get_PerformanceAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AdaptivePerformance::StateAction (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::get_PerformanceAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"get_PerformanceAction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.set_PerformanceAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)(::UnityEngine::AdaptivePerformance::StateAction)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::set_PerformanceAction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d75f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"set_PerformanceAction", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::StateAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.GetAppliedScalers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)(::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::GetAppliedScalers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182217ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"GetAppliedScalers", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.GetUnappliedScalers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)(::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::GetUnappliedScalers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182217ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"GetUnappliedScalers", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.GetDisabledScalers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)(::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::GetDisabledScalers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182217b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"GetDisabledScalers", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.UnapplyAllScalers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::UnapplyAllScalers)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x182217d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"UnapplyAllScalers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.UpdateOverrideLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::UpdateOverrideLevel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182218270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"UpdateOverrideLevel", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.AddScaler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::AddScaler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x182217170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"AddScaler", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.RemoveScaler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::RemoveScaler)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x182217c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"RemoveScaler", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)(::by_ref<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>, ::UnityEngine::AdaptivePerformance::PerformanceStateTracker*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x182218660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>>(), ::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceStateTracker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::Update)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x1822182e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.DeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::DeltaTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182127910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                    {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.CollectProfilerStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::CollectProfilerStats)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x182217600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"CollectProfilerStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.DeactivateDisabledScalers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::DeactivateDisabledScalers)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x1822178c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"DeactivateDisabledScalers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.ActivateEnabledScalers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::ActivateEnabledScalers)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x182217060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"ActivateEnabledScalers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.ApplyLowestCostScaler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::ApplyLowestCostScaler)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x182217210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"ApplyLowestCostScaler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.ApplyScaler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::ApplyScaler)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1822173d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"ApplyScaler", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.UnapplyHighestCostScaler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)()>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::UnapplyHighestCostScaler)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x182217f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"UnapplyHighestCostScaler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer.UnapplyScaler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::*)(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*)>(&::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::UnapplyScaler)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x182218050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"UnapplyScaler", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get_m_UnappliedScalers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnappliedScalers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get_m_UnappliedScalers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnappliedScalers;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_set_m_UnappliedScalers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UnappliedScalers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get_m_AppliedScalers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AppliedScalers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get_m_AppliedScalers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AppliedScalers;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_set_m_AppliedScalers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AppliedScalers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get_m_DisabledScalers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisabledScalers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get_m_DisabledScalers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisabledScalers;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_set_m_DisabledScalers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DisabledScalers = value;
}
constexpr ::UnityEngine::AdaptivePerformance::ThermalStateTracker*& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get_m_ThermalStateTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThermalStateTracker;
}
constexpr ::UnityEngine::AdaptivePerformance::ThermalStateTracker* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get_m_ThermalStateTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThermalStateTracker;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_set_m_ThermalStateTracker(::UnityEngine::AdaptivePerformance::ThermalStateTracker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThermalStateTracker = value;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceStateTracker*& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get_m_PerformanceStateTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerformanceStateTracker;
}
constexpr ::UnityEngine::AdaptivePerformance::PerformanceStateTracker* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get_m_PerformanceStateTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerformanceStateTracker;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_set_m_PerformanceStateTracker(::UnityEngine::AdaptivePerformance::PerformanceStateTracker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PerformanceStateTracker = value;
}
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get_m_ScalerEfficiencyTracker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScalerEfficiencyTracker;
}
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker* const& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get_m_ScalerEfficiencyTracker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScalerEfficiencyTracker;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_set_m_ScalerEfficiencyTracker(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScalerEfficiencyTracker*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScalerEfficiencyTracker = value;
}
constexpr ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get_m_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr ::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings> const& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get_m_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_set_m_Settings(::UnityW<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Settings = value;
}
constexpr float_t& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get__TimeUntilNextAction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeUntilNextAction_k__BackingField;
}
constexpr float_t const& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get__TimeUntilNextAction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeUntilNextAction_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_set__TimeUntilNextAction_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeUntilNextAction_k__BackingField = value;
}
constexpr ::UnityEngine::AdaptivePerformance::StateAction& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get__ThermalAction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThermalAction_k__BackingField;
}
constexpr ::UnityEngine::AdaptivePerformance::StateAction const& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get__ThermalAction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThermalAction_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_set__ThermalAction_k__BackingField(::UnityEngine::AdaptivePerformance::StateAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ThermalAction_k__BackingField = value;
}
constexpr ::UnityEngine::AdaptivePerformance::StateAction& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get__PerformanceAction_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerformanceAction_k__BackingField;
}
constexpr ::UnityEngine::AdaptivePerformance::StateAction const& UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_get__PerformanceAction_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PerformanceAction_k__BackingField;
}
constexpr void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::__cordl_internal_set__PerformanceAction_k__BackingField(::UnityEngine::AdaptivePerformance::StateAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PerformanceAction_k__BackingField = value;
}
inline float_t UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::get_TimeUntilNextAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"get_TimeUntilNextAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::set_TimeUntilNextAction(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"set_TimeUntilNextAction", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::set_ThermalAction(::UnityEngine::AdaptivePerformance::StateAction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"set_ThermalAction", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::StateAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AdaptivePerformance::StateAction UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::get_PerformanceAction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"get_PerformanceAction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AdaptivePerformance::StateAction>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::set_PerformanceAction(::UnityEngine::AdaptivePerformance::StateAction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"set_PerformanceAction", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::StateAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::GetAppliedScalers(::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>  scalers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"GetAppliedScalers", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scalers);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::GetUnappliedScalers(::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>  scalers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"GetUnappliedScalers", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scalers);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::GetDisabledScalers(::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>  scalers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"GetDisabledScalers", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler>>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scalers);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::UnapplyAllScalers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"UnapplyAllScalers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::UpdateOverrideLevel(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*  scaler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"UpdateOverrideLevel", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scaler);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::AddScaler(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*  scaler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"AddScaler", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scaler);
}
inline bool UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::RemoveScaler(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*  scaler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"RemoveScaler", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, scaler);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::_ctor(::by_ref<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>  settings, ::UnityEngine::AdaptivePerformance::PerformanceStateTracker*  tracker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>>(), ::i2c::type_of<::UnityEngine::AdaptivePerformance::PerformanceStateTracker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, tracker);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::DeltaTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::CollectProfilerStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"CollectProfilerStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::DeactivateDisabledScalers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"DeactivateDisabledScalers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::ActivateEnabledScalers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"ActivateEnabledScalers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::ApplyLowestCostScaler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"ApplyLowestCostScaler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::ApplyScaler(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*  scaler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"ApplyScaler", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scaler);
}
inline bool UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::UnapplyHighestCostScaler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"UnapplyHighestCostScaler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::UnapplyScaler(::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*  scaler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(),
                        {"UnapplyScaler", {}, {::i2c::type_of<::UnityEngine::AdaptivePerformance::AdaptivePerformanceScaler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scaler);
}
inline ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer* UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::New_ctor(::by_ref<::UnityEngine::AdaptivePerformance::IAdaptivePerformanceSettings*>  settings, ::UnityEngine::AdaptivePerformance::PerformanceStateTracker*  tracker)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer*>(settings, tracker));
}
// Ctor Parameters []
constexpr ::UnityEngine::AdaptivePerformance::AdaptivePerformanceIndexer::AdaptivePerformanceIndexer()   {
}
