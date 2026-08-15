#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioGUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioGUI)
namespace GlobalNamespace {
class IAudioGUI;
}
namespace GlobalNamespace {
template<typename T>
class ReadOnlyList_1;
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
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioGUI;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioGUI*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioGUI*, "", "AudioGUI");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioGUI
class CORDL_TYPE AudioGUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_GUICallers)) ::GlobalNamespace::ReadOnlyList_1<::GlobalNamespace::IAudioGUI*>*  GUICallers;

/// @brief Field _guiCallers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiCallers, put=__cordl_internal_set__guiCallers)) ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioGUI*>*  _guiCallers;

/// @brief Field _helpBox, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__helpBox, put=setStaticF__helpBox)) ::UnityEngine::GUIStyle*  _helpBox;

/// @brief Field _readonlyGUICaller, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__readonlyGUICaller, put=__cordl_internal_set__readonlyGUICaller)) ::GlobalNamespace::ReadOnlyList_1<::GlobalNamespace::IAudioGUI*>*  _readonlyGUICaller;

/// @brief Field _style, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__style, put=setStaticF__style)) ::UnityEngine::GUIStyle*  _style;

/// @brief Field _styleColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__styleColor, put=setStaticF__styleColor)) ::UnityEngine::Color  _styleColor;

/// @brief Field _texture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__texture, put=setStaticF__texture)) ::UnityW<::UnityEngine::Texture2D>  _texture;

/// @brief Method ColoredBackground, addr 0x18047abc0, size 0x360, virtual false, abstract: false, final false
static inline ::UnityEngine::GUIStyle* ColoredBackground(::UnityEngine::Color  color) ;

/// @brief Method DeregisterGUI, addr 0x18047af20, size 0x60, virtual false, abstract: false, final false
inline void DeregisterGUI(::GlobalNamespace::IAudioGUI*  obj) ;

static inline ::GlobalNamespace::AudioGUI* New_ctor() ;

/// @brief Method OnGUI, addr 0x18047af80, size 0x120, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method RegisterGUI, addr 0x18047b0a0, size 0x190, virtual false, abstract: false, final false
inline void RegisterGUI(::GlobalNamespace::IAudioGUI*  obj, int32_t  index) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioGUI*>* const& __cordl_internal_get__guiCallers() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioGUI*>*& __cordl_internal_get__guiCallers() ;

constexpr ::GlobalNamespace::ReadOnlyList_1<::GlobalNamespace::IAudioGUI*>* const& __cordl_internal_get__readonlyGUICaller() const;

constexpr ::GlobalNamespace::ReadOnlyList_1<::GlobalNamespace::IAudioGUI*>*& __cordl_internal_get__readonlyGUICaller() ;

constexpr void __cordl_internal_set__guiCallers(::System::Collections::Generic::List_1<::GlobalNamespace::IAudioGUI*>*  value) ;

constexpr void __cordl_internal_set__readonlyGUICaller(::GlobalNamespace::ReadOnlyList_1<::GlobalNamespace::IAudioGUI*>*  value) ;

/// @brief Method .ctor, addr 0x18047b230, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::GUIStyle* getStaticF__helpBox() ;

static inline ::UnityEngine::GUIStyle* getStaticF__style() ;

static inline ::UnityEngine::Color getStaticF__styleColor() ;

static inline ::UnityW<::UnityEngine::Texture2D> getStaticF__texture() ;

/// @brief Method get_GUICallers, addr 0x18047b280, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::ReadOnlyList_1<::GlobalNamespace::IAudioGUI*>* get_GUICallers() ;

/// @brief Method get_HelpBoxStyle, addr 0x18047b2e0, size 0x170, virtual false, abstract: false, final false
static inline ::UnityEngine::GUIStyle* get_HelpBoxStyle() ;

static inline void setStaticF__helpBox(::UnityEngine::GUIStyle*  value) ;

static inline void setStaticF__style(::UnityEngine::GUIStyle*  value) ;

static inline void setStaticF__styleColor(::UnityEngine::Color  value) ;

static inline void setStaticF__texture(::UnityW<::UnityEngine::Texture2D>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioGUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioGUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioGUI(AudioGUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioGUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioGUI(AudioGUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17521};

/// @brief Field _guiCallers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IAudioGUI*>*  ____guiCallers;

/// @brief Field _readonlyGUICaller, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ReadOnlyList_1<::GlobalNamespace::IAudioGUI*>*  ____readonlyGUICaller;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioGUI, ____guiCallers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioGUI, ____readonlyGUICaller) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioGUI) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
