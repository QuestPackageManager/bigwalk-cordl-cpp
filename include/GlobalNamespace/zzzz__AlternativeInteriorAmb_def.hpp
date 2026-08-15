#pragma once
// IWYU pragma private; include "GlobalNamespace/AlternativeInteriorAmb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AlternativeInteriorAmb)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioRTPCXProvider;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioSourceController;
}
// Forward declare root types
namespace GlobalNamespace {
class AlternativeInteriorAmb;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AlternativeInteriorAmb*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AlternativeInteriorAmb*, "", "AlternativeInteriorAmb");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AlternativeInteriorAmb
class CORDL_TYPE AlternativeInteriorAmb : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AmbienceSound, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_AmbienceSound, put=__cordl_internal_set_AmbienceSound)) ::UnityW<::GlobalNamespace::AudioAsset>  AmbienceSound;

/// @brief Field GenericAmbRTPCXProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_GenericAmbRTPCXProvider, put=__cordl_internal_set_GenericAmbRTPCXProvider)) ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  GenericAmbRTPCXProvider;

/// @brief Field SuperWet, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_SuperWet, put=__cordl_internal_set_SuperWet)) bool  SuperWet;

/// @brief Field _asc, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__asc, put=__cordl_internal_set__asc)) ::UnityW<::GlobalNamespace::AudioSourceController>  _asc;

/// @brief Method GetX, addr 0x1803164f0, size 0x80, virtual false, abstract: false, final false
inline bool GetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

static inline ::GlobalNamespace::AlternativeInteriorAmb* New_ctor() ;

/// @brief Method OnDisable, addr 0x180316570, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1803165d0, size 0x1c0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x180316820, size 0xe0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method <OnEnable>g___clearRef|4_0, addr 0x180316790, size 0x90, virtual false, abstract: false, final false
static inline void _OnEnable_g___clearRef_4_0(::GlobalNamespace::AlternativeInteriorAmb*  a, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get_AmbienceSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get_AmbienceSound() ;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider> const& __cordl_internal_get_GenericAmbRTPCXProvider() const;

constexpr ::UnityW<::GlobalNamespace::AudioRTPCXProvider>& __cordl_internal_get_GenericAmbRTPCXProvider() ;

constexpr bool const& __cordl_internal_get_SuperWet() const;

constexpr bool& __cordl_internal_get_SuperWet() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__asc() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__asc() ;

constexpr void __cordl_internal_set_AmbienceSound(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set_GenericAmbRTPCXProvider(::UnityW<::GlobalNamespace::AudioRTPCXProvider>  value) ;

constexpr void __cordl_internal_set_SuperWet(bool  value) ;

constexpr void __cordl_internal_set__asc(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AlternativeInteriorAmb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlternativeInteriorAmb", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AlternativeInteriorAmb(AlternativeInteriorAmb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlternativeInteriorAmb", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlternativeInteriorAmb(AlternativeInteriorAmb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4782};

/// @brief Field AmbienceSound, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ___AmbienceSound;

/// @brief Field GenericAmbRTPCXProvider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRTPCXProvider>  ___GenericAmbRTPCXProvider;

/// @brief Field SuperWet, offset: 0x30, size: 0x1, def value: None
 bool  ___SuperWet;

/// @brief Field _asc, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____asc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AlternativeInteriorAmb, ___AmbienceSound) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlternativeInteriorAmb, ___GenericAmbRTPCXProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlternativeInteriorAmb, ___SuperWet) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlternativeInteriorAmb, ____asc) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AlternativeInteriorAmb) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
