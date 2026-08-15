#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Ambience/Hdrp/PostProcessingSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PostProcessingSetup)
// Forward declare root types
namespace Rowlan::Genesis::Ambience::Hdrp {
class PostProcessingSetup;
}
// Write type traits
MARK_REF_T(::Rowlan::Genesis::Ambience::Hdrp::PostProcessingSetup*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Ambience::Hdrp::PostProcessingSetup*, "Rowlan.Genesis.Ambience.Hdrp", "PostProcessingSetup");
// Dependencies System.Object
namespace Rowlan::Genesis::Ambience::Hdrp {
// Is value type: false
// CS Name: Rowlan.Genesis.Ambience.Hdrp.PostProcessingSetup
class CORDL_TYPE PostProcessingSetup : public ::System::Object {
public:
// Declarations
static inline ::Rowlan::Genesis::Ambience::Hdrp::PostProcessingSetup* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessingSetup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessingSetup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessingSetup(PostProcessingSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessingSetup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessingSetup(PostProcessingSetup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20439};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rowlan::Genesis::Ambience::Hdrp::PostProcessingSetup) == 0x10, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Ambience::Hdrp
