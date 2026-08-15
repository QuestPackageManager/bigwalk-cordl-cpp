#pragma once
// IWYU pragma private; include "AmplifyImpostors/MaterialEx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MaterialEx)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace AmplifyImpostors {
class MaterialEx;
}
// Write type traits
MARK_REF_T(::AmplifyImpostors::MaterialEx*);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::MaterialEx*, "AmplifyImpostors", "MaterialEx");
// Dependencies System.Object
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.MaterialEx
class CORDL_TYPE MaterialEx : public ::System::Object {
public:
// Declarations
/// @brief Method EnsureKeywordState, addr 0x1802d9b30, size 0x70, virtual false, abstract: false, final false
static inline void EnsureKeywordState(::UnityEngine::Material*  material, ::StringW  keyword, bool  state) ;

/// @brief Method EnsureTextureKeywordState, addr 0x1802d9ba0, size 0x1e0, virtual false, abstract: false, final false
static inline void EnsureTextureKeywordState(::UnityEngine::Material*  material, ::StringW  property, ::StringW  keyword) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MaterialEx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MaterialEx", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MaterialEx(MaterialEx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MaterialEx", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MaterialEx(MaterialEx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20959};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::AmplifyImpostors::MaterialEx) == 0x10, "Size mismatch!");

} // namespace end def AmplifyImpostors
