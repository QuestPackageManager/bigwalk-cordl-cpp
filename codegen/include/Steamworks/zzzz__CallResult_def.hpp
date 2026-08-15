#pragma once
// IWYU pragma private; include "Steamworks/CallResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CallResult)
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Steamworks {
class CallResult;
}
// Write type traits
MARK_REF_T(::Steamworks::CallResult*);
DEFINE_IL2CPP_CLASS(::Steamworks::CallResult*, "Steamworks", "CallResult");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.CallResult
class CORDL_TYPE CallResult : public ::System::Object {
public:
// Declarations
/// @brief Method GetCallbackType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Type* GetCallbackType() ;

static inline ::Steamworks::CallResult* New_ctor() ;

/// @brief Method OnRunCallResult, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnRunCallResult(::System::IntPtr  pvParam, bool  bFailed, uint64_t  hSteamAPICall) ;

/// @brief Method SetUnregistered, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetUnregistered() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CallResult(CallResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallResult(CallResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15977};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::CallResult) == 0x10, "Size mismatch!");

} // namespace end def Steamworks
