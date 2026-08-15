#pragma once
// IWYU pragma private; include "Rewired/Utils/Libraries/TinyJson/JsonTools.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonTools)
// Forward declare root types
namespace Rewired::Utils::Libraries::TinyJson {
class JsonTools;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::Libraries::TinyJson::JsonTools*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Libraries::TinyJson::JsonTools*, "Rewired.Utils.Libraries.TinyJson", "JsonTools");
// Dependencies System.Object
namespace Rewired::Utils::Libraries::TinyJson {
// Is value type: false
// CS Name: Rewired.Utils.Libraries.TinyJson.JsonTools
class CORDL_TYPE JsonTools : public ::System::Object {
public:
// Declarations
/// @brief Method Clone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Clone(T  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonTools() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonTools", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonTools(JsonTools && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonTools", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonTools(JsonTools const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2958};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::Libraries::TinyJson::JsonTools) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils::Libraries::TinyJson
