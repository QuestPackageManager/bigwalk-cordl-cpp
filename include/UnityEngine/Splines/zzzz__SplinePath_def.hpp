#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplinePath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Splines/zzzz__SplinePath_1_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineSlice_1_def.hpp"
CORDL_MODULE_EXPORT(SplinePath)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Splines {
template<typename T>
struct SplineSlice_1;
}
namespace UnityEngine::Splines {
class Spline;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplinePath;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplinePath*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplinePath*, "UnityEngine.Splines", "SplinePath");
// Dependencies UnityEngine.Splines.SplinePath`1<T>, UnityEngine.Splines.SplineSlice`1<T>
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplinePath
class CORDL_TYPE SplinePath : public ::UnityEngine::Splines::SplinePath_1<::UnityEngine::Splines::SplineSlice_1<::UnityEngine::Splines::Spline*>> {
public:
// Declarations
static inline ::UnityEngine::Splines::SplinePath* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineSlice_1<::UnityEngine::Splines::Spline*>>*  slices) ;

/// @brief Method .ctor, addr 0x18217c9f0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineSlice_1<::UnityEngine::Splines::Spline*>>*  slices) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplinePath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplinePath", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplinePath(SplinePath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplinePath", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplinePath(SplinePath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18754};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Splines::SplinePath) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Splines
