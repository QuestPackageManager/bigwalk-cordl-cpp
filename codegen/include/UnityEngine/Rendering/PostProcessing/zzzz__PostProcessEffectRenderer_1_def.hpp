#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/PostProcessEffectRenderer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/PostProcessing/zzzz__PostProcessEffectRenderer_def.hpp"
CORDL_MODULE_EXPORT(PostProcessEffectRenderer_1)
namespace UnityEngine::Rendering::PostProcessing {
class PostProcessEffectSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
template<typename T>
class PostProcessEffectRenderer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1, "UnityEngine.Rendering.PostProcessing", "PostProcessEffectRenderer`1");
// Dependencies UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer
namespace UnityEngine::Rendering::PostProcessing {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.PostProcessEffectRenderer`1<T>
class CORDL_TYPE PostProcessEffectRenderer_1 : public ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer {
public:
// Declarations
/// @brief Field <settings>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings_k__BackingField, put=__cordl_internal_set__settings_k__BackingField)) T  _settings_k__BackingField;

 __declspec(property(get=get_settings, put=set_settings)) T  settings;

static inline ::UnityEngine::Rendering::PostProcessing::PostProcessEffectRenderer_1<T>* New_ctor() ;

/// @brief Method SetSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetSettings(::UnityEngine::Rendering::PostProcessing::PostProcessEffectSettings*  settings) ;

constexpr T const& __cordl_internal_get__settings_k__BackingField() const;

constexpr T& __cordl_internal_get__settings_k__BackingField() ;

constexpr void __cordl_internal_set__settings_k__BackingField(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_settings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_settings() ;

/// @brief Method set_settings, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_settings(T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PostProcessEffectRenderer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PostProcessEffectRenderer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PostProcessEffectRenderer_1(PostProcessEffectRenderer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PostProcessEffectRenderer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PostProcessEffectRenderer_1(PostProcessEffectRenderer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18625};

/// @brief Field <settings>k__BackingField, offset: 0x18, size: 0x8, def value: None
 T  ____settings_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering::PostProcessing
