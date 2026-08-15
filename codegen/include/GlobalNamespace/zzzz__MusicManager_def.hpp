#pragma once
// IWYU pragma private; include "GlobalNamespace/MusicManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MusicManager)
namespace GlobalNamespace {
class IAudioBehaviour;
}
namespace GlobalNamespace {
class IAudioGUI;
}
namespace GlobalNamespace {
class MusicPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MusicManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MusicManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MusicManager*, "", "MusicManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MusicManager
class CORDL_TYPE MusicManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Identifier)) ::StringW  Identifier;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_MusicPlayers, put=set_MusicPlayers)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*  MusicPlayers;

 __declspec(property(get=get_TimeDebug, put=set_TimeDebug)) bool  TimeDebug;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::MusicManager>  _Instance_k__BackingField;

/// @brief Field <MusicPlayers>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__MusicPlayers_k__BackingField, put=__cordl_internal_set__MusicPlayers_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*  _MusicPlayers_k__BackingField;

/// @brief Field _guiDebugLog, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiDebugLog, put=__cordl_internal_set__guiDebugLog)) ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  _guiDebugLog;

/// @brief Field _guiDebugTextStyle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiDebugTextStyle, put=__cordl_internal_set__guiDebugTextStyle)) ::UnityEngine::GUIStyle*  _guiDebugTextStyle;

/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr operator  ::GlobalNamespace::IAudioBehaviour*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr operator  ::GlobalNamespace::IAudioGUI*() noexcept;

/// @brief Method AddDebugLog, addr 0x1803d7600, size 0x110, virtual false, abstract: false, final false
inline void AddDebugLog(::StringW  content, float_t  lingerTime) ;

/// @brief Method AudioFixedUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioFixedUpdate(float_t  deltaTime) ;

/// @brief Method AudioLateUpdate, addr 0x1803d7710, size 0xb0, virtual true, abstract: false, final true
inline void AudioLateUpdate(float_t  deltaTime) ;

/// @brief Method AudioSlowUpdate, addr 0x1803d77c0, size 0xa0, virtual true, abstract: false, final true
inline void AudioSlowUpdate(float_t  deltaTime) ;

/// @brief Method AudioUpdate, addr 0x1803d7860, size 0x80, virtual true, abstract: false, final true
inline void AudioUpdate(float_t  deltaTime) ;

/// @brief Method Deregister, addr 0x1803d78e0, size 0x30, virtual false, abstract: false, final false
inline void Deregister(::GlobalNamespace::MusicPlayer*  player) ;

/// @brief Method DrawGUI, addr 0x1803d7910, size 0x4c0, virtual true, abstract: false, final true
inline void DrawGUI() ;

/// @brief Method Initialize, addr 0x1803d7dd0, size 0x70, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method MusicUpdate, addr 0x1803d77c0, size 0xa0, virtual false, abstract: false, final false
inline void MusicUpdate() ;

static inline ::GlobalNamespace::MusicManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x1803d7e40, size 0x100, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803d7f40, size 0x1d0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMovingTooFast, addr 0x1803d8110, size 0xa0, virtual false, abstract: false, final false
inline void OnMovingTooFast(::UnityEngine::Vector3  obj) ;

/// @brief Method Register, addr 0x1803d81b0, size 0x30, virtual false, abstract: false, final false
inline void Register(::GlobalNamespace::MusicPlayer*  player) ;

/// @brief Method SyncAll, addr 0x1803d8110, size 0xa0, virtual false, abstract: false, final false
inline void SyncAll() ;

/// @brief Method <AddDebugLog>b__30_0, addr 0x1803d81e0, size 0x30, virtual false, abstract: false, final false
inline void _AddDebugLog_b__30_0(double_t  t) ;

/// @brief Method <OnEnable>b__17_0, addr 0x1803d8210, size 0x40, virtual false, abstract: false, final false
inline void _OnEnable_b__17_0() ;

/// @brief Method <OnEnable>b__17_1, addr 0x1803d8250, size 0x110, virtual false, abstract: false, final false
inline void _OnEnable_b__17_1() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>* const& __cordl_internal_get__MusicPlayers_k__BackingField() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*& __cordl_internal_get__MusicPlayers_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* const& __cordl_internal_get__guiDebugLog() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*& __cordl_internal_get__guiDebugLog() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__guiDebugTextStyle() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__guiDebugTextStyle() ;

constexpr void __cordl_internal_set__MusicPlayers_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*  value) ;

constexpr void __cordl_internal_set__guiDebugLog(::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  value) ;

constexpr void __cordl_internal_set__guiDebugTextStyle(::UnityEngine::GUIStyle*  value) ;

/// @brief Method .ctor, addr 0x1803d8360, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::MusicManager> getStaticF__Instance_k__BackingField() ;

/// @brief Method get_Identifier, addr 0x1803d83e0, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_Identifier() ;

/// @brief Method get_Initialized, addr 0x1803d83f0, size 0x20, virtual true, abstract: false, final true
inline bool get_Initialized() ;

/// @brief Method get_Instance, addr 0x1803d8410, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::MusicManager> get_Instance() ;

/// @brief Method get_MusicPlayers, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>* get_MusicPlayers() ;

/// @brief Method get_TimeDebug, addr 0x18032d450, size 0x70, virtual false, abstract: false, final false
inline bool get_TimeDebug() ;

/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* i___GlobalNamespace__IAudioBehaviour() noexcept;

/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* i___GlobalNamespace__IAudioGUI() noexcept;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::MusicManager>  value) ;

/// @brief Method set_Instance, addr 0x1803d8430, size 0x30, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::MusicManager*  value) ;

/// @brief Method set_MusicPlayers, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_MusicPlayers(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*  value) ;

/// @brief Method set_TimeDebug, addr 0x18032d4d0, size 0xb0, virtual false, abstract: false, final false
inline void set_TimeDebug(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MusicManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MusicManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MusicManager(MusicManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MusicManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MusicManager(MusicManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4853};

/// @brief Field <MusicPlayers>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MusicPlayer>>*  ____MusicPlayers_k__BackingField;

/// @brief Field _guiDebugTextStyle, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____guiDebugTextStyle;

/// @brief Field _guiDebugLog, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  ____guiDebugLog;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MusicManager, ____MusicPlayers_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicManager, ____guiDebugTextStyle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MusicManager, ____guiDebugLog) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MusicManager) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
