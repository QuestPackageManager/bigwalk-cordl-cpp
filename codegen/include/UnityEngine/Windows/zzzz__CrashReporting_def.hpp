#pragma once
// IWYU pragma private; include "UnityEngine/Windows/CrashReporting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CrashReporting)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine::Windows {
class CrashReporting;
}
// Write type traits
MARK_REF_T(::UnityEngine::Windows::CrashReporting*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Windows::CrashReporting*, "UnityEngine.Windows", "CrashReporting");
// Dependencies System.Object
namespace UnityEngine::Windows {
// Is value type: false
// CS Name: UnityEngine.Windows.CrashReporting
class CORDL_TYPE CrashReporting : public ::System::Object {
public:
// Declarations
/// @brief Method get_crashReportFolder, addr 0x18227e880, size 0x70, virtual false, abstract: false, final false
static inline ::StringW get_crashReportFolder() ;

/// @brief Method get_crashReportFolder_Injected, addr 0x18227e870, size 0x10, virtual false, abstract: false, final false
static inline void get_crashReportFolder_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrashReporting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrashReporting", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CrashReporting(CrashReporting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrashReporting", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrashReporting(CrashReporting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10793};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Windows::CrashReporting) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Windows
