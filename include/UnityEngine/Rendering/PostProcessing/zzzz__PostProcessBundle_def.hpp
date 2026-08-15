#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessBundle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PostProcessBundle)
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessAttribute;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessEffectRenderer;
}
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessEffectSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessBundle;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::PostProcessBundle*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::PostProcessBundle*, "UnityEngine.Rendering.PostProcessing", "PostProcessBundle");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessBundle
class CORDL_TYPE PostProcessBundle : public ::System::Object {
public:
// Declarations
/// @brief Field <attribute>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__attribute_k__BackingField, put=__cordl_internal_set__attribute_k__BackingField)) ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*  _attribute_k__BackingField;

/// @brief Field <settings>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings_k__BackingField, put=__cordl_internal_set__settings_k__BackingField)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>  _settings_k__BackingField;

 __declspec(property(get=get_attribute, put=set_attribute)) ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*  attribute;

/// @brief Field m_Renderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Renderer, put=__cordl_internal_set_m_Renderer)) ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*  m_Renderer;

 __declspec(property(get=get_renderer)) ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*  renderer;

 __declspec(property(get=get_settings, put=set_settings)) ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>  settings;

/// @brief Method CastRenderer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T CastRenderer() ;

/// @brief Method CastSettings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T CastSettings() ;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessBundle* New_ctor(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*  settings) ;

/// @brief Method Release, addr 0x181fc1240, size 0x60, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method ResetHistory, addr 0x181283350, size 0x1750, virtual false, abstract: false, final false
inline void ResetHistory() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute* const& __cordl_internal_get__attribute_k__BackingField() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*& __cordl_internal_get__attribute_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings> const& __cordl_internal_get__settings_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>& __cordl_internal_get__settings_k__BackingField() ;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer* const& __cordl_internal_get_m_Renderer() const;

constexpr ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*& __cordl_internal_get_m_Renderer() ;

constexpr void __cordl_internal_set__attribute_k__BackingField(::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*  value) ;

constexpr void __cordl_internal_set__settings_k__BackingField(::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>  value) ;

constexpr void __cordl_internal_set_m_Renderer(::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*  value) ;

/// @brief Method .ctor, addr 0x181fc12a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*  settings) ;

/// @brief Method get_attribute, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute* get_attribute() ;

/// @brief Method get_renderer, addr 0x181fc12f0, size 0xf0, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer* get_renderer() ;

/// @brief Method get_settings, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings> get_settings() ;

/// @brief Method set_attribute, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_attribute(::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*  value) ;

/// @brief Method set_settings, addr 0x1802ecc20, size 0x10, virtual false, abstract: false, final false
inline void set_settings(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessBundle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessBundle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessBundle(PostProcessBundle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessBundle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessBundle(PostProcessBundle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18618};

/// @brief Field <attribute>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessAttribute*  ____attribute_k__BackingField;

/// @brief Field <settings>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings>  ____settings_k__BackingField;

/// @brief Field m_Renderer, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer*  ___m_Renderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessBundle, ____attribute_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessBundle, ____settings_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::PostProcessBundle, ___m_Renderer) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::PostProcessBundle) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
