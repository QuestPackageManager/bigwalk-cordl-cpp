#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ISplineProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISplineProvider)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Splines {
class Spline;
}
// Forward declare root types
namespace UnityEngine::Splines {
class ISplineProvider;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::ISplineProvider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::ISplineProvider*, "UnityEngine.Splines", "ISplineProvider");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.ISplineProvider
class CORDL_TYPE ISplineProvider {
public:
// Declarations
 __declspec(property(get=get_Splines)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::Spline*>*  Splines;

/// @brief Method get_Splines, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::Spline*>* get_Splines() ;

// Ctor Parameters [CppParam { name: "", ty: "ISplineProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISplineProvider(ISplineProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18693};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
