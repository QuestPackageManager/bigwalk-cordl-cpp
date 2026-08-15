#pragma once
// IWYU pragma private; include "Shipmate/Utils/PlatformUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlatformUtils)
namespace System::Threading {
class Thread;
}
// Forward declare root types
namespace Shipmate::Utils {
class PlatformUtils;
}
// Write type traits
MARK_REF_T(::Shipmate::Utils::PlatformUtils*);
DEFINE_IL2CPP_CLASS(::Shipmate::Utils::PlatformUtils*, "Shipmate.Utils", "PlatformUtils");
// Dependencies System.Object
namespace Shipmate::Utils {
// Is value type: false
// CS Name: Shipmate.Utils.PlatformUtils
class CORDL_TYPE PlatformUtils : public ::System::Object {
public:
// Declarations
/// @brief Field mMainThread, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mMainThread, put=setStaticF_mMainThread)) ::System::Threading::Thread*  mMainThread;

/// @brief Method CaptureMainThread, addr 0x181ac6c90, size 0x40, virtual false, abstract: false, final false
static inline void CaptureMainThread() ;

static inline ::System::Threading::Thread* getStaticF_mMainThread() ;

/// @brief Method get_MainThread, addr 0x181ac6cd0, size 0x20, virtual false, abstract: false, final false
static inline ::System::Threading::Thread* get_MainThread() ;

static inline void setStaticF_mMainThread(::System::Threading::Thread*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformUtils(PlatformUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformUtils(PlatformUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20594};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Utils::PlatformUtils) == 0x10, "Size mismatch!");

} // namespace end def Shipmate::Utils
