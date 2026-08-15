#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TextureLerper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureLerper)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessRenderContext;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessResources;
}
namespace UnityEngine::Rendering::PostProcessing {
class PropertySheetFactory;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class TextureLerper;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::TextureLerper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::TextureLerper*, "UnityEngine.Rendering.PostProcessing", "TextureLerper");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.TextureLerper
class CORDL_TYPE TextureLerper : public ::System::Object {
public:
// Declarations
/// @brief Field m_Actives, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Actives, put=__cordl_internal_set_m_Actives)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  m_Actives;

/// @brief Field m_Command, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Command, put=__cordl_internal_set_m_Command)) ::UnityEngine::Rendering::CommandBuffer*  m_Command;

/// @brief Field m_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_Instance, put=setStaticF_m_Instance)) ::UnityEngine::Rendering::PostProcessing::TextureLerper*  m_Instance;

/// @brief Field m_PropertySheets, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PropertySheets, put=__cordl_internal_set_m_PropertySheets)) ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  m_PropertySheets;

/// @brief Field m_Recycled, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Recycled, put=__cordl_internal_set_m_Recycled)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  m_Recycled;

/// @brief Field m_Resources, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Resources, put=__cordl_internal_set_m_Resources)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  m_Resources;

/// @brief Method BeginFrame, addr 0x181fd27a0, size 0x50, virtual false, abstract: false, final false
inline void BeginFrame(::UnityEngine::Rendering::PostProcessing::PostProcessRenderContext*  context) ;

/// @brief Method Clear, addr 0x181fd27f0, size 0x110, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method EndFrame, addr 0x181fd2900, size 0xf0, virtual false, abstract: false, final false
inline void EndFrame() ;

/// @brief Method Get, addr 0x181fd29f0, size 0x270, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> Get(::UnityEngine::RenderTextureFormat  format, int32_t  w, int32_t  h, int32_t  d, bool  enableRandomWrite, bool  force3D) ;

/// @brief Method Lerp, addr 0x181fd32d0, size 0x5c0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> Lerp(::UnityEngine::Texture*  from, ::UnityEngine::Color  to, float_t  t) ;

/// @brief Method Lerp, addr 0x181fd2c60, size 0x670, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture> Lerp(::UnityEngine::Texture*  from, ::UnityEngine::Texture*  to, float_t  t) ;

static inline ::UnityEngine::Rendering::PostProcessing::TextureLerper* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_m_Actives() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_m_Actives() ;

constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_m_Command() const;

constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_Command() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory* const& __cordl_internal_get_m_PropertySheets() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*& __cordl_internal_get_m_PropertySheets() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>* const& __cordl_internal_get_m_Recycled() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*& __cordl_internal_get_m_Recycled() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources> const& __cordl_internal_get_m_Resources() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>& __cordl_internal_get_m_Resources() ;

constexpr void __cordl_internal_set_m_Actives(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_m_Command(::UnityEngine::Rendering::CommandBuffer*  value) ;

constexpr void __cordl_internal_set_m_PropertySheets(::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  value) ;

constexpr void __cordl_internal_set_m_Recycled(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  value) ;

constexpr void __cordl_internal_set_m_Resources(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  value) ;

/// @brief Method .ctor, addr 0x181fd3890, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::PostProcessing::TextureLerper* getStaticF_m_Instance() ;

/// @brief Method get_instance, addr 0x181fd3910, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::PostProcessing::TextureLerper* get_instance() ;

static inline void setStaticF_m_Instance(::UnityEngine::Rendering::PostProcessing::TextureLerper*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextureLerper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextureLerper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextureLerper(TextureLerper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextureLerper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextureLerper(TextureLerper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18668};

/// @brief Field m_Command, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::CommandBuffer*  ___m_Command;

/// @brief Field m_PropertySheets, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PropertySheetFactory*  ___m_PropertySheets;

/// @brief Field m_Resources, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessResources>  ___m_Resources;

/// @brief Field m_Recycled, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  ___m_Recycled;

/// @brief Field m_Actives, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RenderTexture>>*  ___m_Actives;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TextureLerper, ___m_Command) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TextureLerper, ___m_PropertySheets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TextureLerper, ___m_Resources) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TextureLerper, ___m_Recycled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TextureLerper, ___m_Actives) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::TextureLerper) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
