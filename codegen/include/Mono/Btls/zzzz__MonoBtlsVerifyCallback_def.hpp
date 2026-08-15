#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsVerifyCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsVerifyCallback)
namespace Mono::Btls {
class MonoBtlsX509StoreCtx;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsVerifyCallback;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsVerifyCallback*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsVerifyCallback*, "Mono.Btls", "MonoBtlsVerifyCallback");
// Dependencies System.MulticastDelegate
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsVerifyCallback
class CORDL_TYPE MonoBtlsVerifyCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline int32_t Invoke(::Mono::Btls::MonoBtlsX509StoreCtx*  ctx) ;

static inline ::Mono::Btls::MonoBtlsVerifyCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181db74a0, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsVerifyCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsVerifyCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsVerifyCallback(MonoBtlsVerifyCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsVerifyCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsVerifyCallback(MonoBtlsVerifyCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11465};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsVerifyCallback) == 0x80, "Size mismatch!");

} // namespace end def Mono::Btls
