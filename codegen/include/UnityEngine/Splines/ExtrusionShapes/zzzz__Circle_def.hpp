#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ExtrusionShapes/Circle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Circle)
namespace Unity::Mathematics {
struct float2;
}
namespace UnityEngine::Splines {
class IExtrudeShape;
}
namespace UnityEngine::Splines {
class ISpline;
}
// Forward declare root types
namespace UnityEngine::Splines::ExtrusionShapes {
class Circle;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::ExtrusionShapes::Circle*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::ExtrusionShapes::Circle*, "UnityEngine.Splines.ExtrusionShapes", "Circle");
// Dependencies System.Object
namespace UnityEngine::Splines::ExtrusionShapes {
// Is value type: false
// CS Name: UnityEngine.Splines.ExtrusionShapes.Circle
class CORDL_TYPE Circle : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SideCount, put=set_SideCount)) int32_t  SideCount;

/// @brief Field m_Rads, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Rads, put=__cordl_internal_set_m_Rads)) float_t  m_Rads;

/// @brief Field m_Sides, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Sides, put=__cordl_internal_set_m_Sides)) int32_t  m_Sides;

/// @brief Convert operator to "::UnityEngine::Splines::IExtrudeShape"
constexpr operator  ::UnityEngine::Splines::IExtrudeShape*() noexcept;

/// @brief Method GetPosition, addr 0x18217aa50, size 0x70, virtual true, abstract: false, final true
inline ::Unity::Mathematics::float2 GetPosition(float_t  t, int32_t  index) ;

static inline ::UnityEngine::Splines::ExtrusionShapes::Circle* New_ctor() ;

/// @brief Method Setup, addr 0x18217aac0, size 0x30, virtual true, abstract: false, final true
inline void Setup(::UnityEngine::Splines::ISpline*  path, int32_t  segmentCount) ;

constexpr float_t const& __cordl_internal_get_m_Rads() const;

constexpr float_t& __cordl_internal_get_m_Rads() ;

constexpr int32_t const& __cordl_internal_get_m_Sides() const;

constexpr int32_t& __cordl_internal_get_m_Sides() ;

constexpr void __cordl_internal_set_m_Rads(float_t  value) ;

constexpr void __cordl_internal_set_m_Sides(int32_t  value) ;

/// @brief Method .ctor, addr 0x18217aaf0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_SideCount, addr 0x180303b50, size 0x10, virtual true, abstract: false, final true
inline int32_t get_SideCount() ;

/// @brief Convert to "::UnityEngine::Splines::IExtrudeShape"
constexpr ::UnityEngine::Splines::IExtrudeShape* i___UnityEngine__Splines__IExtrudeShape() noexcept;

/// @brief Method set_SideCount, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void set_SideCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Circle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Circle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Circle(Circle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Circle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Circle(Circle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18782};

/// @brief Field m_Sides, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_Sides;

/// @brief Field m_Rads, offset: 0x14, size: 0x4, def value: None
 float_t  ___m_Rads;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::ExtrusionShapes::Circle, ___m_Sides) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::ExtrusionShapes::Circle, ___m_Rads) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::ExtrusionShapes::Circle) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Splines::ExtrusionShapes
