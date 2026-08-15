#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamManager)
namespace Steamworks {
class SteamAPIWarningMessageHook_t;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SteamManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamManager*, "", "SteamManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamManager
class CORDL_TYPE SteamManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_SteamAPIWarningMessageHook, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SteamAPIWarningMessageHook, put=__cordl_internal_set_m_SteamAPIWarningMessageHook)) ::Steamworks::SteamAPIWarningMessageHook_t*  m_SteamAPIWarningMessageHook;

/// @brief Field m_bInitialized, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_bInitialized, put=__cordl_internal_set_m_bInitialized)) bool  m_bInitialized;

/// @brief Field s_EverInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_EverInitialized, put=setStaticF_s_EverInitialized)) bool  s_EverInitialized;

/// @brief Field s_instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_instance, put=setStaticF_s_instance)) ::UnityW<::GlobalNamespace::SteamManager>  s_instance;

/// @brief Method Awake, addr 0x18039e330, size 0x1e0, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InitOnPlayMode, addr 0x18039e510, size 0x40, virtual false, abstract: false, final false
static inline void InitOnPlayMode() ;

static inline ::GlobalNamespace::SteamManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18039e550, size 0x80, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x18039e5d0, size 0xb0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SteamAPIDebugTextHook, addr 0x18039e680, size 0x10, virtual false, abstract: false, final false
static inline void SteamAPIDebugTextHook(int32_t  nSeverity, ::System::Text::StringBuilder*  pchDebugText) ;

/// @brief Method Update, addr 0x18039e690, size 0x10, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Steamworks::SteamAPIWarningMessageHook_t* const& __cordl_internal_get_m_SteamAPIWarningMessageHook() const;

constexpr ::Steamworks::SteamAPIWarningMessageHook_t*& __cordl_internal_get_m_SteamAPIWarningMessageHook() ;

constexpr bool const& __cordl_internal_get_m_bInitialized() const;

constexpr bool& __cordl_internal_get_m_bInitialized() ;

constexpr void __cordl_internal_set_m_SteamAPIWarningMessageHook(::Steamworks::SteamAPIWarningMessageHook_t*  value) ;

constexpr void __cordl_internal_set_m_bInitialized(bool  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_s_EverInitialized() ;

static inline ::UnityW<::GlobalNamespace::SteamManager> getStaticF_s_instance() ;

/// @brief Method get_Initialized, addr 0x18039e6a0, size 0x90, virtual false, abstract: false, final false
static inline bool get_Initialized() ;

/// @brief Method get_Instance, addr 0x18039e730, size 0x80, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SteamManager> get_Instance() ;

static inline void setStaticF_s_EverInitialized(bool  value) ;

static inline void setStaticF_s_instance(::UnityW<::GlobalNamespace::SteamManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamManager(SteamManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamManager(SteamManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5615};

/// @brief Field m_bInitialized, offset: 0x20, size: 0x1, def value: None
 bool  ___m_bInitialized;

/// @brief Field m_SteamAPIWarningMessageHook, offset: 0x28, size: 0x8, def value: None
 ::Steamworks::SteamAPIWarningMessageHook_t*  ___m_SteamAPIWarningMessageHook;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamManager, ___m_bInitialized) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamManager, ___m_SteamAPIWarningMessageHook) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamManager) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
