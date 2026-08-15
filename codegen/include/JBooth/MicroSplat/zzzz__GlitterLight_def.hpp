#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/GlitterLight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GlitterLight)
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace JBooth::MicroSplat {
class GlitterLight;
}
// Write type traits
MARK_REF_T(::JBooth::MicroSplat::GlitterLight*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::GlitterLight*, "JBooth.MicroSplat", "GlitterLight");
// Dependencies UnityEngine.MonoBehaviour
namespace JBooth::MicroSplat {
// Is value type: false
// CS Name: JBooth.MicroSplat.GlitterLight
class CORDL_TYPE GlitterLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field lght, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lght, put=__cordl_internal_set_lght)) ::UnityW<::UnityEngine::Light>  lght;

static inline ::JBooth::MicroSplat::GlitterLight* New_ctor() ;

/// @brief Method OnDisable, addr 0x1813fe840, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1813fe840, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x1813fe870, size 0x140, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Light> const& __cordl_internal_get_lght() const;

constexpr ::UnityW<::UnityEngine::Light>& __cordl_internal_get_lght() ;

constexpr void __cordl_internal_set_lght(::UnityW<::UnityEngine::Light>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GlitterLight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GlitterLight", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlitterLight(GlitterLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlitterLight", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlitterLight(GlitterLight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20805};

/// @brief Field lght, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Light>  ___lght;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::GlitterLight, ___lght) == 0x20, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::GlitterLight) == 0x28, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
