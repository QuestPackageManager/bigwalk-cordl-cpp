#pragma once
// IWYU pragma private; include "Rewired/Data/EditorPlatformData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(EditorPlatformData)
namespace Rewired::Data {
class EditorPlatformData_Platform;
}
namespace Rewired::Platforms {
struct EditorPlatform;
}
namespace Rewired::Platforms {
struct Platform;
}
namespace Rewired::Platforms {
struct WebplayerPlatform;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace Rewired::Data {
class EditorPlatformData;
}
namespace Rewired::Data {
class EditorPlatformData_Platform;
}
// Write type traits
MARK_REF_T(::Rewired::Data::EditorPlatformData*);
MARK_REF_T(::Rewired::Data::EditorPlatformData_Platform*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::EditorPlatformData*, "Rewired.Data", "EditorPlatformData");
DEFINE_IL2CPP_CLASS(::Rewired::Data::EditorPlatformData_Platform*, "Rewired.Data", "EditorPlatformData/Platform");
// Dependencies System.Object, UnityEngine.TextAsset
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.EditorPlatformData/Platform
class CORDL_TYPE EditorPlatformData_Platform : public ::System::Object {
public:
// Declarations
/// @brief Field libraries, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_libraries, put=__cordl_internal_set_libraries)) ::ArrayW<::UnityW<::UnityEngine::TextAsset>>  libraries;

static inline ::Rewired::Data::EditorPlatformData_Platform* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::TextAsset>> const& __cordl_internal_get_libraries() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::TextAsset>>& __cordl_internal_get_libraries() ;

constexpr void __cordl_internal_set_libraries(::ArrayW<::UnityW<::UnityEngine::TextAsset>>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EditorPlatformData_Platform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EditorPlatformData_Platform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EditorPlatformData_Platform(EditorPlatformData_Platform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EditorPlatformData_Platform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EditorPlatformData_Platform(EditorPlatformData_Platform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2345};

/// @brief Field libraries, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::TextAsset>>  ___libraries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::EditorPlatformData_Platform, ___libraries) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::EditorPlatformData_Platform) == 0x18, "Size mismatch!");

} // namespace end def Rewired::Data
// Dependencies UnityEngine.ScriptableObject
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.EditorPlatformData
class CORDL_TYPE EditorPlatformData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Platform = ::Rewired::Data::EditorPlatformData_Platform;

/// @brief Field fallback, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_fallback, put=__cordl_internal_set_fallback)) ::Rewired::Data::EditorPlatformData_Platform*  fallback;

/// @brief Field linuxStandalone, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_linuxStandalone, put=__cordl_internal_set_linuxStandalone)) ::Rewired::Data::EditorPlatformData_Platform*  linuxStandalone;

/// @brief Field osxStandalone, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_osxStandalone, put=__cordl_internal_set_osxStandalone)) ::Rewired::Data::EditorPlatformData_Platform*  osxStandalone;

/// @brief Field webplayer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_webplayer, put=__cordl_internal_set_webplayer)) ::Rewired::Data::EditorPlatformData_Platform*  webplayer;

/// @brief Field windowsStandalone, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_windowsStandalone, put=__cordl_internal_set_windowsStandalone)) ::Rewired::Data::EditorPlatformData_Platform*  windowsStandalone;

/// @brief Field windowsStore, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_windowsStore, put=__cordl_internal_set_windowsStore)) ::Rewired::Data::EditorPlatformData_Platform*  windowsStore;

/// @brief Method GetLibraries, addr 0x18188db30, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::TextAsset>> GetLibraries(::Rewired::Platforms::Platform  platform, ::Rewired::Platforms::WebplayerPlatform  webplayerPlatform, ::Rewired::Platforms::EditorPlatform  editorPlatform) ;

/// @brief Method GetPlatform, addr 0x18188dbb0, size 0x60, virtual false, abstract: false, final false
inline ::Rewired::Data::EditorPlatformData_Platform* GetPlatform(::Rewired::Platforms::Platform  platform, ::Rewired::Platforms::WebplayerPlatform  webplayerPlatform, ::Rewired::Platforms::EditorPlatform  editorPlatform) ;

static inline ::Rewired::Data::EditorPlatformData* New_ctor() ;

constexpr ::Rewired::Data::EditorPlatformData_Platform* const& __cordl_internal_get_fallback() const;

constexpr ::Rewired::Data::EditorPlatformData_Platform*& __cordl_internal_get_fallback() ;

constexpr ::Rewired::Data::EditorPlatformData_Platform* const& __cordl_internal_get_linuxStandalone() const;

constexpr ::Rewired::Data::EditorPlatformData_Platform*& __cordl_internal_get_linuxStandalone() ;

constexpr ::Rewired::Data::EditorPlatformData_Platform* const& __cordl_internal_get_osxStandalone() const;

constexpr ::Rewired::Data::EditorPlatformData_Platform*& __cordl_internal_get_osxStandalone() ;

constexpr ::Rewired::Data::EditorPlatformData_Platform* const& __cordl_internal_get_webplayer() const;

constexpr ::Rewired::Data::EditorPlatformData_Platform*& __cordl_internal_get_webplayer() ;

constexpr ::Rewired::Data::EditorPlatformData_Platform* const& __cordl_internal_get_windowsStandalone() const;

constexpr ::Rewired::Data::EditorPlatformData_Platform*& __cordl_internal_get_windowsStandalone() ;

constexpr ::Rewired::Data::EditorPlatformData_Platform* const& __cordl_internal_get_windowsStore() const;

constexpr ::Rewired::Data::EditorPlatformData_Platform*& __cordl_internal_get_windowsStore() ;

constexpr void __cordl_internal_set_fallback(::Rewired::Data::EditorPlatformData_Platform*  value) ;

constexpr void __cordl_internal_set_linuxStandalone(::Rewired::Data::EditorPlatformData_Platform*  value) ;

constexpr void __cordl_internal_set_osxStandalone(::Rewired::Data::EditorPlatformData_Platform*  value) ;

constexpr void __cordl_internal_set_webplayer(::Rewired::Data::EditorPlatformData_Platform*  value) ;

constexpr void __cordl_internal_set_windowsStandalone(::Rewired::Data::EditorPlatformData_Platform*  value) ;

constexpr void __cordl_internal_set_windowsStore(::Rewired::Data::EditorPlatformData_Platform*  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EditorPlatformData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EditorPlatformData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EditorPlatformData(EditorPlatformData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EditorPlatformData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EditorPlatformData(EditorPlatformData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2346};

/// @brief Field windowsStandalone, offset: 0x18, size: 0x8, def value: None
 ::Rewired::Data::EditorPlatformData_Platform*  ___windowsStandalone;

/// @brief Field windowsStore, offset: 0x20, size: 0x8, def value: None
 ::Rewired::Data::EditorPlatformData_Platform*  ___windowsStore;

/// @brief Field osxStandalone, offset: 0x28, size: 0x8, def value: None
 ::Rewired::Data::EditorPlatformData_Platform*  ___osxStandalone;

/// @brief Field linuxStandalone, offset: 0x30, size: 0x8, def value: None
 ::Rewired::Data::EditorPlatformData_Platform*  ___linuxStandalone;

/// @brief Field webplayer, offset: 0x38, size: 0x8, def value: None
 ::Rewired::Data::EditorPlatformData_Platform*  ___webplayer;

/// @brief Field fallback, offset: 0x40, size: 0x8, def value: None
 ::Rewired::Data::EditorPlatformData_Platform*  ___fallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::EditorPlatformData, ___windowsStandalone) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::EditorPlatformData, ___windowsStore) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::EditorPlatformData, ___osxStandalone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::EditorPlatformData, ___linuxStandalone) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::EditorPlatformData, ___webplayer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::EditorPlatformData, ___fallback) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::EditorPlatformData) == 0x48, "Size mismatch!");

} // namespace end def Rewired::Data
