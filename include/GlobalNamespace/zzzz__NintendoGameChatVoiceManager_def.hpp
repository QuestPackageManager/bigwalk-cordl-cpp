#pragma once
// IWYU pragma private; include "GlobalNamespace/NintendoGameChatVoiceManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NintendoGameChatVoiceManager)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NintendoGameChatVoiceManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NintendoGameChatVoiceManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NintendoGameChatVoiceManager*, "", "NintendoGameChatVoiceManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: NintendoGameChatVoiceManager
class CORDL_TYPE NintendoGameChatVoiceManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnGameChatStatusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnGameChatStatusChanged, put=setStaticF_OnGameChatStatusChanged)) ::System::Action_1<bool>*  OnGameChatStatusChanged;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::NintendoGameChatVoiceManager>  _instance;

/// @brief Field _lastChatStatus, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__lastChatStatus, put=__cordl_internal_set__lastChatStatus)) bool  _lastChatStatus;

static inline ::GlobalNamespace::NintendoGameChatVoiceManager* New_ctor() ;

constexpr bool const& __cordl_internal_get__lastChatStatus() const;

constexpr bool& __cordl_internal_get__lastChatStatus() ;

constexpr void __cordl_internal_set__lastChatStatus(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnGameChatStatusChanged, addr 0x181acbc80, size 0xb0, virtual false, abstract: false, final false
static inline void add_OnGameChatStatusChanged(::System::Action_1<bool>*  value) ;

static inline ::System::Action_1<bool>* getStaticF_OnGameChatStatusChanged() ;

static inline ::UnityW<::GlobalNamespace::NintendoGameChatVoiceManager> getStaticF__instance() ;

/// @brief Method get_GameChatStatus, addr 0x181acbd30, size 0x30, virtual false, abstract: false, final false
static inline bool get_GameChatStatus() ;

/// @brief Method remove_OnGameChatStatusChanged, addr 0x181acbd60, size 0xb0, virtual false, abstract: false, final false
static inline void remove_OnGameChatStatusChanged(::System::Action_1<bool>*  value) ;

static inline void setStaticF_OnGameChatStatusChanged(::System::Action_1<bool>*  value) ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::NintendoGameChatVoiceManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NintendoGameChatVoiceManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NintendoGameChatVoiceManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NintendoGameChatVoiceManager(NintendoGameChatVoiceManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NintendoGameChatVoiceManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NintendoGameChatVoiceManager(NintendoGameChatVoiceManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21044};

/// @brief Field _lastChatStatus, offset: 0x20, size: 0x1, def value: None
 bool  ____lastChatStatus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NintendoGameChatVoiceManager, ____lastChatStatus) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NintendoGameChatVoiceManager) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
