#pragma once
// IWYU pragma private; include "GlobalNamespace/OceanTimeMinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OceanTimeMinder)
namespace WaveHarmonic::Crest {
class NetworkedTimeProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class OceanTimeMinder;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OceanTimeMinder*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OceanTimeMinder*, "", "OceanTimeMinder");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OceanTimeMinder
class CORDL_TYPE OceanTimeMinder : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field networkedTimeProvider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkedTimeProvider, put=__cordl_internal_set_networkedTimeProvider)) ::UnityW<::WaveHarmonic::Crest::NetworkedTimeProvider>  networkedTimeProvider;

static inline ::GlobalNamespace::OceanTimeMinder* New_ctor() ;

/// @brief Method SetOffset, addr 0x1804277b0, size 0x50, virtual false, abstract: false, final false
inline void SetOffset() ;

/// @brief Method Start, addr 0x1804277b0, size 0x50, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::WaveHarmonic::Crest::NetworkedTimeProvider> const& __cordl_internal_get_networkedTimeProvider() const;

constexpr ::UnityW<::WaveHarmonic::Crest::NetworkedTimeProvider>& __cordl_internal_get_networkedTimeProvider() ;

constexpr void __cordl_internal_set_networkedTimeProvider(::UnityW<::WaveHarmonic::Crest::NetworkedTimeProvider>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OceanTimeMinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OceanTimeMinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OceanTimeMinder(OceanTimeMinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OceanTimeMinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OceanTimeMinder(OceanTimeMinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5190};

/// @brief Field networkedTimeProvider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::NetworkedTimeProvider>  ___networkedTimeProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OceanTimeMinder, ___networkedTimeProvider) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OceanTimeMinder) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
