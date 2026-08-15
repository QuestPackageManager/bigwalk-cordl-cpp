#pragma once
// IWYU pragma private; include "UnityEngine/Splines/IHasEmptyCurves.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IHasEmptyCurves)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace UnityEngine::Splines {
class IHasEmptyCurves;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::IHasEmptyCurves*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::IHasEmptyCurves*, "UnityEngine.Splines", "IHasEmptyCurves");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.IHasEmptyCurves
class CORDL_TYPE IHasEmptyCurves {
public:
// Declarations
 __declspec(property(get=get_EmptyCurves)) ::System::Collections::Generic::IReadOnlyList_1<int32_t>*  EmptyCurves;

/// @brief Method get_EmptyCurves, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* get_EmptyCurves() ;

// Ctor Parameters [CppParam { name: "", ty: "IHasEmptyCurves", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IHasEmptyCurves(IHasEmptyCurves const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18690};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
