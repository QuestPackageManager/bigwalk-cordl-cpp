#pragma once
// IWYU pragma private; include "UnityEngine/UnityConsent/ConsentState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UnityConsent/zzzz__ConsentStatus_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ConsentState)
// Forward declare root types
namespace UnityEngine::UnityConsent {
struct ConsentState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UnityConsent::ConsentState);
DEFINE_IL2CPP_CLASS(::UnityEngine::UnityConsent::ConsentState, "UnityEngine.UnityConsent", "ConsentState");
// Dependencies UnityEngine.UnityConsent.ConsentStatus
namespace UnityEngine::UnityConsent {
// Is value type: true
// CS Name: UnityEngine.UnityConsent.ConsentState
struct CORDL_TYPE ConsentState {
public:
// Declarations
/// @brief Method ToString, addr 0x182548ee0, size 0xd0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1822ba900, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

// Ctor Parameters []
// @brief default ctor
constexpr ConsentState() ;

// Ctor Parameters [CppParam { name: "AdsIntent", ty: "::UnityEngine::UnityConsent::ConsentStatus", modifiers: "", def_value: None }, CppParam { name: "AnalyticsIntent", ty: "::UnityEngine::UnityConsent::ConsentStatus", modifiers: "", def_value: None }]
constexpr ConsentState(::UnityEngine::UnityConsent::ConsentStatus  AdsIntent, ::UnityEngine::UnityConsent::ConsentStatus  AnalyticsIntent) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21648};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field AdsIntent, offset: 0x0, size: 0x4, def value: None
 ::UnityEngine::UnityConsent::ConsentStatus  AdsIntent;

/// @brief Field AnalyticsIntent, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::UnityConsent::ConsentStatus  AnalyticsIntent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UnityConsent::ConsentState, AdsIntent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UnityConsent::ConsentState, AnalyticsIntent) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UnityConsent::ConsentState) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::UnityConsent
