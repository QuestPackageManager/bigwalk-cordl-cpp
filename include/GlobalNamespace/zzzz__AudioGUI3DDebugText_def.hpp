#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioGUI3DDebugText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioGUI3DDebugText)
namespace GlobalNamespace {
class IAudioGUI;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GUIStyle;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioGUI3DDebugText;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioGUI3DDebugText*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioGUI3DDebugText*, "", "AudioGUI3DDebugText");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioGUI3DDebugText
class CORDL_TYPE AudioGUI3DDebugText : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Enabled, put=set_Enabled)) bool  Enabled;

 __declspec(property(get=get_Identifier)) ::StringW  Identifier;

/// @brief Field _colorPools, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorPools, put=__cordl_internal_set__colorPools)) ::System::Collections::Generic::List_1<::UnityEngine::Color>*  _colorPools;

/// @brief Field _guiDebugTextStyle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiDebugTextStyle, put=__cordl_internal_set__guiDebugTextStyle)) ::UnityEngine::GUIStyle*  _guiDebugTextStyle;

/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr operator  ::GlobalNamespace::IAudioGUI*() noexcept;

/// @brief Method DrawGUI, addr 0x180479ef0, size 0x960, virtual true, abstract: false, final true
inline void DrawGUI() ;

static inline ::GlobalNamespace::AudioGUI3DDebugText* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& __cordl_internal_get__colorPools() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& __cordl_internal_get__colorPools() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__guiDebugTextStyle() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__guiDebugTextStyle() ;

constexpr void __cordl_internal_set__colorPools(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set__guiDebugTextStyle(::UnityEngine::GUIStyle*  value) ;

/// @brief Method .ctor, addr 0x18047a850, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Enabled, addr 0x18047aa00, size 0xc0, virtual false, abstract: false, final false
inline bool get_Enabled() ;

/// @brief Method get_Identifier, addr 0x18047aac0, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_Identifier() ;

/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* i___GlobalNamespace__IAudioGUI() noexcept;

/// @brief Method set_Enabled, addr 0x18047aad0, size 0xf0, virtual false, abstract: false, final false
inline void set_Enabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioGUI3DDebugText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioGUI3DDebugText", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioGUI3DDebugText(AudioGUI3DDebugText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioGUI3DDebugText", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioGUI3DDebugText(AudioGUI3DDebugText const& ) = delete;

/// @brief Field COLOR_POOL_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  COLOR_POOL_SIZE{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17494};

/// @brief Field _guiDebugTextStyle, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____guiDebugTextStyle;

/// @brief Field _colorPools, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Color>*  ____colorPools;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioGUI3DDebugText, ____guiDebugTextStyle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioGUI3DDebugText, ____colorPools) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioGUI3DDebugText) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
