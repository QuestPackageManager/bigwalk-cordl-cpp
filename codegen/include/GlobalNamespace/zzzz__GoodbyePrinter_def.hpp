#pragma once
// IWYU pragma private; include "GlobalNamespace/GoodbyePrinter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSwitch_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GoodbyePrinter)
namespace GlobalNamespace {
struct GoodbyePrinter_PrinterOutcome;
}
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
class PeckSwitch;
}
namespace GlobalNamespace {
class PropHome;
}
namespace GlobalNamespace {
class Prop;
}
// Forward declare root types
namespace GlobalNamespace {
class GoodbyePrinter;
}
namespace GlobalNamespace {
struct GoodbyePrinter_PrinterOutcome;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GoodbyePrinter*);
MARK_VAL_T(::GlobalNamespace::GoodbyePrinter_PrinterOutcome);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GoodbyePrinter*, "", "GoodbyePrinter");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GoodbyePrinter_PrinterOutcome, "", "GoodbyePrinter/PrinterOutcome");
// Dependencies PeckSwitch
namespace GlobalNamespace {
// Is value type: true
// CS Name: GoodbyePrinter/PrinterOutcome
struct CORDL_TYPE GoodbyePrinter_PrinterOutcome {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GoodbyePrinter_PrinterOutcome() ;

// Ctor Parameters [CppParam { name: "peckSwitches", ty: "::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>", modifiers: "", def_value: None }, CppParam { name: "prop", ty: "::UnityW<::GlobalNamespace::Prop>", modifiers: "", def_value: None }]
constexpr GoodbyePrinter_PrinterOutcome(::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  peckSwitches, ::UnityW<::GlobalNamespace::Prop>  prop) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5057};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field peckSwitches, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::PeckSwitch>>  peckSwitches;

/// @brief Field prop, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  prop;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GoodbyePrinter_PrinterOutcome, peckSwitches) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GoodbyePrinter_PrinterOutcome, prop) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GoodbyePrinter_PrinterOutcome) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GoodbyePrinter::PrinterOutcome, PeckSystemReference, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GoodbyePrinter
class CORDL_TYPE GoodbyePrinter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PrinterOutcome = ::GlobalNamespace::GoodbyePrinter_PrinterOutcome;

/// @brief Field outcomes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_outcomes, put=__cordl_internal_set_outcomes)) ::ArrayW<::GlobalNamespace::GoodbyePrinter_PrinterOutcome>  outcomes;

/// @brief Field printerHome, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_printerHome, put=__cordl_internal_set_printerHome)) ::UnityW<::GlobalNamespace::PropHome>  printerHome;

/// @brief Field queueSystem, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_queueSystem, put=__cordl_internal_set_queueSystem)) ::GlobalNamespace::PeckSystemReference  queueSystem;

/// @brief Method Awake, addr 0x1803fe210, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GoodbyePrinter* New_ctor() ;

/// @brief Method OnQueuePeck, addr 0x1803fe260, size 0x100, virtual false, abstract: false, final false
inline void OnQueuePeck(::GlobalNamespace::PeckContext  peckContext) ;

constexpr ::ArrayW<::GlobalNamespace::GoodbyePrinter_PrinterOutcome> const& __cordl_internal_get_outcomes() const;

constexpr ::ArrayW<::GlobalNamespace::GoodbyePrinter_PrinterOutcome>& __cordl_internal_get_outcomes() ;

constexpr ::UnityW<::GlobalNamespace::PropHome> const& __cordl_internal_get_printerHome() const;

constexpr ::UnityW<::GlobalNamespace::PropHome>& __cordl_internal_get_printerHome() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_queueSystem() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_queueSystem() ;

constexpr void __cordl_internal_set_outcomes(::ArrayW<::GlobalNamespace::GoodbyePrinter_PrinterOutcome>  value) ;

constexpr void __cordl_internal_set_printerHome(::UnityW<::GlobalNamespace::PropHome>  value) ;

constexpr void __cordl_internal_set_queueSystem(::GlobalNamespace::PeckSystemReference  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GoodbyePrinter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GoodbyePrinter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GoodbyePrinter(GoodbyePrinter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GoodbyePrinter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GoodbyePrinter(GoodbyePrinter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5058};

/// @brief Field printerHome, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropHome>  ___printerHome;

/// @brief Field queueSystem, offset: 0x28, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___queueSystem;

/// @brief Field outcomes, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GoodbyePrinter_PrinterOutcome>  ___outcomes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GoodbyePrinter, ___printerHome) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GoodbyePrinter, ___queueSystem) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GoodbyePrinter, ___outcomes) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GoodbyePrinter) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
