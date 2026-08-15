#pragma once
// IWYU pragma private; include "GlobalNamespace/PolyLine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__PolyLine_def.hpp"
#include "GlobalNamespace/zzzz__PolyLine_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PolyLine_ClosestPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLine_ClosestPoint::*)()>(&::GlobalNamespace::PolyLine_ClosestPoint::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine_ClosestPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::PolyLine_ClosestPoint::__cordl_internal_get_Point()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Point;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::PolyLine_ClosestPoint::__cordl_internal_get_Point() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Point;
}
constexpr void GlobalNamespace::PolyLine_ClosestPoint::__cordl_internal_set_Point(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Point = value;
}
constexpr float_t& GlobalNamespace::PolyLine_ClosestPoint::__cordl_internal_get_DistanceSquared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DistanceSquared;
}
constexpr float_t const& GlobalNamespace::PolyLine_ClosestPoint::__cordl_internal_get_DistanceSquared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DistanceSquared;
}
constexpr void GlobalNamespace::PolyLine_ClosestPoint::__cordl_internal_set_DistanceSquared(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DistanceSquared = value;
}
constexpr float_t& GlobalNamespace::PolyLine_ClosestPoint::__cordl_internal_get_SegmentProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SegmentProgress;
}
constexpr float_t const& GlobalNamespace::PolyLine_ClosestPoint::__cordl_internal_get_SegmentProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SegmentProgress;
}
constexpr void GlobalNamespace::PolyLine_ClosestPoint::__cordl_internal_set_SegmentProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SegmentProgress = value;
}
constexpr int32_t& GlobalNamespace::PolyLine_ClosestPoint::__cordl_internal_get_PrevIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrevIndex;
}
constexpr int32_t const& GlobalNamespace::PolyLine_ClosestPoint::__cordl_internal_get_PrevIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrevIndex;
}
constexpr void GlobalNamespace::PolyLine_ClosestPoint::__cordl_internal_set_PrevIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrevIndex = value;
}
inline void GlobalNamespace::PolyLine_ClosestPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine_ClosestPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PolyLine_ClosestPoint* GlobalNamespace::PolyLine_ClosestPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PolyLine_ClosestPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PolyLine_ClosestPoint::PolyLine_ClosestPoint()   {
}
//  Writing Method size for method: ::GlobalNamespace::PolyLine.get_Points
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::GlobalNamespace::PolyLine::*)()>(&::GlobalNamespace::PolyLine::get_Points)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"get_Points", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLine.set_Points
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLine::*)(::ArrayW<::UnityEngine::Vector3>)>(&::GlobalNamespace::PolyLine::set_Points)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"set_Points", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLine.get_Transforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>> (::GlobalNamespace::PolyLine::*)()>(&::GlobalNamespace::PolyLine::get_Transforms)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"get_Transforms", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLine.set_Transforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLine::*)(::ArrayW<::UnityEngine::Transform*>)>(&::GlobalNamespace::PolyLine::set_Transforms)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"set_Transforms", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLine.get_ClosestPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>* (::GlobalNamespace::PolyLine::*)()>(&::GlobalNamespace::PolyLine::get_ClosestPoints)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"get_ClosestPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLine.set_ClosestPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLine::*)(::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*)>(&::GlobalNamespace::PolyLine::set_ClosestPoints)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"set_ClosestPoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLine.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLine::*)()>(&::GlobalNamespace::PolyLine::Awake)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x1804a1c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLine.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLine::*)()>(&::GlobalNamespace::PolyLine::Update)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1804a2860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLine.GetClosestPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>* (::GlobalNamespace::PolyLine::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PolyLine::GetClosestPoints)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x1804a23a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"GetClosestPoints", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLine.GetClosestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PolyLine_ClosestPoint* (::GlobalNamespace::PolyLine::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::PolyLine::GetClosestPoint)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x1804a1fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"GetClosestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLine.ClosestPointOnLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<float_t>)>(&::GlobalNamespace::PolyLine::ClosestPointOnLine)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1804a1e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"ClosestPointOnLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLine.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLine::*)()>(&::GlobalNamespace::PolyLine::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PolyLine._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PolyLine::*)()>(&::GlobalNamespace::PolyLine::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804a29a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::PolyLine::__cordl_internal_get__points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::PolyLine::__cordl_internal_get__points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____points;
}
constexpr void GlobalNamespace::PolyLine::__cordl_internal_set__points(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____points = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::PolyLine::__cordl_internal_get__transforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::PolyLine::__cordl_internal_get__transforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transforms;
}
constexpr void GlobalNamespace::PolyLine::__cordl_internal_set__transforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transforms = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*& GlobalNamespace::PolyLine::__cordl_internal_get__ClosestPoints_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClosestPoints_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>* const& GlobalNamespace::PolyLine::__cordl_internal_get__ClosestPoints_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ClosestPoints_k__BackingField;
}
constexpr void GlobalNamespace::PolyLine::__cordl_internal_set__ClosestPoints_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ClosestPoints_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::PolyLine_ClosestPoint*>& GlobalNamespace::PolyLine::__cordl_internal_get__closestPointsUnsorted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closestPointsUnsorted;
}
constexpr ::ArrayW<::GlobalNamespace::PolyLine_ClosestPoint*> const& GlobalNamespace::PolyLine::__cordl_internal_get__closestPointsUnsorted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closestPointsUnsorted;
}
constexpr void GlobalNamespace::PolyLine::__cordl_internal_set__closestPointsUnsorted(::ArrayW<::GlobalNamespace::PolyLine_ClosestPoint*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closestPointsUnsorted = value;
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::PolyLine::get_Points()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"get_Points", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void GlobalNamespace::PolyLine::set_Points(::ArrayW<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"set_Points", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> GlobalNamespace::PolyLine::get_Transforms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"get_Transforms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>>>(this, ___internal_method);
}
inline void GlobalNamespace::PolyLine::set_Transforms(::ArrayW<::UnityEngine::Transform*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"set_Transforms", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>* GlobalNamespace::PolyLine::get_ClosestPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"get_ClosestPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*>(this, ___internal_method);
}
inline void GlobalNamespace::PolyLine::set_ClosestPoints(::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"set_ClosestPoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PolyLine::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PolyLine::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>* GlobalNamespace::PolyLine::GetClosestPoints(::UnityEngine::Vector3  testPosWorld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"GetClosestPoints", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::PolyLine_ClosestPoint*>*>(this, ___internal_method, testPosWorld);
}
inline ::GlobalNamespace::PolyLine_ClosestPoint* GlobalNamespace::PolyLine::GetClosestPoint(::UnityEngine::Vector3  testPosWorld)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"GetClosestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PolyLine_ClosestPoint*>(this, ___internal_method, testPosWorld);
}
inline ::UnityEngine::Vector3 GlobalNamespace::PolyLine::ClosestPointOnLine(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  line0, ::UnityEngine::Vector3  line1, ::by_ref<float_t>  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"ClosestPointOnLine", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, p0, line0, line1, t);
}
inline void GlobalNamespace::PolyLine::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PolyLine::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PolyLine*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PolyLine* GlobalNamespace::PolyLine::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PolyLine*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PolyLine::PolyLine()   {
}
