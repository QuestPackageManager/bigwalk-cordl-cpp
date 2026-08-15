#pragma once
// IWYU pragma private; include "UnityEngine/Plane.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Plane)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct Plane;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Plane);
DEFINE_IL2CPP_CLASS(::UnityEngine::Plane, "UnityEngine", "Plane");
// Dependencies UnityEngine.Vector3
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Plane
struct CORDL_TYPE Plane {
public:
// Declarations
 __declspec(property(get=get_distance)) float_t  distance;

 __declspec(property(get=get_normal)) ::UnityEngine::Vector3  normal;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Plane>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Plane>*() ;

/// @brief Convert operator to "::System::IFormattable"
constexpr operator  ::System::IFormattable*() ;

/// @brief Method Equals, addr 0x1806469f0, size 0xc0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0x180646ab0, size 0x70, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Plane  other) ;

/// @brief Method Equals, addr 0x180646ab0, size 0x70, virtual false, abstract: false, final false
inline bool Equals(::by_ref<::UnityEngine::Plane>  other) ;

/// @brief Method GetDistanceToPoint, addr 0x1814f61f0, size 0x30, virtual false, abstract: false, final false
inline float_t GetDistanceToPoint(::UnityEngine::Vector3  point) ;

/// @brief Method GetHashCode, addr 0x180c4ddc0, size 0x70, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Raycast, addr 0x18046cf40, size 0x190, virtual false, abstract: false, final false
inline bool Raycast(::UnityEngine::Ray  ray, ::by_ref<float_t>  enter) ;

/// @brief Method ToString, addr 0x182248c80, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x180c4de30, size 0x290, virtual true, abstract: false, final true
inline ::StringW ToString(::StringW  format, ::System::IFormatProvider*  formatProvider) ;

/// @brief Method .ctor, addr 0x182248d50, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  inNormal, float_t  d) ;

/// @brief Method .ctor, addr 0x182248ca0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  inNormal, ::UnityEngine::Vector3  inPoint) ;

/// @brief Method get_distance, addr 0x180303b30, size 0x10, virtual false, abstract: false, final false
inline float_t get_distance() ;

/// @brief Method get_normal, addr 0x1802d5330, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_normal() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Plane>"
constexpr ::System::IEquatable_1<::UnityEngine::Plane>* i___System__IEquatable_1___UnityEngine__Plane_() ;

/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* i___System__IFormattable() ;

/// @brief Method op_Equality, addr 0x182248dc0, size 0x70, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Plane  lhs, ::UnityEngine::Plane  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr Plane() ;

// Ctor Parameters [CppParam { name: "m_Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Distance", ty: "float_t", modifiers: "", def_value: None }]
constexpr Plane(::UnityEngine::Vector3  m_Normal, float_t  m_Distance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10468};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field size offset 0xffffffff size 0x4
static constexpr int32_t  size{static_cast<int32_t>(0x10)};

/// @brief Field m_Normal, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Normal;

/// @brief Field m_Distance, offset: 0xc, size: 0x4, def value: None
 float_t  m_Distance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Plane, m_Normal) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Plane, m_Distance) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Plane) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
