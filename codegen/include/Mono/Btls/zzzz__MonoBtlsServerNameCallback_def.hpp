#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsServerNameCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsServerNameCallback)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsServerNameCallback;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsServerNameCallback*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsServerNameCallback*, "Mono.Btls", "MonoBtlsServerNameCallback");
// Dependencies System.MulticastDelegate
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsServerNameCallback
class CORDL_TYPE MonoBtlsServerNameCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline int32_t Invoke() ;

static inline ::Mono::Btls::MonoBtlsServerNameCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1813c35c0, size 0x370, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsServerNameCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsServerNameCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsServerNameCallback(MonoBtlsServerNameCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsServerNameCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsServerNameCallback(MonoBtlsServerNameCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11467};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsServerNameCallback) == 0x80, "Size mismatch!");

} // namespace end def Mono::Btls
