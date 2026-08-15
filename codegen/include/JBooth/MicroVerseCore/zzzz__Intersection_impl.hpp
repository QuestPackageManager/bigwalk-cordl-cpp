#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Intersection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__Intersection_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Connector_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Intersection_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__RoadConfig_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__RoadSystem_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Road_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Splines/zzzz__BezierKnot_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::Intersection_ConnectionPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Intersection_ConnectionPoint::*)()>(&::JBooth::MicroVerseCore::Intersection_ConnectionPoint::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection_ConnectionPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::JBooth::MicroVerseCore::Connector>& JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_get_connector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connector;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::Connector> const& JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_get_connector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connector;
}
constexpr void JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_set_connector(::UnityW<::JBooth::MicroVerseCore::Connector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connector = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::Intersection>& JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_get_owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::Intersection> const& JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_get_owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr void JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_set_owner(::UnityW<::JBooth::MicroVerseCore::Intersection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___owner = value;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_get_container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___container;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_get_container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___container;
}
constexpr void JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_set_container(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___container = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::Road>& JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_get_road()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___road;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::Road> const& JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_get_road() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___road;
}
constexpr void JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_set_road(::UnityW<::JBooth::MicroVerseCore::Road>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___road = value;
}
constexpr bool& JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_get_front()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___front;
}
constexpr bool const& JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_get_front() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___front;
}
constexpr void JBooth::MicroVerseCore::Intersection_ConnectionPoint::__cordl_internal_set_front(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___front = value;
}
inline void JBooth::MicroVerseCore::Intersection_ConnectionPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection_ConnectionPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Intersection_ConnectionPoint* JBooth::MicroVerseCore::Intersection_ConnectionPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Intersection_ConnectionPoint*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Intersection_ConnectionPoint::Intersection_ConnectionPoint()   {
}
//  Writing Method size for method: ::JBooth::MicroVerseCore::Intersection.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Intersection::*)()>(&::JBooth::MicroVerseCore::Intersection::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x181406d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Intersection.ClearSpawns
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Intersection::*)()>(&::JBooth::MicroVerseCore::Intersection::ClearSpawns)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181406540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection*>(),
                        {"ClearSpawns", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Intersection.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Intersection::*)()>(&::JBooth::MicroVerseCore::Intersection::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181406cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Intersection.Generate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Intersection::*)(::JBooth::MicroVerseCore::RoadSystem*)>(&::JBooth::MicroVerseCore::Intersection::Generate)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x181406610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection*>(),
                        {"Generate", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Intersection.MatchConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::BezierKnot (::JBooth::MicroVerseCore::Intersection::*)(::JBooth::MicroVerseCore::Intersection_ConnectionPoint*, ::UnityEngine::Splines::BezierKnot)>(&::JBooth::MicroVerseCore::Intersection::MatchConnection)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x181406890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection*>(),
                        {"MatchConnection", {}, {::i2c::type_of<::JBooth::MicroVerseCore::Intersection_ConnectionPoint*>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Intersection.UpdateConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Intersection::*)(::JBooth::MicroVerseCore::RoadSystem*)>(&::JBooth::MicroVerseCore::Intersection::UpdateConnections)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x181406f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection*>(),
                        {"UpdateConnections", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Intersection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Intersection::*)()>(&::JBooth::MicroVerseCore::Intersection::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1814075d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& JBooth::MicroVerseCore::Intersection::__cordl_internal_get_modifiesTerrain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiesTerrain;
}
constexpr bool const& JBooth::MicroVerseCore::Intersection::__cordl_internal_get_modifiesTerrain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiesTerrain;
}
constexpr void JBooth::MicroVerseCore::Intersection::__cordl_internal_set_modifiesTerrain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modifiesTerrain = value;
}
constexpr ::ArrayW<::JBooth::MicroVerseCore::Intersection_ConnectionPoint*>& JBooth::MicroVerseCore::Intersection::__cordl_internal_get_connectionPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionPoints;
}
constexpr ::ArrayW<::JBooth::MicroVerseCore::Intersection_ConnectionPoint*> const& JBooth::MicroVerseCore::Intersection::__cordl_internal_get_connectionPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionPoints;
}
constexpr void JBooth::MicroVerseCore::Intersection::__cordl_internal_set_connectionPoints(::ArrayW<::JBooth::MicroVerseCore::Intersection_ConnectionPoint*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionPoints = value;
}
constexpr ::JBooth::MicroVerseCore::Road_SplineChoiceData*& JBooth::MicroVerseCore::Intersection::__cordl_internal_get_defaultChoiceData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultChoiceData;
}
constexpr ::JBooth::MicroVerseCore::Road_SplineChoiceData* const& JBooth::MicroVerseCore::Intersection::__cordl_internal_get_defaultChoiceData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultChoiceData;
}
constexpr void JBooth::MicroVerseCore::Intersection::__cordl_internal_set_defaultChoiceData(::JBooth::MicroVerseCore::Road_SplineChoiceData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultChoiceData = value;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig>& JBooth::MicroVerseCore::Intersection::__cordl_internal_get_config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr ::UnityW<::JBooth::MicroVerseCore::RoadConfig> const& JBooth::MicroVerseCore::Intersection::__cordl_internal_get_config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___config;
}
constexpr void JBooth::MicroVerseCore::Intersection::__cordl_internal_set_config(::UnityW<::JBooth::MicroVerseCore::RoadConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___config = value;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& JBooth::MicroVerseCore::Intersection::__cordl_internal_get_splineForAreaEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineForAreaEffects;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& JBooth::MicroVerseCore::Intersection::__cordl_internal_get_splineForAreaEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___splineForAreaEffects;
}
constexpr void JBooth::MicroVerseCore::Intersection::__cordl_internal_set_splineForAreaEffects(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___splineForAreaEffects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& JBooth::MicroVerseCore::Intersection::__cordl_internal_get_spawns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawns;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& JBooth::MicroVerseCore::Intersection::__cordl_internal_get_spawns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawns;
}
constexpr void JBooth::MicroVerseCore::Intersection::__cordl_internal_set_spawns(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawns = value;
}
inline void JBooth::MicroVerseCore::Intersection::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::Intersection::ClearSpawns()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection*>(),
                        {"ClearSpawns", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::Intersection::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::Intersection::Generate(::JBooth::MicroVerseCore::RoadSystem*  rs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection*>(),
                        {"Generate", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rs);
}
inline ::UnityEngine::Splines::BezierKnot JBooth::MicroVerseCore::Intersection::MatchConnection(::JBooth::MicroVerseCore::Intersection_ConnectionPoint*  pnt, ::UnityEngine::Splines::BezierKnot  knot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection*>(),
                        {"MatchConnection", {}, {::i2c::type_of<::JBooth::MicroVerseCore::Intersection_ConnectionPoint*>(), ::i2c::type_of<::UnityEngine::Splines::BezierKnot>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::BezierKnot>(this, ___internal_method, pnt, knot);
}
inline void JBooth::MicroVerseCore::Intersection::UpdateConnections(::JBooth::MicroVerseCore::RoadSystem*  rs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection*>(),
                        {"UpdateConnections", {}, {::i2c::type_of<::JBooth::MicroVerseCore::RoadSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rs);
}
inline void JBooth::MicroVerseCore::Intersection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Intersection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Intersection* JBooth::MicroVerseCore::Intersection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Intersection*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Intersection::Intersection()   {
}
