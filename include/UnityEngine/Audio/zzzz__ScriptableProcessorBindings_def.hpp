#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ScriptableProcessorBindings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScriptableProcessorBindings)
namespace Unity::Audio {
struct Handle;
}
namespace UnityEngine::Audio {
struct ControlHeader;
}
// Forward declare root types
namespace UnityEngine::Audio {
class ScriptableProcessorBindings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::ScriptableProcessorBindings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ScriptableProcessorBindings*, "UnityEngine.Audio", "ScriptableProcessorBindings");
// Dependencies System.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.ScriptableProcessorBindings
class CORDL_TYPE ScriptableProcessorBindings : public ::System::Object {
public:
// Declarations
/// @brief Method CheckProcessorExists, addr 0x18223c7e0, size 0x340, virtual false, abstract: false, final false
static inline bool CheckProcessorExists(::Unity::Audio::Handle  handle, ::UnityEngine::Audio::ControlHeader*  control) ;

/// @brief Method CheckProcessorExistsInternal, addr 0x18223c7c0, size 0x20, virtual false, abstract: false, final false
static inline bool CheckProcessorExistsInternal(::Unity::Audio::Handle  handle, void*  control) ;

/// @brief Method CheckProcessorExistsInternal_Injected, addr 0x18223c7b0, size 0x10, virtual false, abstract: false, final false
static inline bool CheckProcessorExistsInternal_Injected(::by_ref<::Unity::Audio::Handle>  handle, void*  control) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableProcessorBindings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableProcessorBindings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableProcessorBindings(ScriptableProcessorBindings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableProcessorBindings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableProcessorBindings(ScriptableProcessorBindings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20496};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::ScriptableProcessorBindings) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Audio
