#pragma once
// IWYU pragma private; include "GlobalNamespace/TrainWhooshTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrainWhooshTrigger)
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class TrainAudio;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class TrainWhooshTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TrainWhooshTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrainWhooshTrigger*, "", "TrainWhooshTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TrainWhooshTrigger
class CORDL_TYPE TrainWhooshTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field TrainAudio, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrainAudio, put=__cordl_internal_set_TrainAudio)) ::UnityW<::GlobalNamespace::TrainAudio>  TrainAudio;

/// @brief Method GetX, addr 0x1803e1a30, size 0x40, virtual false, abstract: false, final false
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

static inline ::GlobalNamespace::TrainWhooshTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x1803e1a70, size 0x160, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::GlobalNamespace::TrainAudio> const& __cordl_internal_get_TrainAudio() const;

constexpr ::UnityW<::GlobalNamespace::TrainAudio>& __cordl_internal_get_TrainAudio() ;

constexpr void __cordl_internal_set_TrainAudio(::UnityW<::GlobalNamespace::TrainAudio>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrainWhooshTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrainWhooshTrigger", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrainWhooshTrigger(TrainWhooshTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrainWhooshTrigger", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrainWhooshTrigger(TrainWhooshTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4877};

/// @brief Field TrainAudio, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TrainAudio>  ___TrainAudio;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrainWhooshTrigger, ___TrainAudio) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrainWhooshTrigger) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
