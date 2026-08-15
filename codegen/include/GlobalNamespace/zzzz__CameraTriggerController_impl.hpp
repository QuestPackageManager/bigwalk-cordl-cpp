#pragma once
// IWYU pragma private; include "GlobalNamespace/CameraTriggerController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CameraTriggerController_def.hpp"
#include "GlobalNamespace/zzzz__CameraTrigger_def.hpp"
#include "GlobalNamespace/zzzz__OcclusionCullingBlockerManager_def.hpp"
#include "HouseCulling/zzzz__CullingAgent_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CameraTriggerController.get_CullingAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HouseCulling::CullingAgent> (::GlobalNamespace::CameraTriggerController::*)()>(&::GlobalNamespace::CameraTriggerController::get_CullingAgent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"get_CullingAgent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraTriggerController.set_CullingAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraTriggerController::*)(::HouseCulling::CullingAgent*)>(&::GlobalNamespace::CameraTriggerController::set_CullingAgent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"set_CullingAgent", {}, {::i2c::type_of<::HouseCulling::CullingAgent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraTriggerController.get_OcclusionCullingBlockerManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OcclusionCullingBlockerManager> (::GlobalNamespace::CameraTriggerController::*)()>(&::GlobalNamespace::CameraTriggerController::get_OcclusionCullingBlockerManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"get_OcclusionCullingBlockerManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraTriggerController.set_OcclusionCullingBlockerManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraTriggerController::*)(::GlobalNamespace::OcclusionCullingBlockerManager*)>(&::GlobalNamespace::CameraTriggerController::set_OcclusionCullingBlockerManager)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"set_OcclusionCullingBlockerManager", {}, {::i2c::type_of<::GlobalNamespace::OcclusionCullingBlockerManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraTriggerController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraTriggerController::*)()>(&::GlobalNamespace::CameraTriggerController::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803e33b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraTriggerController.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraTriggerController::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::CameraTriggerController::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1803e3400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraTriggerController.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraTriggerController::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::CameraTriggerController::OnTriggerExit)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1803e3610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraTriggerController.TriggerOnRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraTriggerController::*)(::GlobalNamespace::CameraTrigger*)>(&::GlobalNamespace::CameraTriggerController::TriggerOnRemove)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1803e3810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"TriggerOnRemove", {}, {::i2c::type_of<::GlobalNamespace::CameraTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraTriggerController.RemoveTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraTriggerController::*)(::GlobalNamespace::CameraTrigger*)>(&::GlobalNamespace::CameraTriggerController::RemoveTrigger)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1803e3730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"RemoveTrigger", {}, {::i2c::type_of<::GlobalNamespace::CameraTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraTriggerController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CameraTriggerController::*)()>(&::GlobalNamespace::CameraTriggerController::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803e39d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HouseCulling::CullingAgent>& GlobalNamespace::CameraTriggerController::__cordl_internal_get__CullingAgent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CullingAgent_k__BackingField;
}
constexpr ::UnityW<::HouseCulling::CullingAgent> const& GlobalNamespace::CameraTriggerController::__cordl_internal_get__CullingAgent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CullingAgent_k__BackingField;
}
constexpr void GlobalNamespace::CameraTriggerController::__cordl_internal_set__CullingAgent_k__BackingField(::UnityW<::HouseCulling::CullingAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CullingAgent_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::OcclusionCullingBlockerManager>& GlobalNamespace::CameraTriggerController::__cordl_internal_get__OcclusionCullingBlockerManager_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OcclusionCullingBlockerManager_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::OcclusionCullingBlockerManager> const& GlobalNamespace::CameraTriggerController::__cordl_internal_get__OcclusionCullingBlockerManager_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OcclusionCullingBlockerManager_k__BackingField;
}
constexpr void GlobalNamespace::CameraTriggerController::__cordl_internal_set__OcclusionCullingBlockerManager_k__BackingField(::UnityW<::GlobalNamespace::OcclusionCullingBlockerManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OcclusionCullingBlockerManager_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CameraTrigger>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>*& GlobalNamespace::CameraTriggerController::__cordl_internal_get__triggerDictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerDictionary;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CameraTrigger>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>* const& GlobalNamespace::CameraTriggerController::__cordl_internal_get__triggerDictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____triggerDictionary;
}
constexpr void GlobalNamespace::CameraTriggerController::__cordl_internal_set__triggerDictionary(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::CameraTrigger>,::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____triggerDictionary = value;
}
inline ::UnityW<::HouseCulling::CullingAgent> GlobalNamespace::CameraTriggerController::get_CullingAgent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"get_CullingAgent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::HouseCulling::CullingAgent>>(this, ___internal_method);
}
inline void GlobalNamespace::CameraTriggerController::set_CullingAgent(::HouseCulling::CullingAgent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"set_CullingAgent", {}, {::i2c::type_of<::HouseCulling::CullingAgent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::OcclusionCullingBlockerManager> GlobalNamespace::CameraTriggerController::get_OcclusionCullingBlockerManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"get_OcclusionCullingBlockerManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OcclusionCullingBlockerManager>>(this, ___internal_method);
}
inline void GlobalNamespace::CameraTriggerController::set_OcclusionCullingBlockerManager(::GlobalNamespace::OcclusionCullingBlockerManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"set_OcclusionCullingBlockerManager", {}, {::i2c::type_of<::GlobalNamespace::OcclusionCullingBlockerManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CameraTriggerController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CameraTriggerController::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::CameraTriggerController::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::CameraTriggerController::TriggerOnRemove(::GlobalNamespace::CameraTrigger*  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"TriggerOnRemove", {}, {::i2c::type_of<::GlobalNamespace::CameraTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger);
}
inline void GlobalNamespace::CameraTriggerController::RemoveTrigger(::GlobalNamespace::CameraTrigger*  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {"RemoveTrigger", {}, {::i2c::type_of<::GlobalNamespace::CameraTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, trigger);
}
inline void GlobalNamespace::CameraTriggerController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CameraTriggerController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CameraTriggerController* GlobalNamespace::CameraTriggerController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CameraTriggerController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CameraTriggerController::CameraTriggerController()   {
}
