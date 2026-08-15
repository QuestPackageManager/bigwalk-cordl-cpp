#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/AdditionalLightShadowStatic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AdditionalLightShadowStatic)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class AdditionalLightShadowStatic;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic*, "UnityEngine.Rendering.Universal", "AdditionalLightShadowStatic");
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.AdditionalLightShadowStatic
class CORDL_TYPE AdditionalLightShadowStatic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_Light, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Light, put=__cordl_internal_set_m_Light)) ::UnityW<::UnityEngine::Light>  m_Light;

/// @brief Field s_StaticLightInstanceIDs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_StaticLightInstanceIDs, put=setStaticF_s_StaticLightInstanceIDs)) ::System::Collections::Generic::HashSet_1<int32_t>*  s_StaticLightInstanceIDs;

/// @brief Method IsStaticLight, addr 0x1820bcc40, size 0x50, virtual false, abstract: false, final false
static inline bool IsStaticLight(int32_t  lightInstanceID) ;

static inline ::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic* New_ctor() ;

/// @brief Method OnDisable, addr 0x1820bcc90, size 0x70, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1820bcd00, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_m_Light() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_m_Light() ;

constexpr void __cordl_internal_set_m_Light(::UnityW<::UnityEngine::Light>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_s_StaticLightInstanceIDs() ;

static inline void setStaticF_s_StaticLightInstanceIDs(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AdditionalLightShadowStatic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AdditionalLightShadowStatic", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AdditionalLightShadowStatic(AdditionalLightShadowStatic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AdditionalLightShadowStatic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AdditionalLightShadowStatic(AdditionalLightShadowStatic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12178};

/// @brief Field m_Light, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___m_Light;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic, ___m_Light) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::AdditionalLightShadowStatic) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
