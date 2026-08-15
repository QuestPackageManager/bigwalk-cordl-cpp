#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformDisplayMap.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformDisplayMap_def.hpp"
#include "GlobalNamespace/zzzz__NetworkedTrain_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformDisplayMap.PositionPlatformMarker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformDisplayMap::*)()>(&::GlobalNamespace::PlatformDisplayMap::PositionPlatformMarker)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x18040e120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplayMap*>(),
                        {"PositionPlatformMarker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformDisplayMap.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformDisplayMap::*)()>(&::GlobalNamespace::PlatformDisplayMap::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18040e400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplayMap*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformDisplayMap.SetDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformDisplayMap::*)(float_t, ::UnityEngine::Transform*)>(&::GlobalNamespace::PlatformDisplayMap::SetDisplay)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18040e2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplayMap*>(),
                        {"SetDisplay", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformDisplayMap.CreateAdditionalStationMarkers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformDisplayMap::*)()>(&::GlobalNamespace::PlatformDisplayMap::CreateAdditionalStationMarkers)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x18040da20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplayMap*>(),
                        {"CreateAdditionalStationMarkers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformDisplayMap.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformDisplayMap::*)()>(&::GlobalNamespace::PlatformDisplayMap::OnEnable)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x18040ddc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplayMap*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformDisplayMap.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformDisplayMap::*)()>(&::GlobalNamespace::PlatformDisplayMap::OnDisable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18040dc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplayMap*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformDisplayMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlatformDisplayMap::*)()>(&::GlobalNamespace::PlatformDisplayMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplayMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NetworkedTrain>& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_networkedTrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedTrain;
}
constexpr ::UnityW<::GlobalNamespace::NetworkedTrain> const& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_networkedTrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedTrain;
}
constexpr void GlobalNamespace::PlatformDisplayMap::__cordl_internal_set_networkedTrain(::UnityW<::GlobalNamespace::NetworkedTrain>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkedTrain = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_trainRotators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trainRotators;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_trainRotators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trainRotators;
}
constexpr void GlobalNamespace::PlatformDisplayMap::__cordl_internal_set_trainRotators(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trainRotators = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_platformRotator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformRotator;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_platformRotator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformRotator;
}
constexpr void GlobalNamespace::PlatformDisplayMap::__cordl_internal_set_platformRotator(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformRotator = value;
}
constexpr bool& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_isOnTrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOnTrain;
}
constexpr bool const& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_isOnTrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOnTrain;
}
constexpr void GlobalNamespace::PlatformDisplayMap::__cordl_internal_set_isOnTrain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOnTrain = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_otherPlatformMarkerPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherPlatformMarkerPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_otherPlatformMarkerPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___otherPlatformMarkerPrefab;
}
constexpr void GlobalNamespace::PlatformDisplayMap::__cordl_internal_set_otherPlatformMarkerPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___otherPlatformMarkerPrefab = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlatformDisplayMap>,::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get__otherPlatformMarkers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____otherPlatformMarkers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlatformDisplayMap>,::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get__otherPlatformMarkers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____otherPlatformMarkers;
}
constexpr void GlobalNamespace::PlatformDisplayMap::__cordl_internal_set__otherPlatformMarkers(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::PlatformDisplayMap>,::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____otherPlatformMarkers = value;
}
constexpr bool& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::PlatformDisplayMap::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_customMeasurementPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMeasurementPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_customMeasurementPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMeasurementPoint;
}
constexpr void GlobalNamespace::PlatformDisplayMap::__cordl_internal_set_customMeasurementPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customMeasurementPoint = value;
}
constexpr double_t& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_totalLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalLength;
}
constexpr double_t const& GlobalNamespace::PlatformDisplayMap::__cordl_internal_get_totalLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalLength;
}
constexpr void GlobalNamespace::PlatformDisplayMap::__cordl_internal_set_totalLength(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalLength = value;
}
inline void GlobalNamespace::PlatformDisplayMap::setStaticF__activePlatformDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformDisplayMap>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformDisplayMap>>*, "_activePlatformDisplays", ::GlobalNamespace::PlatformDisplayMap*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformDisplayMap>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformDisplayMap>>* GlobalNamespace::PlatformDisplayMap::getStaticF__activePlatformDisplays()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PlatformDisplayMap>>*, "_activePlatformDisplays", ::GlobalNamespace::PlatformDisplayMap*>();
}
inline void GlobalNamespace::PlatformDisplayMap::setStaticF__onAddPlatformDisplayMap(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "_onAddPlatformDisplayMap", ::GlobalNamespace::PlatformDisplayMap*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::PlatformDisplayMap::getStaticF__onAddPlatformDisplayMap()  {
return ::cordl_internals::getStaticField<::System::Action*, "_onAddPlatformDisplayMap", ::GlobalNamespace::PlatformDisplayMap*>();
}
inline void GlobalNamespace::PlatformDisplayMap::PositionPlatformMarker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplayMap*>(),
                        {"PositionPlatformMarker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformDisplayMap::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplayMap*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformDisplayMap::SetDisplay(float_t  fraction, ::UnityEngine::Transform*  displayTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplayMap*>(),
                        {"SetDisplay", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fraction, displayTransform);
}
inline void GlobalNamespace::PlatformDisplayMap::CreateAdditionalStationMarkers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplayMap*>(),
                        {"CreateAdditionalStationMarkers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformDisplayMap::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplayMap*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformDisplayMap::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplayMap*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformDisplayMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlatformDisplayMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformDisplayMap* GlobalNamespace::PlatformDisplayMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlatformDisplayMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformDisplayMap::PlatformDisplayMap()   {
}
