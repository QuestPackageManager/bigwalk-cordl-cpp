#pragma once
// IWYU pragma private; include "UnityEngine/SystemClock.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemClock)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace UnityEngine {
class SystemClock;
}
// Write type traits
MARK_REF_T(::UnityEngine::SystemClock*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SystemClock*, "UnityEngine", "SystemClock");
// Dependencies System.DateTime, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SystemClock
class CORDL_TYPE SystemClock : public ::System::Object {
public:
// Declarations
/// @brief Field s_Epoch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Epoch, put=setStaticF_s_Epoch)) ::System::DateTime  s_Epoch;

static inline ::System::DateTime getStaticF_s_Epoch() ;

/// @brief Method get_now, addr 0x1822877e0, size 0x10, virtual false, abstract: false, final false
static inline ::System::DateTime get_now() ;

static inline void setStaticF_s_Epoch(::System::DateTime  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemClock() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemClock", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemClock(SystemClock && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemClock", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemClock(SystemClock const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10763};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SystemClock) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
