#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlatformHelper)
// Forward declare root types
namespace GlobalNamespace {
class PlatformHelper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlatformHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlatformHelper*, "", "PlatformHelper");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlatformHelper
class CORDL_TYPE PlatformHelper : public ::System::Object {
public:
// Declarations
/// @brief Field _lastReportTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__lastReportTime, put=setStaticF__lastReportTime)) float_t  _lastReportTime;

/// @brief Method ReportPSNOnline, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline void ReportPSNOnline() ;

static inline float_t getStaticF__lastReportTime() ;

static inline void setStaticF__lastReportTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformHelper(PlatformHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformHelper(PlatformHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5553};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlatformHelper) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
