#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ExtrudeSettings_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExtrudeSettings_1)
namespace Unity::Mathematics {
struct float2;
}
// Forward declare root types
namespace UnityEngine::Splines {
template<typename T>
struct ExtrudeSettings_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Splines::ExtrudeSettings_1);
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Splines::ExtrudeSettings_1, "UnityEngine.Splines", "ExtrudeSettings`1");
// Dependencies UnityEngine.Vector2
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Splines.ExtrudeSettings`1<T>
struct CORDL_TYPE ExtrudeSettings_1 {
public:
// Declarations
 __declspec(property(get=get_CapEnds, put=set_CapEnds)) bool  CapEnds;

 __declspec(property(get=get_FlipNormals, put=set_FlipNormals)) bool  FlipNormals;

 __declspec(property(get=get_Radius, put=set_Radius)) float_t  Radius;

 __declspec(property(get=get_Range, put=set_Range)) ::Unity::Mathematics::float2  Range;

 __declspec(property(get=get_SegmentCount, put=set_SegmentCount)) int32_t  SegmentCount;

 __declspec(property(get=get_Shape, put=set_Shape)) T  Shape;

 __declspec(property(get=get_sides)) int32_t  sides;

 __declspec(property(get=get_wrapped)) bool  wrapped;

/// @brief Method DoCapEnds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename K>
inline bool DoCapEnds(K  spline) ;

/// @brief Method DoCloseSpline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename K>
inline bool DoCloseSpline(K  spline) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  segments, bool  capped, ::Unity::Mathematics::float2  range, float_t  radius, T  shape) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  shape) ;

/// @brief Method get_CapEnds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_CapEnds() ;

/// @brief Method get_FlipNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_FlipNormals() ;

/// @brief Method get_Radius, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_Range, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float2 get_Range() ;

/// @brief Method get_SegmentCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_SegmentCount() ;

/// @brief Method get_Shape, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Shape() ;

/// @brief Method get_sides, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_sides() ;

/// @brief Method get_wrapped, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_wrapped() ;

/// @brief Method set_CapEnds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_CapEnds(bool  value) ;

/// @brief Method set_FlipNormals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_FlipNormals(bool  value) ;

/// @brief Method set_Radius, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Radius(float_t  value) ;

/// @brief Method set_Range, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Range(::Unity::Mathematics::float2  value) ;

/// @brief Method set_SegmentCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_SegmentCount(int32_t  value) ;

/// @brief Method set_Shape, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Shape(T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ExtrudeSettings_1() ;

// Ctor Parameters [CppParam { name: "m_Shape", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_CapEnds", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_FlipNormals", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_SegmentCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Radius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Range", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr ExtrudeSettings_1(T  m_Shape, bool  m_CapEnds, bool  m_FlipNormals, int32_t  m_SegmentCount, float_t  m_Radius, ::UnityEngine::Vector2  m_Range) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18745};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_RadiusMax offset 0xffffffff size 0x4
static constexpr float_t  k_RadiusMax{static_cast<float_t>(10000.0f)};

/// @brief Field k_RadiusMin offset 0xffffffff size 0x4
static constexpr float_t  k_RadiusMin{static_cast<float_t>(1e-5f)};

/// @brief Field k_SegmentsMax offset 0xffffffff size 0x4
static constexpr int32_t  k_SegmentsMax{static_cast<int32_t>(0x1000)};

/// @brief Field k_SegmentsMin offset 0xffffffff size 0x4
static constexpr int32_t  k_SegmentsMin{static_cast<int32_t>(0x2)};

/// @brief Field m_Shape, offset: 0x0, size: 0x8, def value: None
 T  m_Shape;

/// @brief Field m_CapEnds, offset: 0x8, size: 0x1, def value: None
 bool  m_CapEnds;

/// @brief Field m_FlipNormals, offset: 0x9, size: 0x1, def value: None
 bool  m_FlipNormals;

/// @brief Field m_SegmentCount, offset: 0xc, size: 0x4, def value: None
 int32_t  m_SegmentCount;

/// @brief Field m_Radius, offset: 0x10, size: 0x4, def value: None
 float_t  m_Radius;

/// @brief Field m_Range, offset: 0x14, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_Range;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
