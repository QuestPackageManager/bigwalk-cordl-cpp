#pragma once
// IWYU pragma private; include "UnityEngine/Audio/IAudioGenerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAudioGenerator)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::Audio {
struct AudioFormat;
}
namespace UnityEngine::Audio {
struct ControlContext;
}
namespace UnityEngine::Audio {
class GeneratorInstance_ICapabilities;
}
namespace UnityEngine::Audio {
struct GeneratorInstance;
}
namespace UnityEngine::Audio {
struct ProcessorInstance_CreationParameters;
}
// Forward declare root types
namespace UnityEngine::Audio {
class IAudioGenerator;
}
// Write type traits
MARK_REF_T(::UnityEngine::Audio::IAudioGenerator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Audio::IAudioGenerator*, "UnityEngine.Audio", "IAudioGenerator");
// Dependencies 
namespace UnityEngine::Audio {
// Is value type: false
// CS Name: UnityEngine.Audio.IAudioGenerator
class CORDL_TYPE IAudioGenerator {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
constexpr operator  ::UnityEngine::Audio::GeneratorInstance_ICapabilities*() noexcept;

/// @brief Method CreateInstance, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Audio::GeneratorInstance CreateInstance(::UnityEngine::Audio::ControlContext  context, ::System::Nullable_1<::UnityEngine::Audio::AudioFormat>  nestedFormat, ::UnityEngine::Audio::ProcessorInstance_CreationParameters  creationParameters) ;

/// @brief Convert to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
constexpr ::UnityEngine::Audio::GeneratorInstance_ICapabilities* i___UnityEngine__Audio__GeneratorInstance_ICapabilities() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAudioGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioGenerator(IAudioGenerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20491};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Audio
