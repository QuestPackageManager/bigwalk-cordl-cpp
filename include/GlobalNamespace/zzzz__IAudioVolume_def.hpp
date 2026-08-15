#pragma once
// IWYU pragma private; include "GlobalNamespace/IAudioVolume.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IAudioVolume)
// Forward declare root types
namespace GlobalNamespace {
class IAudioVolume;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IAudioVolume*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IAudioVolume*, "", "IAudioVolume");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IAudioVolume
class CORDL_TYPE IAudioVolume {
public:
// Declarations
 __declspec(property(get=get_Value)) float_t  Value;

/// @brief Method get_Value, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioVolume", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioVolume(IAudioVolume const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17497};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
