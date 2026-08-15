#pragma once
// IWYU pragma private; include "Rewired/Data/RuntimeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/Platforms/zzzz__EditorPlatform_def.hpp"
#include "Rewired/Platforms/zzzz__Platform_def.hpp"
#include "Rewired/Platforms/zzzz__WebplayerPlatform_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(RuntimeData)
namespace Rewired::Platforms {
struct EditorPlatform;
}
namespace Rewired::Platforms {
struct Platform;
}
namespace Rewired::Platforms {
struct WebplayerPlatform;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace Rewired::Data {
class RuntimeData;
}
// Write type traits
MARK_REF_T(::Rewired::Data::RuntimeData*);
DEFINE_IL2CPP_CLASS(::Rewired::Data::RuntimeData*, "Rewired.Data", "RuntimeData");
// Dependencies Rewired.Platforms.EditorPlatform, Rewired.Platforms.Platform, Rewired.Platforms.WebplayerPlatform, UnityEngine.ScriptableObject
namespace Rewired::Data {
// Is value type: false
// CS Name: Rewired.Data.RuntimeData
class CORDL_TYPE RuntimeData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field editorPlatform, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_editorPlatform, put=__cordl_internal_set_editorPlatform)) ::Rewired::Platforms::EditorPlatform  editorPlatform;

/// @brief Field libraries, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_libraries, put=__cordl_internal_set_libraries)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*  libraries;

/// @brief Field platform, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_platform, put=__cordl_internal_set_platform)) ::Rewired::Platforms::Platform  platform;

/// @brief Field webplayerPlatform, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_webplayerPlatform, put=__cordl_internal_set_webplayerPlatform)) ::Rewired::Platforms::WebplayerPlatform  webplayerPlatform;

static inline ::Rewired::Data::RuntimeData* New_ctor() ;

/// @brief Method SetPlatform, addr 0x18188ead0, size 0x50, virtual false, abstract: false, final false
inline void SetPlatform(::Rewired::Platforms::Platform  platform, ::Rewired::Platforms::WebplayerPlatform  webplayerPlatform, ::Rewired::Platforms::EditorPlatform  editorPlatform, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*  libraries) ;

constexpr ::Rewired::Platforms::EditorPlatform const& __cordl_internal_get_editorPlatform() const;

constexpr ::Rewired::Platforms::EditorPlatform& __cordl_internal_get_editorPlatform() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>* const& __cordl_internal_get_libraries() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*& __cordl_internal_get_libraries() ;

constexpr ::Rewired::Platforms::Platform const& __cordl_internal_get_platform() const;

constexpr ::Rewired::Platforms::Platform& __cordl_internal_get_platform() ;

constexpr ::Rewired::Platforms::WebplayerPlatform const& __cordl_internal_get_webplayerPlatform() const;

constexpr ::Rewired::Platforms::WebplayerPlatform& __cordl_internal_get_webplayerPlatform() ;

constexpr void __cordl_internal_set_editorPlatform(::Rewired::Platforms::EditorPlatform  value) ;

constexpr void __cordl_internal_set_libraries(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*  value) ;

constexpr void __cordl_internal_set_platform(::Rewired::Platforms::Platform  value) ;

constexpr void __cordl_internal_set_webplayerPlatform(::Rewired::Platforms::WebplayerPlatform  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeData(RuntimeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeData(RuntimeData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2344};

/// @brief Field platform, offset: 0x18, size: 0x4, def value: None
 ::Rewired::Platforms::Platform  ___platform;

/// @brief Field webplayerPlatform, offset: 0x1c, size: 0x4, def value: None
 ::Rewired::Platforms::WebplayerPlatform  ___webplayerPlatform;

/// @brief Field editorPlatform, offset: 0x20, size: 0x4, def value: None
 ::Rewired::Platforms::EditorPlatform  ___editorPlatform;

/// @brief Field libraries, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::TextAsset>>*  ___libraries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Data::RuntimeData, ___platform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::RuntimeData, ___webplayerPlatform) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::RuntimeData, ___editorPlatform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::Data::RuntimeData, ___libraries) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::Data::RuntimeData) == 0x30, "Size mismatch!");

} // namespace end def Rewired::Data
