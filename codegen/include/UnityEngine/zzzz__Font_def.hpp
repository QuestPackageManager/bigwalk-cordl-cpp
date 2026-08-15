#pragma once
// IWYU pragma private; include "UnityEngine/Font.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Font)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Font_FontTextureRebuildCallback;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class Font_FontTextureRebuildCallback;
}
// Write type traits
MARK_REF_T(::UnityEngine::Font*);
MARK_REF_T(::UnityEngine::Font_FontTextureRebuildCallback*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Font*, "UnityEngine", "Font");
DEFINE_IL2CPP_CLASS(::UnityEngine::Font_FontTextureRebuildCallback*, "UnityEngine", "Font/FontTextureRebuildCallback");
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Font/FontTextureRebuildCallback
class CORDL_TYPE Font_FontTextureRebuildCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::UnityEngine::Font_FontTextureRebuildCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Font_FontTextureRebuildCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Font_FontTextureRebuildCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Font_FontTextureRebuildCallback(Font_FontTextureRebuildCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Font_FontTextureRebuildCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Font_FontTextureRebuildCallback(Font_FontTextureRebuildCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21460};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Font_FontTextureRebuildCallback) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Font
class CORDL_TYPE Font : public ::UnityEngine::Object {
public:
// Declarations
using FontTextureRebuildCallback = ::UnityEngine::Font_FontTextureRebuildCallback;

 __declspec(property(get=get_dynamic)) bool  dynamic;

 __declspec(property(get=get_fontSize)) int32_t  fontSize;

/// @brief Field m_FontTextureRebuildCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FontTextureRebuildCallback, put=__cordl_internal_set_m_FontTextureRebuildCallback)) ::UnityEngine::Font_FontTextureRebuildCallback*  m_FontTextureRebuildCallback;

 __declspec(property(get=get_material)) ::UnityW<::UnityEngine::Material>  material;

/// @brief Field textureRebuilt, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_textureRebuilt, put=setStaticF_textureRebuilt)) ::System::Action_1<::UnityW<::UnityEngine::Font>>*  textureRebuilt;

/// @brief Method GetDefault, addr 0x182359320, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Font> GetDefault() ;

/// @brief Method GetDefault_Injected, addr 0x182359310, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr GetDefault_Injected() ;

/// @brief Method GetOSFallbacks, addr 0x182359340, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetOSFallbacks() ;

/// @brief Method GetPathsToOSFonts, addr 0x182359350, size 0x10, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetPathsToOSFonts() ;

/// @brief Method HasCharacter, addr 0x182359370, size 0x40, virtual false, abstract: false, final false
inline bool HasCharacter(char16_t  c) ;

/// @brief Method HasCharacter, addr 0x1823593b0, size 0x40, virtual false, abstract: false, final false
inline bool HasCharacter(int32_t  c) ;

/// @brief Method HasCharacter_Injected, addr 0x182359360, size 0x10, virtual false, abstract: false, final false
static inline bool HasCharacter_Injected(::System::IntPtr  _unity_self, int32_t  c) ;

/// @brief Method Internal_CreateFont, addr 0x182359400, size 0x100, virtual false, abstract: false, final false
static inline void Internal_CreateFont(::UnityEngine::Font*  self, ::StringW  name) ;

/// @brief Method Internal_CreateFont_Injected, addr 0x1823593f0, size 0x10, virtual false, abstract: false, final false
static inline void Internal_CreateFont_Injected(::UnityEngine::Font*  self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method InvokeTextureRebuilt_Internal, addr 0x182359500, size 0x60, virtual false, abstract: false, final false
static inline void InvokeTextureRebuilt_Internal(::UnityEngine::Font*  font) ;

static inline ::UnityEngine::Font* New_ctor() ;

constexpr ::UnityEngine::Font_FontTextureRebuildCallback* const& __cordl_internal_get_m_FontTextureRebuildCallback() const;

constexpr ::UnityEngine::Font_FontTextureRebuildCallback*& __cordl_internal_get_m_FontTextureRebuildCallback() ;

constexpr void __cordl_internal_set_m_FontTextureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback*  value) ;

/// @brief Method .ctor, addr 0x182359560, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_textureRebuilt, addr 0x182359570, size 0xb0, virtual false, abstract: false, final false
static inline void add_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>*  value) ;

static inline ::System::Action_1<::UnityW<::UnityEngine::Font>>* getStaticF_textureRebuilt() ;

/// @brief Method get_dynamic, addr 0x182359630, size 0x30, virtual false, abstract: false, final false
inline bool get_dynamic() ;

/// @brief Method get_dynamic_Injected, addr 0x182359620, size 0x10, virtual false, abstract: false, final false
static inline bool get_dynamic_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_fontSize, addr 0x182359670, size 0x30, virtual false, abstract: false, final false
inline int32_t get_fontSize() ;

/// @brief Method get_fontSize_Injected, addr 0x182359660, size 0x10, virtual false, abstract: false, final false
static inline int32_t get_fontSize_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_material, addr 0x1823596b0, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> get_material() ;

/// @brief Method get_material_Injected, addr 0x1823596a0, size 0x10, virtual false, abstract: false, final false
static inline ::System::IntPtr get_material_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method remove_textureRebuilt, addr 0x1823596f0, size 0xb0, virtual false, abstract: false, final false
static inline void remove_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>*  value) ;

static inline void setStaticF_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Font() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Font", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Font(Font && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Font", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Font(Font const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21461};

/// @brief Field m_FontTextureRebuildCallback, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Font_FontTextureRebuildCallback*  ___m_FontTextureRebuildCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Font, ___m_FontTextureRebuildCallback) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Font) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
