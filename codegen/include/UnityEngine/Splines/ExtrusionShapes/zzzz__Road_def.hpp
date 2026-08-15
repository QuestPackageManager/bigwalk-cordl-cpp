#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ExtrusionShapes/Road.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Road)
namespace Unity::Mathematics {
struct float2;
}
namespace UnityEngine::Splines {
class IExtrudeShape;
}
// Forward declare root types
namespace UnityEngine::Splines::ExtrusionShapes {
class Road;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::ExtrusionShapes::Road*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::ExtrusionShapes::Road*, "UnityEngine.Splines.ExtrusionShapes", "Road");
// Dependencies System.Object, Unity.Mathematics.float2
namespace UnityEngine::Splines::ExtrusionShapes {
// Is value type: false
// CS Name: UnityEngine.Splines.ExtrusionShapes.Road
class CORDL_TYPE Road : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SideCount)) int32_t  SideCount;

/// @brief Field k_Sides, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Sides, put=setStaticF_k_Sides)) ::ArrayW<::Unity::Mathematics::float2>  k_Sides;

/// @brief Convert operator to "::UnityEngine::Splines::IExtrudeShape"
constexpr operator  ::UnityEngine::Splines::IExtrudeShape*() noexcept;

/// @brief Method GetPosition, addr 0x18217b260, size 0x60, virtual true, abstract: false, final true
inline ::Unity::Mathematics::float2 GetPosition(float_t  t, int32_t  index) ;

static inline ::UnityEngine::Splines::ExtrusionShapes::Road* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::Unity::Mathematics::float2> getStaticF_k_Sides() ;

/// @brief Method get_SideCount, addr 0x1802ee400, size 0x10, virtual true, abstract: false, final true
inline int32_t get_SideCount() ;

/// @brief Convert to "::UnityEngine::Splines::IExtrudeShape"
constexpr ::UnityEngine::Splines::IExtrudeShape* i___UnityEngine__Splines__IExtrudeShape() noexcept;

static inline void setStaticF_k_Sides(::ArrayW<::Unity::Mathematics::float2>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Road() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Road", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Road(Road && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Road", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Road(Road const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18784};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::ExtrusionShapes::Road) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Splines::ExtrusionShapes
