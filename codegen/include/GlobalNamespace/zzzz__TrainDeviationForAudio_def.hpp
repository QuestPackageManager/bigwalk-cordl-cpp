#pragma once
// IWYU pragma private; include "GlobalNamespace/TrainDeviationForAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TrainDeviationForAudio)
namespace GlobalNamespace {
class AudioRTPCXProvider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TrainDeviationForAudio;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TrainDeviationForAudio*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrainDeviationForAudio*, "", "TrainDeviationForAudio");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TrainDeviationForAudio
class CORDL_TYPE TrainDeviationForAudio : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field TrainBack, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrainBack, put=__cordl_internal_set_TrainBack)) ::UnityW<::UnityEngine::Transform>  TrainBack;

/// @brief Field TrainFront, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrainFront, put=__cordl_internal_set_TrainFront)) ::UnityW<::UnityEngine::Transform>  TrainFront;

/// @brief Field XProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_XProvider, put=__cordl_internal_set_XProvider)) ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  XProvider;

static inline ::GlobalNamespace::TrainDeviationForAudio* New_ctor() ;

/// @brief Method Start, addr 0x1803e18a0, size 0x30, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x1803e18d0, size 0x160, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_TrainBack() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_TrainBack() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_TrainFront() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_TrainFront() ;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& __cordl_internal_get_XProvider() const;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& __cordl_internal_get_XProvider() ;

constexpr void __cordl_internal_set_TrainBack(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_TrainFront(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_XProvider(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrainDeviationForAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrainDeviationForAudio", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrainDeviationForAudio(TrainDeviationForAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrainDeviationForAudio", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrainDeviationForAudio(TrainDeviationForAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4876};

/// @brief Field XProvider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  ___XProvider;

/// @brief Field TrainFront, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___TrainFront;

/// @brief Field TrainBack, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___TrainBack;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrainDeviationForAudio, ___XProvider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainDeviationForAudio, ___TrainFront) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TrainDeviationForAudio, ___TrainBack) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrainDeviationForAudio) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
