#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineComponent)
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Splines {
struct SplineComponent_AlignAxis;
}
// Forward declare root types
namespace UnityEngine::Splines {
struct SplineComponent_AlignAxis;
}
namespace UnityEngine::Splines {
class SplineComponent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::SplineComponent_AlignAxis);
MARK_REF_T(::UnityEngine::Splines::SplineComponent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineComponent_AlignAxis, "UnityEngine.Splines", "SplineComponent/AlignAxis");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineComponent*, "UnityEngine.Splines", "SplineComponent");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineComponent/AlignAxis
struct CORDL_TYPE SplineComponent_AlignAxis {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SplineComponent_AlignAxis_Unwrapped
enum struct __SplineComponent_AlignAxis_Unwrapped : int32_t {
__E_XAxis = static_cast<int32_t>(0x0),
__E_YAxis = static_cast<int32_t>(0x1),
__E_ZAxis = static_cast<int32_t>(0x2),
__E_NegativeXAxis = static_cast<int32_t>(0x3),
__E_NegativeYAxis = static_cast<int32_t>(0x4),
__E_NegativeZAxis = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SplineComponent_AlignAxis_Unwrapped () const noexcept {
return static_cast<__SplineComponent_AlignAxis_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SplineComponent_AlignAxis() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplineComponent_AlignAxis(int32_t  value__) noexcept;

/// @brief Field NegativeXAxis value: I32(3)
static ::UnityEngine::Splines::SplineComponent_AlignAxis const NegativeXAxis;

/// @brief Field NegativeYAxis value: I32(4)
static ::UnityEngine::Splines::SplineComponent_AlignAxis const NegativeYAxis;

/// @brief Field NegativeZAxis value: I32(5)
static ::UnityEngine::Splines::SplineComponent_AlignAxis const NegativeZAxis;

/// @brief Field XAxis value: I32(0)
static ::UnityEngine::Splines::SplineComponent_AlignAxis const XAxis;

/// @brief Field YAxis value: I32(1)
static ::UnityEngine::Splines::SplineComponent_AlignAxis const YAxis;

/// @brief Field ZAxis value: I32(2)
static ::UnityEngine::Splines::SplineComponent_AlignAxis const ZAxis;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18713};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineComponent_AlignAxis, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineComponent_AlignAxis) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies Unity.Mathematics.float3, UnityEngine.MonoBehaviour
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplineComponent
class CORDL_TYPE SplineComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AlignAxis = ::UnityEngine::Splines::SplineComponent_AlignAxis;

/// @brief Field m_AlignAxisToVector, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AlignAxisToVector, put=__cordl_internal_set_m_AlignAxisToVector)) ::ArrayW<::Unity::Mathematics::float3>  m_AlignAxisToVector;

/// @brief Method GetAxis, addr 0x18216a6d0, size 0x30, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 GetAxis(::UnityEngine::Splines::SplineComponent_AlignAxis  axis) ;

static inline ::UnityEngine::Splines::SplineComponent* New_ctor() ;

constexpr ::ArrayW<::Unity::Mathematics::float3> const& __cordl_internal_get_m_AlignAxisToVector() const;

constexpr ::ArrayW<::Unity::Mathematics::float3>& __cordl_internal_get_m_AlignAxisToVector() ;

constexpr void __cordl_internal_set_m_AlignAxisToVector(::ArrayW<::Unity::Mathematics::float3>  value) ;

/// @brief Method .ctor, addr 0x18216a700, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplineComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplineComponent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplineComponent(SplineComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplineComponent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplineComponent(SplineComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18714};

/// @brief Field m_AlignAxisToVector, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Unity::Mathematics::float3>  ___m_AlignAxisToVector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineComponent, ___m_AlignAxisToVector) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineComponent) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Splines
