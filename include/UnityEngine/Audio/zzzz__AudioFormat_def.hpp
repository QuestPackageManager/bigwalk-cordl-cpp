#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AudioFormat)
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioFormat);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::AudioFormat, "UnityEngine.Audio", "AudioFormat");
// Dependencies UnityEngine.AudioConfiguration
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.AudioFormat
struct CORDL_TYPE AudioFormat {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AudioFormat() ;

// Ctor Parameters [CppParam { name: "m_Config", ty: "::UnityEngine::AudioConfiguration", modifiers: "", def_value: None }]
constexpr AudioFormat(::UnityEngine::AudioConfiguration  m_Config) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20478};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_Config, offset: 0x0, size: 0x14, def value: None
 ::UnityEngine::AudioConfiguration  m_Config;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::AudioFormat, m_Config) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Audio::AudioFormat) == 0x14, "Size mismatch!");

} // namespace end def UnityEngine::Audio
