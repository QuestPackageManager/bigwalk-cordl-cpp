#pragma once
// IWYU pragma private; include "Mirror/Mathd.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Mathd)
// Forward declare root types
namespace Mirror {
class Mathd;
}
// Write type traits
MARK_REF_T(::Mirror::Mathd*);
DEFINE_IL2CPP_CLASS(::Mirror::Mathd*, "Mirror", "Mathd");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.Mathd
class CORDL_TYPE Mathd : public ::System::Object {
public:
// Declarations
/// @brief Method Clamp, addr 0x181594500, size 0x20, virtual false, abstract: false, final false
static inline double_t Clamp(double_t  value, double_t  min, double_t  max) ;

/// @brief Method Clamp01, addr 0x1815944e0, size 0x20, virtual false, abstract: false, final false
static inline double_t Clamp01(double_t  value) ;

/// @brief Method InverseLerp, addr 0x181594520, size 0x40, virtual false, abstract: false, final false
static inline double_t InverseLerp(double_t  a, double_t  b, double_t  value) ;

/// @brief Method LerpUnclamped, addr 0x181594560, size 0x280, virtual false, abstract: false, final false
static inline double_t LerpUnclamped(double_t  a, double_t  b, double_t  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Mathd() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Mathd", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Mathd(Mathd && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Mathd", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Mathd(Mathd const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18380};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::Mathd) == 0x10, "Size mismatch!");

} // namespace end def Mirror
