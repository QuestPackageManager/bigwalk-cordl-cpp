#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioCullingJobScheduler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AudioCullingJobScheduler)
namespace GlobalNamespace {
class CustomCullingGroup;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioCullingJobScheduler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioCullingJobScheduler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioCullingJobScheduler*, "", "AudioCullingJobScheduler");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioCullingJobScheduler
class CORDL_TYPE AudioCullingJobScheduler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cullingGroups, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cullingGroups, put=__cordl_internal_set__cullingGroups)) ::System::Collections::Generic::List_1<::GlobalNamespace::CustomCullingGroup*>*  _cullingGroups;

static inline ::GlobalNamespace::AudioCullingJobScheduler* New_ctor() ;

/// @brief Method RegisterListenerController, addr 0x180470eb0, size 0xa0, virtual false, abstract: false, final false
inline void RegisterListenerController(::GlobalNamespace::CustomCullingGroup*  cullingGroup) ;

/// @brief Method UnregisterListenerController, addr 0x180470f50, size 0x30, virtual false, abstract: false, final false
inline void UnregisterListenerController(::GlobalNamespace::CustomCullingGroup*  cullingGroup) ;

/// @brief Method Update, addr 0x180470f80, size 0x90, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CustomCullingGroup*>* const& __cordl_internal_get__cullingGroups() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CustomCullingGroup*>*& __cordl_internal_get__cullingGroups() ;

constexpr void __cordl_internal_set__cullingGroups(::System::Collections::Generic::List_1<::GlobalNamespace::CustomCullingGroup*>*  value) ;

/// @brief Method .ctor, addr 0x180471010, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioCullingJobScheduler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioCullingJobScheduler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioCullingJobScheduler(AudioCullingJobScheduler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioCullingJobScheduler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioCullingJobScheduler(AudioCullingJobScheduler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17491};

/// @brief Field _cullingGroups, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CustomCullingGroup*>*  ____cullingGroups;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioCullingJobScheduler, ____cullingGroups) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioCullingJobScheduler) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
