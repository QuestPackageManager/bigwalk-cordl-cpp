#pragma once
// IWYU pragma private; include "GlobalNamespace/CollisionSoundGUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CollisionSoundGUI)
namespace GlobalNamespace {
class IAudioGUI;
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
// Forward declare root types
namespace GlobalNamespace {
class CollisionSoundGUI;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CollisionSoundGUI*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CollisionSoundGUI*, "", "CollisionSoundGUI");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CollisionSoundGUI
class CORDL_TYPE CollisionSoundGUI : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_GUIDebugMode, put=set_GUIDebugMode)) bool  GUIDebugMode;

 __declspec(property(get=get_Identifier)) ::StringW  Identifier;

/// @brief Field _guiDebugLog, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiDebugLog, put=__cordl_internal_set__guiDebugLog)) ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  _guiDebugLog;

/// @brief Field _guiDebugTextStyle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiDebugTextStyle, put=__cordl_internal_set__guiDebugTextStyle)) ::UnityEngine::GUIStyle*  _guiDebugTextStyle;

/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr operator  ::GlobalNamespace::IAudioGUI*() noexcept;

/// @brief Method AddGUILog, addr 0x18032d580, size 0x100, virtual false, abstract: false, final false
inline void AddGUILog(::StringW  content) ;

/// @brief Method DrawGUI, addr 0x18032d680, size 0x1e0, virtual true, abstract: false, final true
inline void DrawGUI() ;

static inline ::GlobalNamespace::CollisionSoundGUI* New_ctor() ;

/// @brief Method <AddGUILog>b__9_0, addr 0x18032d860, size 0x30, virtual false, abstract: false, final false
inline void _AddGUILog_b__9_0(double_t  t) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* const& __cordl_internal_get__guiDebugLog() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*& __cordl_internal_get__guiDebugLog() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__guiDebugTextStyle() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__guiDebugTextStyle() ;

constexpr void __cordl_internal_set__guiDebugLog(::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  value) ;

constexpr void __cordl_internal_set__guiDebugTextStyle(::UnityEngine::GUIStyle*  value) ;

/// @brief Method .ctor, addr 0x18032d890, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GUIDebugMode, addr 0x18032d450, size 0x70, virtual false, abstract: false, final false
inline bool get_GUIDebugMode() ;

/// @brief Method get_Identifier, addr 0x18032d970, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_Identifier() ;

/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* i___GlobalNamespace__IAudioGUI() noexcept;

/// @brief Method set_GUIDebugMode, addr 0x18032d4d0, size 0xb0, virtual false, abstract: false, final false
inline void set_GUIDebugMode(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollisionSoundGUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollisionSoundGUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollisionSoundGUI(CollisionSoundGUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollisionSoundGUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollisionSoundGUI(CollisionSoundGUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4819};

/// @brief Field _guiDebugLog, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  ____guiDebugLog;

/// @brief Field _guiDebugTextStyle, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____guiDebugTextStyle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CollisionSoundGUI, ____guiDebugLog) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CollisionSoundGUI, ____guiDebugTextStyle) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CollisionSoundGUI) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
