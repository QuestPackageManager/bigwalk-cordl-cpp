#pragma once
// IWYU pragma private; include "MA/Flora/DebugGlobalKeywords.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
CORDL_MODULE_EXPORT(DebugGlobalKeywords)
// Forward declare root types
namespace MA::Flora {
class DebugGlobalKeywords;
}
// Write type traits
MARK_REF_T(::MA::Flora::DebugGlobalKeywords*);
DEFINE_IL2CPP_CLASS(::MA::Flora::DebugGlobalKeywords*, "MA.Flora", "DebugGlobalKeywords");
// Dependencies System.Object, UnityEngine.Rendering.GlobalKeyword
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.DebugGlobalKeywords
class CORDL_TYPE DebugGlobalKeywords : public ::System::Object {
public:
// Declarations
/// @brief Field DebugDisplay, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DebugDisplay, put=setStaticF_DebugDisplay)) ::UnityEngine::Rendering::GlobalKeyword  DebugDisplay;

/// @brief Method Initialize, addr 0x1814c5b70, size 0x30, virtual false, abstract: false, final false
static inline void Initialize() ;

static inline ::UnityEngine::Rendering::GlobalKeyword getStaticF_DebugDisplay() ;

static inline void setStaticF_DebugDisplay(::UnityEngine::Rendering::GlobalKeyword  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugGlobalKeywords() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugGlobalKeywords", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugGlobalKeywords(DebugGlobalKeywords && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugGlobalKeywords", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugGlobalKeywords(DebugGlobalKeywords const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13258};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::DebugGlobalKeywords) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
