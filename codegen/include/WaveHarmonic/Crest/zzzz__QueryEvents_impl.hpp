#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/QueryEvents.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__QuerySource_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__QueryEvents_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "WaveHarmonic/Crest/zzzz__CollisionLayer_def.hpp"
#include "WaveHarmonic/Crest/zzzz__QuerySource_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleCollisionHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__SampleDepthHelper_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_HasOnBelowWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_HasOnBelowWater)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18257c0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_HasOnBelowWater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_HasOnAboveWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_HasOnAboveWater)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18257c0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_HasOnAboveWater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_HasDistanceFromSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_HasDistanceFromSurface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18257c080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_HasDistanceFromSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_HasDistanceFromEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_HasDistanceFromEdge)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18257c050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_HasDistanceFromEdge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_OnUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_OnUpdateMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18257c150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::QueryEvents::OnUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18257b7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_OnLateUpdateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_OnLateUpdateMethod)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18257c110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.OnLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::QueryEvents::OnLateUpdate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18257b7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"OnLateUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.SendDistanceFromSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::QueryEvents::SendDistanceFromSurface)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x18257ba70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"SendDistanceFromSurface", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.SendDistanceFromEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(::WaveHarmonic::Crest::WaterRenderer*)>(&::WaveHarmonic::Crest::QueryEvents::SendDistanceFromEdge)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18257b830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"SendDistanceFromEdge", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_DistanceFromEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<float_t>* (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_DistanceFromEdge)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromEdge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_DistanceFromEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(::System::Action_1<float_t>*)>(&::WaveHarmonic::Crest::QueryEvents::set_DistanceFromEdge)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fdbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromEdge", {}, {::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_DistanceFromEdgeCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_DistanceFromEdgeCurve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180312ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromEdgeCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_DistanceFromEdgeCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(::UnityEngine::AnimationCurve*)>(&::WaveHarmonic::Crest::QueryEvents::set_DistanceFromEdgeCurve)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1803e1880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromEdgeCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_DistanceFromEdgeMaximum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_DistanceFromEdgeMaximum)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180483520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromEdgeMaximum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_DistanceFromEdgeMaximum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(float_t)>(&::WaveHarmonic::Crest::QueryEvents::set_DistanceFromEdgeMaximum)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804a5a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromEdgeMaximum", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_DistanceFromEdgeSigned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_DistanceFromEdgeSigned)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e56a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromEdgeSigned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_DistanceFromEdgeSigned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(bool)>(&::WaveHarmonic::Crest::QueryEvents::set_DistanceFromEdgeSigned)> {
  constexpr static std::size_t size = 0x1ac0;
  constexpr static std::size_t addrs = 0x1813bddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromEdgeSigned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_DistanceFromEdgeUseCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_DistanceFromEdgeUseCurve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromEdgeUseCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_DistanceFromEdgeUseCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(bool)>(&::WaveHarmonic::Crest::QueryEvents::set_DistanceFromEdgeUseCurve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817d6350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromEdgeUseCurve", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_DistanceFromSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<float_t>* (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_DistanceFromSurface)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803b2dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_DistanceFromSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(::System::Action_1<float_t>*)>(&::WaveHarmonic::Crest::QueryEvents::set_DistanceFromSurface)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1813fdc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromSurface", {}, {::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_DistanceFromSurfaceCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_DistanceFromSurfaceCurve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromSurfaceCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_DistanceFromSurfaceCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(::UnityEngine::AnimationCurve*)>(&::WaveHarmonic::Crest::QueryEvents::set_DistanceFromSurfaceCurve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803f5420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromSurfaceCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_DistanceFromSurfaceMaximum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_DistanceFromSurfaceMaximum)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromSurfaceMaximum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_DistanceFromSurfaceMaximum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(float_t)>(&::WaveHarmonic::Crest::QueryEvents::set_DistanceFromSurfaceMaximum)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromSurfaceMaximum", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_DistanceFromSurfaceSigned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_DistanceFromSurfaceSigned)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x180347a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromSurfaceSigned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_DistanceFromSurfaceSigned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(bool)>(&::WaveHarmonic::Crest::QueryEvents::set_DistanceFromSurfaceSigned)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180452bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromSurfaceSigned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_DistanceFromSurfaceUseCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_DistanceFromSurfaceUseCurve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180352b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromSurfaceUseCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_DistanceFromSurfaceUseCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(bool)>(&::WaveHarmonic::Crest::QueryEvents::set_DistanceFromSurfaceUseCurve)> {
  constexpr static std::size_t size = 0x31e0;
  constexpr static std::size_t addrs = 0x180c2bc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromSurfaceUseCurve", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::CollisionLayer (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_Layer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_Layer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(::WaveHarmonic::Crest::CollisionLayer)>(&::WaveHarmonic::Crest::QueryEvents::set_Layer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f67b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_Layer", {}, {::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_MinimumWavelength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_MinimumWavelength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_MinimumWavelength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_MinimumWavelength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(float_t)>(&::WaveHarmonic::Crest::QueryEvents::set_MinimumWavelength)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18046fb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_MinimumWavelength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_OnAboveWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_OnAboveWater)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803459d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_OnAboveWater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_OnAboveWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(::System::Action*)>(&::WaveHarmonic::Crest::QueryEvents::set_OnAboveWater)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180352c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_OnAboveWater", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_OnBelowWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_OnBelowWater)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180474bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_OnBelowWater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_OnBelowWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(::System::Action*)>(&::WaveHarmonic::Crest::QueryEvents::set_OnBelowWater)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180474ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_OnBelowWater", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_Source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::QuerySource (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_Source)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_Source", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_Source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(::WaveHarmonic::Crest::QuerySource)>(&::WaveHarmonic::Crest::QueryEvents::set_Source)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d75f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_Source", {}, {::i2c::type_of<::WaveHarmonic::Crest::QuerySource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.get_Viewer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::get_Viewer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_Viewer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents.set_Viewer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)(::UnityEngine::Camera*)>(&::WaveHarmonic::Crest::QueryEvents::set_Viewer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_Viewer", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::QueryEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::QueryEvents::*)()>(&::WaveHarmonic::Crest::QueryEvents::_ctor)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18257be30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::QuerySource& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__Source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Source;
}
constexpr ::WaveHarmonic::Crest::QuerySource const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__Source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Source;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__Source(::WaveHarmonic::Crest::QuerySource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Source = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__Viewer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Viewer;
}
constexpr ::UnityW<::UnityEngine::Camera> const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__Viewer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Viewer;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__Viewer(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Viewer = value;
}
constexpr ::WaveHarmonic::Crest::CollisionLayer& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__Layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr ::WaveHarmonic::Crest::CollisionLayer const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__Layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__Layer(::WaveHarmonic::Crest::CollisionLayer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Layer = value;
}
constexpr float_t& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__MinimumWavelength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinimumWavelength;
}
constexpr float_t const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__MinimumWavelength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MinimumWavelength;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__MinimumWavelength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MinimumWavelength = value;
}
constexpr bool& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromSurfaceSigned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromSurfaceSigned;
}
constexpr bool const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromSurfaceSigned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromSurfaceSigned;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__DistanceFromSurfaceSigned(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DistanceFromSurfaceSigned = value;
}
constexpr float_t& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromSurfaceMaximum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromSurfaceMaximum;
}
constexpr float_t const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromSurfaceMaximum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromSurfaceMaximum;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__DistanceFromSurfaceMaximum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DistanceFromSurfaceMaximum = value;
}
constexpr bool& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromSurfaceUseCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromSurfaceUseCurve;
}
constexpr bool const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromSurfaceUseCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromSurfaceUseCurve;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__DistanceFromSurfaceUseCurve(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DistanceFromSurfaceUseCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromSurfaceCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromSurfaceCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromSurfaceCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromSurfaceCurve;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__DistanceFromSurfaceCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DistanceFromSurfaceCurve = value;
}
constexpr bool& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromEdgeSigned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromEdgeSigned;
}
constexpr bool const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromEdgeSigned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromEdgeSigned;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__DistanceFromEdgeSigned(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DistanceFromEdgeSigned = value;
}
constexpr float_t& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromEdgeMaximum()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromEdgeMaximum;
}
constexpr float_t const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromEdgeMaximum() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromEdgeMaximum;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__DistanceFromEdgeMaximum(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DistanceFromEdgeMaximum = value;
}
constexpr bool& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromEdgeUseCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromEdgeUseCurve;
}
constexpr bool const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromEdgeUseCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromEdgeUseCurve;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__DistanceFromEdgeUseCurve(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DistanceFromEdgeUseCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromEdgeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromEdgeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromEdgeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromEdgeCurve;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__DistanceFromEdgeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DistanceFromEdgeCurve = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__OnBelowWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnBelowWater;
}
constexpr ::UnityEngine::Events::UnityEvent* const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__OnBelowWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnBelowWater;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__OnBelowWater(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnBelowWater = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__OnAboveWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnAboveWater;
}
constexpr ::UnityEngine::Events::UnityEvent* const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__OnAboveWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnAboveWater;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__OnAboveWater(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnAboveWater = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromSurface;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromSurface;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__DistanceFromSurface(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DistanceFromSurface = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromEdge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromEdge;
}
constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromEdge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromEdge;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__DistanceFromEdge(::UnityEngine::Events::UnityEvent_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DistanceFromEdge = value;
}
constexpr bool& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__IsAboveSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsAboveSurface;
}
constexpr bool const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__IsAboveSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsAboveSurface;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__IsAboveSurface(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsAboveSurface = value;
}
constexpr bool& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__IsFirstUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsFirstUpdate;
}
constexpr bool const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__IsFirstUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsFirstUpdate;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__IsFirstUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsFirstUpdate = value;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__SampleHeightHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleHeightHelper;
}
constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__SampleHeightHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleHeightHelper;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__SampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleHeightHelper = value;
}
constexpr ::WaveHarmonic::Crest::SampleDepthHelper*& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__SampleDepthHelper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleDepthHelper;
}
constexpr ::WaveHarmonic::Crest::SampleDepthHelper* const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__SampleDepthHelper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SampleDepthHelper;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__SampleDepthHelper(::WaveHarmonic::Crest::SampleDepthHelper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SampleDepthHelper = value;
}
constexpr ::System::Action_1<float_t>*& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromEdge_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromEdge_k__BackingField;
}
constexpr ::System::Action_1<float_t>* const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromEdge_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromEdge_k__BackingField;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__DistanceFromEdge_k__BackingField(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DistanceFromEdge_k__BackingField = value;
}
constexpr ::System::Action_1<float_t>*& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromSurface_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromSurface_k__BackingField;
}
constexpr ::System::Action_1<float_t>* const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__DistanceFromSurface_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DistanceFromSurface_k__BackingField;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__DistanceFromSurface_k__BackingField(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DistanceFromSurface_k__BackingField = value;
}
constexpr ::System::Action*& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__OnAboveWater_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnAboveWater_k__BackingField;
}
constexpr ::System::Action* const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__OnAboveWater_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnAboveWater_k__BackingField;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__OnAboveWater_k__BackingField(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnAboveWater_k__BackingField = value;
}
constexpr ::System::Action*& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__OnBelowWater_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnBelowWater_k__BackingField;
}
constexpr ::System::Action* const& WaveHarmonic::Crest::QueryEvents::__cordl_internal_get__OnBelowWater_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnBelowWater_k__BackingField;
}
constexpr void WaveHarmonic::Crest::QueryEvents::__cordl_internal_set__OnBelowWater_k__BackingField(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnBelowWater_k__BackingField = value;
}
inline bool WaveHarmonic::Crest::QueryEvents::get_HasOnBelowWater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_HasOnBelowWater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::QueryEvents::get_HasOnAboveWater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_HasOnAboveWater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::QueryEvents::get_HasDistanceFromSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_HasDistanceFromSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::QueryEvents::get_HasDistanceFromEdge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_HasDistanceFromEdge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::QueryEvents::get_OnUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::OnUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"OnUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline ::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>* WaveHarmonic::Crest::QueryEvents::get_OnLateUpdateMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::OnLateUpdate(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"OnLateUpdate", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::QueryEvents::SendDistanceFromSurface(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"SendDistanceFromSurface", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline void WaveHarmonic::Crest::QueryEvents::SendDistanceFromEdge(::WaveHarmonic::Crest::WaterRenderer*  water)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"SendDistanceFromEdge", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, water);
}
inline ::System::Action_1<float_t>* WaveHarmonic::Crest::QueryEvents::get_DistanceFromEdge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromEdge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<float_t>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_DistanceFromEdge(::System::Action_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromEdge", {}, {::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* WaveHarmonic::Crest::QueryEvents::get_DistanceFromEdgeCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromEdgeCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_DistanceFromEdgeCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromEdgeCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::QueryEvents::get_DistanceFromEdgeMaximum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromEdgeMaximum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_DistanceFromEdgeMaximum(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromEdgeMaximum", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::QueryEvents::get_DistanceFromEdgeSigned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromEdgeSigned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_DistanceFromEdgeSigned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromEdgeSigned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::QueryEvents::get_DistanceFromEdgeUseCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromEdgeUseCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_DistanceFromEdgeUseCurve(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromEdgeUseCurve", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<float_t>* WaveHarmonic::Crest::QueryEvents::get_DistanceFromSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<float_t>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_DistanceFromSurface(::System::Action_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromSurface", {}, {::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* WaveHarmonic::Crest::QueryEvents::get_DistanceFromSurfaceCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromSurfaceCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_DistanceFromSurfaceCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromSurfaceCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::QueryEvents::get_DistanceFromSurfaceMaximum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromSurfaceMaximum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_DistanceFromSurfaceMaximum(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromSurfaceMaximum", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::QueryEvents::get_DistanceFromSurfaceSigned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromSurfaceSigned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_DistanceFromSurfaceSigned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromSurfaceSigned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::QueryEvents::get_DistanceFromSurfaceUseCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_DistanceFromSurfaceUseCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_DistanceFromSurfaceUseCurve(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_DistanceFromSurfaceUseCurve", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::CollisionLayer WaveHarmonic::Crest::QueryEvents::get_Layer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_Layer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::CollisionLayer>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_Layer(::WaveHarmonic::Crest::CollisionLayer  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_Layer", {}, {::i2c::type_of<::WaveHarmonic::Crest::CollisionLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t WaveHarmonic::Crest::QueryEvents::get_MinimumWavelength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_MinimumWavelength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_MinimumWavelength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_MinimumWavelength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action* WaveHarmonic::Crest::QueryEvents::get_OnAboveWater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_OnAboveWater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_OnAboveWater(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_OnAboveWater", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action* WaveHarmonic::Crest::QueryEvents::get_OnBelowWater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_OnBelowWater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_OnBelowWater(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_OnBelowWater", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::QuerySource WaveHarmonic::Crest::QueryEvents::get_Source()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_Source", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::QuerySource>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_Source(::WaveHarmonic::Crest::QuerySource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_Source", {}, {::i2c::type_of<::WaveHarmonic::Crest::QuerySource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Camera> WaveHarmonic::Crest::QueryEvents::get_Viewer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"get_Viewer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::QueryEvents::set_Viewer(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {"set_Viewer", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WaveHarmonic::Crest::QueryEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::QueryEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::QueryEvents* WaveHarmonic::Crest::QueryEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::QueryEvents*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::QueryEvents::QueryEvents()   {
}
