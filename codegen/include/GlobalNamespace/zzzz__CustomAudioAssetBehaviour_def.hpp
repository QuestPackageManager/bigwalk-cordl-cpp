#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomAudioAssetBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CustomAudioAssetBehaviour)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
class Prop;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomAudioAssetBehaviour;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomAudioAssetBehaviour*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomAudioAssetBehaviour*, "", "CustomAudioAssetBehaviour");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomAudioAssetBehaviour
class CORDL_TYPE CustomAudioAssetBehaviour : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Excute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Excute(::GlobalNamespace::Prop*  prop, ::GlobalNamespace::PropHome*  propHome) ;

/// @brief Method GetAsset, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::AudioAsset> GetAsset(::GlobalNamespace::Prop*  prop, ::GlobalNamespace::PropHome*  propHome) ;

static inline ::GlobalNamespace::CustomAudioAssetBehaviour* New_ctor() ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomAudioAssetBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomAudioAssetBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomAudioAssetBehaviour(CustomAudioAssetBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomAudioAssetBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomAudioAssetBehaviour(CustomAudioAssetBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5569};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CustomAudioAssetBehaviour) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
