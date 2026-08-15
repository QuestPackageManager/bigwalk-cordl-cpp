#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ControlContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Audio/zzzz__Handle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ControlContext)
namespace UnityEngine::Audio {
struct ControlHeader;
}
namespace UnityEngine::Audio {
struct GeneratorInstance_Configuration;
}
namespace UnityEngine::Audio {
struct GeneratorInstance;
}
namespace UnityEngine::Audio {
struct ProcessorInstance;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct ControlContext;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::ControlContext);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::ControlContext, "UnityEngine.Audio", "ControlContext");
// Dependencies Unity.Audio.Handle
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.ControlContext
struct CORDL_TYPE ControlContext {
public:
// Declarations
/// @brief Method CleanupHeader, addr 0x18223b930, size 0x40, virtual false, abstract: false, final false
static inline void CleanupHeader(::by_ref<::UnityEngine::Audio::ControlHeader>  header) ;

/// @brief Method Exists, addr 0x18223b970, size 0x80, virtual false, abstract: false, final false
inline bool Exists(::UnityEngine::Audio::ProcessorInstance  processorInstance) ;

/// @brief Method GetConfiguration, addr 0x18223b9f0, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::Audio::GeneratorInstance_Configuration GetConfiguration(::UnityEngine::Audio::GeneratorInstance  generatorInstance) ;

/// @brief Method .ctor, addr 0x18223bac0, size 0x120, virtual false, abstract: false, final false
inline void _ctor(void*  headerThatShouldBeOfResourceType) ;

// Ctor Parameters []
// @brief default ctor
constexpr ControlContext() ;

// Ctor Parameters [CppParam { name: "m_Header", ty: "::UnityEngine::Audio::ControlHeader*", modifiers: "", def_value: None }, CppParam { name: "m_Handle", ty: "::Unity::Audio::Handle", modifiers: "", def_value: None }]
constexpr ControlContext(::UnityEngine::Audio::ControlHeader*  m_Header, ::Unity::Audio::Handle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20480};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Header, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Audio::ControlHeader*  m_Header;

/// @brief Field m_Handle, offset: 0x8, size: 0x10, def value: None
 ::Unity::Audio::Handle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::ControlContext, m_Header) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Audio::ControlContext, m_Handle) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::ControlContext) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Audio
