#pragma once
// IWYU pragma private; include "GlobalNamespace/ExternalMusicLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MusicPlayer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ExternalMusicLoader)
namespace GlobalNamespace {
class ExternalMusicLoader___c__DisplayClass18_0;
}
namespace GlobalNamespace {
class IAudioGUI;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUIStyle;
}
// Forward declare root types
namespace GlobalNamespace {
class ExternalMusicLoader;
}
namespace GlobalNamespace {
class ExternalMusicLoader___c__DisplayClass18_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ExternalMusicLoader*);
MARK_REF_T(::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExternalMusicLoader*, "", "ExternalMusicLoader");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0*, "", "ExternalMusicLoader/<>c__DisplayClass18_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ExternalMusicLoader/<>c__DisplayClass18_0
class CORDL_TYPE ExternalMusicLoader___c__DisplayClass18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ExternalMusicLoader>  __4__this;

/// @brief Field currentIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field request, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::UnityEngine::Networking::UnityWebRequest*  request;

static inline ::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0* New_ctor() ;

/// @brief Method <LoadAllInFolder>b__0, addr 0x180346cd0, size 0x1f0, virtual false, abstract: false, final false
inline void _LoadAllInFolder_b__0(::UnityEngine::AsyncOperation*  o) ;

constexpr ::UnityW<::GlobalNamespace::ExternalMusicLoader> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::ExternalMusicLoader>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_request() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ExternalMusicLoader>  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExternalMusicLoader___c__DisplayClass18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExternalMusicLoader___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExternalMusicLoader___c__DisplayClass18_0(ExternalMusicLoader___c__DisplayClass18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExternalMusicLoader___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExternalMusicLoader___c__DisplayClass18_0(ExternalMusicLoader___c__DisplayClass18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4829};

/// @brief Field request, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___request;

/// @brief Field currentIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ExternalMusicLoader>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0, ___currentIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies MusicPlayer, UnityEngine.AudioClip, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ExternalMusicLoader
class CORDL_TYPE ExternalMusicLoader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass18_0 = ::GlobalNamespace::ExternalMusicLoader___c__DisplayClass18_0;

/// @brief Field FilePaths, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_FilePaths, put=__cordl_internal_set_FilePaths)) ::ArrayW<::StringW>  FilePaths;

/// @brief Field FolderPath, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FolderPath, put=__cordl_internal_set_FolderPath)) ::StringW  FolderPath;

 __declspec(property(get=get_Identifier)) ::StringW  Identifier;

/// @brief Field MusicPlayers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MusicPlayers, put=__cordl_internal_set_MusicPlayers)) ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  MusicPlayers;

/// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Instance_k__BackingField, put=setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::ExternalMusicLoader>  _Instance_k__BackingField;

/// @brief Field _guiDebugLog, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiDebugLog, put=__cordl_internal_set__guiDebugLog)) ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  _guiDebugLog;

/// @brief Field _guiDebugTextStyle, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiDebugTextStyle, put=__cordl_internal_set__guiDebugTextStyle)) ::UnityEngine::GUIStyle*  _guiDebugTextStyle;

/// @brief Field _loadedClips, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadedClips, put=__cordl_internal_set__loadedClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  _loadedClips;

/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr operator  ::GlobalNamespace::IAudioGUI*() noexcept;

/// @brief Method Deregister, addr 0x180318fc0, size 0x60, virtual false, abstract: false, final false
inline void Deregister() ;

/// @brief Method DrawGUI, addr 0x1803340a0, size 0x100, virtual true, abstract: false, final true
inline void DrawGUI() ;

/// @brief Method LoadAllInFolder, addr 0x1803341a0, size 0x4c0, virtual false, abstract: false, final false
inline void LoadAllInFolder() ;

/// @brief Method Log, addr 0x180334660, size 0x100, virtual false, abstract: false, final false
inline void Log(::StringW  text) ;

static inline ::GlobalNamespace::ExternalMusicLoader* New_ctor() ;

/// @brief Method OnDestroy, addr 0x180334760, size 0x60, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18031b400, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803347c0, size 0x1a0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayAllDefault, addr 0x180334960, size 0x200, virtual false, abstract: false, final false
inline void PlayAllDefault() ;

/// @brief Method PlayAllLoaded, addr 0x180334b60, size 0xa0, virtual false, abstract: false, final false
inline void PlayAllLoaded() ;

/// @brief Method Register, addr 0x180334c00, size 0x100, virtual false, abstract: false, final false
inline void Register() ;

/// @brief Method Start, addr 0x180334d00, size 0x30, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method <Log>b__21_0, addr 0x180334d30, size 0x30, virtual false, abstract: false, final false
inline void _Log_b__21_0(double_t  t) ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_FilePaths() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_FilePaths() ;

constexpr ::StringW const& __cordl_internal_get_FolderPath() const;

constexpr ::StringW& __cordl_internal_get_FolderPath() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>> const& __cordl_internal_get_MusicPlayers() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>& __cordl_internal_get_MusicPlayers() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* const& __cordl_internal_get__guiDebugLog() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*& __cordl_internal_get__guiDebugLog() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__guiDebugTextStyle() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__guiDebugTextStyle() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get__loadedClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get__loadedClips() ;

constexpr void __cordl_internal_set_FilePaths(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_FolderPath(::StringW  value) ;

constexpr void __cordl_internal_set_MusicPlayers(::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  value) ;

constexpr void __cordl_internal_set__guiDebugLog(::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  value) ;

constexpr void __cordl_internal_set__guiDebugTextStyle(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set__loadedClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

/// @brief Method .ctor, addr 0x180334d60, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::ExternalMusicLoader> getStaticF__Instance_k__BackingField() ;

/// @brief Method get_Identifier, addr 0x180334db0, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_Identifier() ;

/// @brief Method get_Instance, addr 0x180334dc0, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::ExternalMusicLoader> get_Instance() ;

/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* i___GlobalNamespace__IAudioGUI() noexcept;

static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::ExternalMusicLoader>  value) ;

/// @brief Method set_Instance, addr 0x180334d00, size 0x30, virtual false, abstract: false, final false
static inline void set_Instance(::GlobalNamespace::ExternalMusicLoader*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExternalMusicLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExternalMusicLoader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExternalMusicLoader(ExternalMusicLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExternalMusicLoader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExternalMusicLoader(ExternalMusicLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4830};

/// @brief Field FolderPath, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___FolderPath;

/// @brief Field MusicPlayers, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::MusicPlayer>>  ___MusicPlayers;

/// @brief Field FilePaths, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___FilePaths;

/// @brief Field _guiDebugLog, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  ____guiDebugLog;

/// @brief Field _guiDebugTextStyle, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____guiDebugTextStyle;

/// @brief Field _loadedClips, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ____loadedClips;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ExternalMusicLoader, ___FolderPath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExternalMusicLoader, ___MusicPlayers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExternalMusicLoader, ___FilePaths) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExternalMusicLoader, ____guiDebugLog) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExternalMusicLoader, ____guiDebugTextStyle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ExternalMusicLoader, ____loadedClips) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ExternalMusicLoader) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
