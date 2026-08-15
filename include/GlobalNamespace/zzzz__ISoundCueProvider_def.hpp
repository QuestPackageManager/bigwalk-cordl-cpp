#pragma once
// IWYU pragma private; include "GlobalNamespace/ISoundCueProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISoundCueProvider)
namespace GlobalNamespace {
class SoundCue;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ISoundCueProvider;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ISoundCueProvider*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ISoundCueProvider*, "", "ISoundCueProvider");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: ISoundCueProvider
class CORDL_TYPE ISoundCueProvider {
public:
// Declarations
/// @brief Method GetAllCues, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundCue>>* GetAllCues() ;

/// @brief Method GetCue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SoundCue> GetCue() ;

// Ctor Parameters [CppParam { name: "", ty: "ISoundCueProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISoundCueProvider(ISoundCueProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17483};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
