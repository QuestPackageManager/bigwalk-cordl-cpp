#pragma once
// IWYU pragma private; include "UnityEngine/Splines/ISplineModificationHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISplineModificationHandler)
namespace UnityEngine::Splines {
struct SplineModificationData;
}
// Forward declare root types
namespace UnityEngine::Splines {
class ISplineModificationHandler;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::ISplineModificationHandler*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::ISplineModificationHandler*, "UnityEngine.Splines", "ISplineModificationHandler");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.ISplineModificationHandler
class CORDL_TYPE ISplineModificationHandler {
public:
// Declarations
/// @brief Method OnSplineModified, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSplineModified(::UnityEngine::Splines::SplineModificationData  info) ;

// Ctor Parameters [CppParam { name: "", ty: "ISplineModificationHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISplineModificationHandler(ISplineModificationHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18720};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
