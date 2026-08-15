#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineExtrude.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineExtrude_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "UnityEngine/Splines/zzzz__IExtrudeShape_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineModification_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_CanCapEnds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_CanCapEnds)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d8ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_CanCapEnds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_Shape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::IExtrudeShape* (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_Shape)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18039fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Shape", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.set_Shape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)(::UnityEngine::Splines::IExtrudeShape*)>(&::UnityEngine::Splines::SplineExtrude::set_Shape)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d5ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_Shape", {}, {::i2c::type_of<::UnityEngine::Splines::IExtrudeShape*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Splines::SplineContainer> (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_container)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_container", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Splines::SplineContainer> (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_Container)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Container", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.set_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)(::UnityEngine::Splines::SplineContainer*)>(&::UnityEngine::Splines::SplineExtrude::set_Container)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_Container", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_rebuildOnSplineChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_rebuildOnSplineChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_rebuildOnSplineChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_RebuildOnSplineChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_RebuildOnSplineChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803561b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_RebuildOnSplineChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.set_RebuildOnSplineChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)(bool)>(&::UnityEngine::Splines::SplineExtrude::set_RebuildOnSplineChange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18216d360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_RebuildOnSplineChange", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_rebuildFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_rebuildFrequency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_rebuildFrequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_RebuildFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_RebuildFrequency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_RebuildFrequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.set_RebuildFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)(int32_t)>(&::UnityEngine::Splines::SplineExtrude::set_RebuildFrequency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18216d350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_RebuildFrequency", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_sides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_sides)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803231b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_sides", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_Sides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_Sides)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803231b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Sides", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.set_Sides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)(int32_t)>(&::UnityEngine::Splines::SplineExtrude::set_Sides)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18216d380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_Sides", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_segmentsPerUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_segmentsPerUnit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_segmentsPerUnit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_SegmentsPerUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_SegmentsPerUnit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_SegmentsPerUnit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.set_SegmentsPerUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)(float_t)>(&::UnityEngine::Splines::SplineExtrude::set_SegmentsPerUnit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18216d370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_SegmentsPerUnit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_capped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_capped)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180468800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_capped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_Capped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_Capped)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180468800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Capped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.set_Capped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)(bool)>(&::UnityEngine::Splines::SplineExtrude::set_Capped)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180468810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_Capped", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_radius)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_Radius)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.set_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)(float_t)>(&::UnityEngine::Splines::SplineExtrude::set_Radius)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18216d310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_Radius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_range
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_range)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18216d2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_range", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_Range
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_Range)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817850e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Range", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.set_Range
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)(::UnityEngine::Vector2)>(&::UnityEngine::Splines::SplineExtrude::set_Range)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18216d320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_Range", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_FlipNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_FlipNormals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ef470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_FlipNormals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.set_FlipNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)(bool)>(&::UnityEngine::Splines::SplineExtrude::set_FlipNormals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1813ec680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_FlipNormals", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_targetMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_targetMesh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_targetMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.set_targetMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)(::UnityEngine::Mesh*)>(&::UnityEngine::Splines::SplineExtrude::set_targetMesh)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18216d3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_targetMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_spline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_spline)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18216d260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_spline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_Spline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::Spline* (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_Spline)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18216d260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Spline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.get_Splines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::get_Splines)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18216d280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Splines", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::Reset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18216d070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.IsNullOrEmptyContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::IsNullOrEmptyContainer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18216c8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"IsNullOrEmptyContainer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.SetSplineContainerOnGO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::SetSplineContainerOnGO)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18216d130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"SetSplineContainerOnGO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::OnEnable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18216c960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::OnDisable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18216c910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.OnSplineChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)(::UnityEngine::Splines::Spline*, int32_t, ::UnityEngine::Splines::SplineModification)>(&::UnityEngine::Splines::SplineExtrude::OnSplineChanged)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18216ca00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"OnSplineChanged", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::SplineModification>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18216d1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.EnsureMeshExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::EnsureMeshExists)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18216c7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"EnsureMeshExists", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.CleanupMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::CleanupMesh)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18216c740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"CleanupMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.Rebuild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::Rebuild)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x18216cb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"Rebuild", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.AutosmoothNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::AutosmoothNormals)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x18216c140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"AutosmoothNormals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude.CreateMeshAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::CreateMeshAsset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1803cba40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"CreateMeshAsset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineExtrude._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineExtrude::*)()>(&::UnityEngine::Splines::SplineExtrude::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18216d220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_Container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Container;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_Container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Container;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_Container(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Container = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_TargetMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_TargetMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetMesh;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_TargetMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetMesh = value;
}
constexpr bool& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_RebuildOnSplineChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RebuildOnSplineChange;
}
constexpr bool const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_RebuildOnSplineChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RebuildOnSplineChange;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_RebuildOnSplineChange(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RebuildOnSplineChange = value;
}
constexpr int32_t& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_RebuildFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RebuildFrequency;
}
constexpr int32_t const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_RebuildFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RebuildFrequency;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_RebuildFrequency(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RebuildFrequency = value;
}
constexpr bool& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_UpdateColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateColliders;
}
constexpr bool const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_UpdateColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateColliders;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_UpdateColliders(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdateColliders = value;
}
constexpr int32_t& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_Sides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sides;
}
constexpr int32_t const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_Sides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sides;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_Sides(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Sides = value;
}
constexpr float_t& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_SegmentsPerUnit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SegmentsPerUnit;
}
constexpr float_t const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_SegmentsPerUnit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SegmentsPerUnit;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_SegmentsPerUnit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SegmentsPerUnit = value;
}
constexpr bool& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_Capped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Capped;
}
constexpr bool const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_Capped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Capped;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_Capped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Capped = value;
}
constexpr float_t& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Radius;
}
constexpr float_t const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Radius;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Radius = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_Range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Range;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_Range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Range;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_Range(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Range = value;
}
constexpr bool& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_FlipNormals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FlipNormals;
}
constexpr bool const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_FlipNormals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FlipNormals;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_FlipNormals(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FlipNormals = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_Mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_Mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Mesh;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Mesh = value;
}
constexpr float_t& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_NextScheduledRebuild()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextScheduledRebuild;
}
constexpr float_t const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_NextScheduledRebuild() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextScheduledRebuild;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_NextScheduledRebuild(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NextScheduledRebuild = value;
}
constexpr float_t& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_AutosmoothAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutosmoothAngle;
}
constexpr float_t const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_AutosmoothAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutosmoothAngle;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_AutosmoothAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutosmoothAngle = value;
}
constexpr bool& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_RebuildRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RebuildRequested;
}
constexpr bool const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_RebuildRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RebuildRequested;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_RebuildRequested(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RebuildRequested = value;
}
constexpr bool& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_CanCapEnds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CanCapEnds;
}
constexpr bool const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_CanCapEnds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CanCapEnds;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_CanCapEnds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CanCapEnds = value;
}
constexpr ::UnityEngine::Splines::IExtrudeShape*& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_Shape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Shape;
}
constexpr ::UnityEngine::Splines::IExtrudeShape* const& UnityEngine::Splines::SplineExtrude::__cordl_internal_get_m_Shape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Shape;
}
constexpr void UnityEngine::Splines::SplineExtrude::__cordl_internal_set_m_Shape(::UnityEngine::Splines::IExtrudeShape*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Shape = value;
}
inline void UnityEngine::Splines::SplineExtrude::setStaticF_k_EmptyContainerError(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "k_EmptyContainerError", ::UnityEngine::Splines::SplineExtrude*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Splines::SplineExtrude::getStaticF_k_EmptyContainerError()  {
return ::cordl_internals::getStaticField<::StringW, "k_EmptyContainerError", ::UnityEngine::Splines::SplineExtrude*>();
}
inline bool UnityEngine::Splines::SplineExtrude::get_CanCapEnds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_CanCapEnds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Splines::IExtrudeShape* UnityEngine::Splines::SplineExtrude::get_Shape()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Shape", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::IExtrudeShape*>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::set_Shape(::UnityEngine::Splines::IExtrudeShape*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_Shape", {}, {::i2c::type_of<::UnityEngine::Splines::IExtrudeShape*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Splines::SplineContainer> UnityEngine::Splines::SplineExtrude::get_container()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_container", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Splines::SplineContainer>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Splines::SplineContainer> UnityEngine::Splines::SplineExtrude::get_Container()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Container", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Splines::SplineContainer>>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::set_Container(::UnityEngine::Splines::SplineContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_Container", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Splines::SplineExtrude::get_rebuildOnSplineChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_rebuildOnSplineChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Splines::SplineExtrude::get_RebuildOnSplineChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_RebuildOnSplineChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::set_RebuildOnSplineChange(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_RebuildOnSplineChange", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Splines::SplineExtrude::get_rebuildFrequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_rebuildFrequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Splines::SplineExtrude::get_RebuildFrequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_RebuildFrequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::set_RebuildFrequency(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_RebuildFrequency", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Splines::SplineExtrude::get_sides()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_sides", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Splines::SplineExtrude::get_Sides()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Sides", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::set_Sides(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_Sides", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Splines::SplineExtrude::get_segmentsPerUnit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_segmentsPerUnit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Splines::SplineExtrude::get_SegmentsPerUnit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_SegmentsPerUnit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::set_SegmentsPerUnit(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_SegmentsPerUnit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Splines::SplineExtrude::get_capped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_capped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Splines::SplineExtrude::get_Capped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Capped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::set_Capped(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_Capped", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Splines::SplineExtrude::get_radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Splines::SplineExtrude::get_Radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::set_Radius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_Radius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Splines::SplineExtrude::get_range()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_range", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Splines::SplineExtrude::get_Range()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Range", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::set_Range(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_Range", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Splines::SplineExtrude::get_FlipNormals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_FlipNormals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::set_FlipNormals(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_FlipNormals", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Splines::SplineExtrude::get_targetMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_targetMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::set_targetMesh(::UnityEngine::Mesh*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"set_targetMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineExtrude::get_spline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_spline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(this, ___internal_method);
}
inline ::UnityEngine::Splines::Spline* UnityEngine::Splines::SplineExtrude::get_Spline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Spline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::Spline*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* UnityEngine::Splines::SplineExtrude::get_Splines()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"get_Splines", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Splines::SplineExtrude::IsNullOrEmptyContainer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"IsNullOrEmptyContainer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::SetSplineContainerOnGO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"SetSplineContainerOnGO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::OnSplineChanged(::UnityEngine::Splines::Spline*  spline, int32_t  knotIndex, ::UnityEngine::Splines::SplineModification  modificationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"OnSplineChanged", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::SplineModification>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spline, knotIndex, modificationType);
}
inline void UnityEngine::Splines::SplineExtrude::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::EnsureMeshExists()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"EnsureMeshExists", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::CleanupMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"CleanupMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::Rebuild()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"Rebuild", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::AutosmoothNormals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"AutosmoothNormals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Splines::SplineExtrude::CreateMeshAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {"CreateMeshAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineExtrude::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineExtrude*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::SplineExtrude* UnityEngine::Splines::SplineExtrude::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineExtrude*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineExtrude::SplineExtrude()   {
}
