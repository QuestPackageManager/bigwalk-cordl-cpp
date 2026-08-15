#pragma once
// IWYU pragma private; include "Dissonance/Demo/Logo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Logo)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace Dissonance::Demo {
class Logo;
}
// Write type traits
MARK_REF_T(::Dissonance::Demo::Logo*);
DEFINE_IL2CPP_CLASS(::Dissonance::Demo::Logo*, "Dissonance.Demo", "Logo");
// Dependencies UnityEngine.MonoBehaviour
namespace Dissonance::Demo {
// Is value type: false
// CS Name: Dissonance.Demo.Logo
class CORDL_TYPE Logo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _logo, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__logo, put=__cordl_internal_set__logo)) ::UnityW<::UnityEngine::Texture2D>  _logo;

/// @brief Method Awake, addr 0x1805cbd60, size 0x40, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Dissonance::Demo::Logo* New_ctor() ;

/// @brief Method OnGUI, addr 0x1805cbda0, size 0x120, virtual false, abstract: false, final false
inline void OnGUI() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__logo() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__logo() ;

constexpr void __cordl_internal_set__logo(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Logo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Logo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Logo(Logo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Logo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Logo(Logo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16847};

/// @brief Field _logo, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____logo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Demo::Logo, ____logo) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Demo::Logo) == 0x28, "Size mismatch!");

} // namespace end def Dissonance::Demo
