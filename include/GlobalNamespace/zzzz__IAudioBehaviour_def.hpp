#pragma once
// IWYU pragma private; include "GlobalNamespace/IAudioBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IAudioBehaviour)
// Forward declare root types
namespace GlobalNamespace {
class IAudioBehaviour;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IAudioBehaviour*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IAudioBehaviour*, "", "IAudioBehaviour");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IAudioBehaviour
class CORDL_TYPE IAudioBehaviour {
public:
// Declarations
 __declspec(property(get=get_Initialized)) bool  Initialized;

/// @brief Method AudioFixedUpdate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AudioFixedUpdate(float_t  deltaTime) ;

/// @brief Method AudioLateUpdate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AudioLateUpdate(float_t  deltaTime) ;

/// @brief Method AudioSlowUpdate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AudioSlowUpdate(float_t  deltaTime) ;

/// @brief Method AudioUpdate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AudioUpdate(float_t  deltaTime) ;

/// @brief Method get_Initialized, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_Initialized() ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioBehaviour(IAudioBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17496};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
