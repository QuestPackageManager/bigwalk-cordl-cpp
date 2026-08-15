#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineKnotIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineKnotIndex)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Splines {
struct SplineKnotIndex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::SplineKnotIndex);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineKnotIndex, "UnityEngine.Splines", "SplineKnotIndex");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineKnotIndex
struct CORDL_TYPE SplineKnotIndex {
public:
// Declarations
/// @brief Field Invalid, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::UnityEngine::Splines::SplineKnotIndex  Invalid;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Splines::SplineKnotIndex>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Splines::SplineKnotIndex>*() ;

/// @brief Method Equals, addr 0x18217bc80, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x181f2ddb0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Splines::SplineKnotIndex  otherIndex) ;

/// @brief Method GetHashCode, addr 0x180e0c2e0, size 0x250, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsValid, addr 0x18217bcf0, size 0x20, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method ToString, addr 0x18217bd10, size 0x70, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1804a47e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  spline, int32_t  knot) ;

static inline ::UnityEngine::Splines::SplineKnotIndex getStaticF_Invalid() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Splines::SplineKnotIndex>"
constexpr ::System::IEquatable_1<::UnityEngine::Splines::SplineKnotIndex>* i___System__IEquatable_1___UnityEngine__Splines__SplineKnotIndex_() ;

/// @brief Method op_Equality, addr 0x18147cc20, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Splines::SplineKnotIndex  indexA, ::UnityEngine::Splines::SplineKnotIndex  indexB) ;

/// @brief Method op_Inequality, addr 0x18147cc40, size 0x20, virtual false, abstract: false, final false
static inline bool op_Inequality(::UnityEngine::Splines::SplineKnotIndex  indexA, ::UnityEngine::Splines::SplineKnotIndex  indexB) ;

static inline void setStaticF_Invalid(::UnityEngine::Splines::SplineKnotIndex  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineKnotIndex() ;

// Ctor Parameters [CppParam { name: "Spline", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Knot", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SplineKnotIndex(int32_t  Spline, int32_t  Knot) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18743};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Spline, offset: 0x0, size: 0x4, def value: None
 int32_t  Spline;

/// @brief Field Knot, offset: 0x4, size: 0x4, def value: None
 int32_t  Knot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineKnotIndex, Spline) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineKnotIndex, Knot) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineKnotIndex) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::Splines
