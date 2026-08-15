#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ISplineContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISplineContainer)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine::Splines {
class KnotLinkCollection;
}
namespace UnityEngine::Splines {
class Spline;
}
// Forward declare root types
namespace UnityEngine::Splines {
class ISplineContainer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::ISplineContainer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::ISplineContainer*, "UnityEngine.Splines", "ISplineContainer");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.ISplineContainer
class CORDL_TYPE ISplineContainer {
public:
// Declarations
 __declspec(property(get=get_KnotLinkCollection)) ::UnityEngine::Splines::KnotLinkCollection*  KnotLinkCollection;

 __declspec(property(get=get_Splines, put=set_Splines)) ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*  Splines;

/// @brief Method get_KnotLinkCollection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Splines::KnotLinkCollection* get_KnotLinkCollection() ;

/// @brief Method get_Splines, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>* get_Splines() ;

/// @brief Method set_Splines, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_Splines(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::Spline*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ISplineContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISplineContainer(ISplineContainer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18692};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
