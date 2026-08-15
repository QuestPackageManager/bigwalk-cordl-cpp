#pragma once
// IWYU pragma private; include "UnityEngine/Splines/IExtrudeShape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IExtrudeShape)
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Splines {
class ISpline;
}
// Forward declare root types
namespace UnityEngine::Splines {
class IExtrudeShape;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::IExtrudeShape*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::IExtrudeShape*, "UnityEngine.Splines", "IExtrudeShape");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.IExtrudeShape
class CORDL_TYPE IExtrudeShape {
public:
// Declarations
 __declspec(property(get=get_SideCount)) int32_t  SideCount;

/// @brief Method GetPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Unity::Mathematics::float2 GetPosition(float_t  t, int32_t  index) ;

/// @brief Method SetSegment, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void SetSegment(int32_t  index, float_t  t, ::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  tangent, ::Unity::Mathematics::float3  up) ;

/// @brief Method Setup, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Setup(::UnityEngine::Splines::ISpline*  path, int32_t  segmentCount) ;

/// @brief Method get_SideCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_SideCount() ;

// Ctor Parameters [CppParam { name: "", ty: "IExtrudeShape", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IExtrudeShape(IExtrudeShape const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18688};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
