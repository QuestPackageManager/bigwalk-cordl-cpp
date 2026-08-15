#pragma once
// IWYU pragma private; include "GlobalNamespace/AudibilityDebug.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AudibilityDebug)
namespace GlobalNamespace {
class IAudioGUI;
}
namespace UnityEngine {
class GUIStyle;
}
// Forward declare root types
namespace GlobalNamespace {
class AudibilityDebug;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudibilityDebug*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudibilityDebug*, "", "AudibilityDebug");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudibilityDebug
class CORDL_TYPE AudibilityDebug : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_GUIDebugMode)) bool  GUIDebugMode;

 __declspec(property(get=get_Identifier)) ::StringW  Identifier;

/// @brief Field _guiDebugMode, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__guiDebugMode, put=__cordl_internal_set__guiDebugMode)) bool  _guiDebugMode;

/// @brief Field _guiDebugTextStyle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiDebugTextStyle, put=__cordl_internal_set__guiDebugTextStyle)) ::UnityEngine::GUIStyle*  _guiDebugTextStyle;

/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr operator  ::GlobalNamespace::IAudioGUI*() noexcept;

/// @brief Method DrawGUI, addr 0x1803798e0, size 0x6b0, virtual true, abstract: false, final true
inline void DrawGUI() ;

static inline ::GlobalNamespace::AudibilityDebug* New_ctor() ;

/// @brief Method ToggleGUIDebug, addr 0x180379f90, size 0x160, virtual false, abstract: false, final false
inline void ToggleGUIDebug() ;

constexpr bool const& __cordl_internal_get__guiDebugMode() const;

constexpr bool& __cordl_internal_get__guiDebugMode() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__guiDebugTextStyle() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__guiDebugTextStyle() ;

constexpr void __cordl_internal_set__guiDebugMode(bool  value) ;

constexpr void __cordl_internal_set__guiDebugTextStyle(::UnityEngine::GUIStyle*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_GUIDebugMode, addr 0x18037a0f0, size 0x10, virtual false, abstract: false, final false
inline bool get_GUIDebugMode() ;

/// @brief Method get_Identifier, addr 0x18037a100, size 0x3f0, virtual true, abstract: false, final true
inline ::StringW get_Identifier() ;

/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* i___GlobalNamespace__IAudioGUI() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudibilityDebug() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudibilityDebug", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudibilityDebug(AudibilityDebug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudibilityDebug", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudibilityDebug(AudibilityDebug const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5517};

/// @brief Field _guiDebugTextStyle, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____guiDebugTextStyle;

/// @brief Field _guiDebugMode, offset: 0x18, size: 0x1, def value: None
 bool  ____guiDebugMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudibilityDebug, ____guiDebugTextStyle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudibilityDebug, ____guiDebugMode) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudibilityDebug) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
