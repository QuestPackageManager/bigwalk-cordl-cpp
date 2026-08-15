#pragma once
// IWYU pragma private; include "HouseCulling/CullingAgent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HouseCulling/zzzz__CullingAgent_def.hpp"
#include "HouseCulling/zzzz__CullingLocation_def.hpp"
#include "HouseCulling/zzzz__CullingRegion_def.hpp"
#include "HouseCulling/zzzz__CullingTrigger_def.hpp"
#include "HouseCulling/zzzz__CullingVisibilityData_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::HouseCulling::CullingAgent.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingAgent::*)()>(&::HouseCulling::CullingAgent::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1803bdc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingAgent.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingAgent::*)(bool)>(&::HouseCulling::CullingAgent::Refresh)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1803bdff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {"Refresh", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingAgent.RefreshAfterRegionChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingAgent::*)()>(&::HouseCulling::CullingAgent::RefreshAfterRegionChange)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1803bddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {"RefreshAfterRegionChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingAgent.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingAgent::*)(::UnityEngine::Collider*)>(&::HouseCulling::CullingAgent::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1803bdcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingAgent.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingAgent::*)(::UnityEngine::Collider*)>(&::HouseCulling::CullingAgent::OnTriggerExit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1803bdd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingAgent.ToggleEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::HouseCulling::CullingAgent::ToggleEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803be320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {"ToggleEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingAgent.ToggleDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::HouseCulling::CullingAgent::ToggleDebug)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803be2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {"ToggleDebug", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HouseCulling::CullingAgent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HouseCulling::CullingAgent::*)()>(&::HouseCulling::CullingAgent::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1803be370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HouseCulling::CullingVisibilityData>& HouseCulling::CullingAgent::__cordl_internal_get_cullingVisibilityData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cullingVisibilityData;
}
constexpr ::UnityW<::HouseCulling::CullingVisibilityData> const& HouseCulling::CullingAgent::__cordl_internal_get_cullingVisibilityData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cullingVisibilityData;
}
constexpr void HouseCulling::CullingAgent::__cordl_internal_set_cullingVisibilityData(::UnityW<::HouseCulling::CullingVisibilityData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cullingVisibilityData = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingTrigger>>*& HouseCulling::CullingAgent::__cordl_internal_get_activeTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeTriggers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingTrigger>>* const& HouseCulling::CullingAgent::__cordl_internal_get_activeTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeTriggers;
}
constexpr void HouseCulling::CullingAgent::__cordl_internal_set_activeTriggers(::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingTrigger>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeTriggers = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>*& HouseCulling::CullingAgent::__cordl_internal_get__uniqueRegions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniqueRegions;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>* const& HouseCulling::CullingAgent::__cordl_internal_get__uniqueRegions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniqueRegions;
}
constexpr void HouseCulling::CullingAgent::__cordl_internal_set__uniqueRegions(::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uniqueRegions = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>*& HouseCulling::CullingAgent::__cordl_internal_get__uniqueRegionsNew()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniqueRegionsNew;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>* const& HouseCulling::CullingAgent::__cordl_internal_get__uniqueRegionsNew() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uniqueRegionsNew;
}
constexpr void HouseCulling::CullingAgent::__cordl_internal_set__uniqueRegionsNew(::System::Collections::Generic::HashSet_1<::UnityW<::HouseCulling::CullingRegion>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uniqueRegionsNew = value;
}
constexpr bool& HouseCulling::CullingAgent::__cordl_internal_get_neverCull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neverCull;
}
constexpr bool const& HouseCulling::CullingAgent::__cordl_internal_get_neverCull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neverCull;
}
constexpr void HouseCulling::CullingAgent::__cordl_internal_set_neverCull(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___neverCull = value;
}
constexpr bool& HouseCulling::CullingAgent::__cordl_internal_get_debugMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMode;
}
constexpr bool const& HouseCulling::CullingAgent::__cordl_internal_get_debugMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMode;
}
constexpr void HouseCulling::CullingAgent::__cordl_internal_set_debugMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugMode = value;
}
inline void HouseCulling::CullingAgent::setStaticF_Instance(::UnityW<::HouseCulling::CullingAgent>  value)  {
::cordl_internals::setStaticField<::UnityW<::HouseCulling::CullingAgent>, "Instance", ::HouseCulling::CullingAgent*>(std::forward<::UnityW<::HouseCulling::CullingAgent>>(value));
}
inline ::UnityW<::HouseCulling::CullingAgent> HouseCulling::CullingAgent::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::HouseCulling::CullingAgent>, "Instance", ::HouseCulling::CullingAgent*>();
}
inline void HouseCulling::CullingAgent::setStaticF_multiRegionLocations(::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>*, "multiRegionLocations", ::HouseCulling::CullingAgent*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>* HouseCulling::CullingAgent::getStaticF_multiRegionLocations()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::HouseCulling::CullingLocation>>*, "multiRegionLocations", ::HouseCulling::CullingAgent*>();
}
inline void HouseCulling::CullingAgent::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseCulling::CullingAgent::Refresh(bool  forceFullRefresh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {"Refresh", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceFullRefresh);
}
inline void HouseCulling::CullingAgent::RefreshAfterRegionChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {"RefreshAfterRegionChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HouseCulling::CullingAgent::OnTriggerEnter(::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void HouseCulling::CullingAgent::OnTriggerExit(::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, col);
}
inline void HouseCulling::CullingAgent::ToggleEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {"ToggleEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void HouseCulling::CullingAgent::ToggleDebug()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {"ToggleDebug", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void HouseCulling::CullingAgent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::HouseCulling::CullingAgent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HouseCulling::CullingAgent* HouseCulling::CullingAgent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HouseCulling::CullingAgent*>());
}
// Ctor Parameters []
constexpr ::HouseCulling::CullingAgent::CullingAgent()   {
}
