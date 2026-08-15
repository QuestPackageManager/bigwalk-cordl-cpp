#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ScriptableGeneratorBindings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ScriptableGeneratorBindings)
namespace UnityEngine::Audio {
struct ControlHeader;
}
namespace UnityEngine::Audio {
struct GeneratorInstance;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Audio {
class ScriptableGeneratorBindings;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::ScriptableGeneratorBindings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ScriptableGeneratorBindings*, "UnityEngine.Audio", "ScriptableGeneratorBindings");
// Dependencies System.Object
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.ScriptableGeneratorBindings
class CORDL_TYPE ScriptableGeneratorBindings : public ::System::Object {
public:
// Declarations
/// @brief Method InstantiateGeneratorFromObject, addr 0x18223c2c0, size 0x4f0, virtual false, abstract: false, final false
static inline void InstantiateGeneratorFromObject(::UnityEngine::Object*  generatorObjectDefinition, ::by_ref<::UnityEngine::Audio::ControlHeader>  control, ::by_ref<::UnityEngine::Audio::GeneratorInstance>  runtimeHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScriptableGeneratorBindings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScriptableGeneratorBindings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableGeneratorBindings(ScriptableGeneratorBindings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableGeneratorBindings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableGeneratorBindings(ScriptableGeneratorBindings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20492};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Audio::ScriptableGeneratorBindings) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Audio
