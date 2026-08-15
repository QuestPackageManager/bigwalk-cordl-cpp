#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsSelectCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsSelectCallback)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsSelectCallback;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsSelectCallback*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsSelectCallback*, "Mono.Btls", "MonoBtlsSelectCallback");
// Dependencies System.MulticastDelegate
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsSelectCallback
class CORDL_TYPE MonoBtlsSelectCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline int32_t Invoke(::ArrayW<::StringW>  acceptableIssuers) ;

static inline ::Mono::Btls::MonoBtlsSelectCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x181db22a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsSelectCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSelectCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsSelectCallback(MonoBtlsSelectCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsSelectCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsSelectCallback(MonoBtlsSelectCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11466};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsSelectCallback) == 0x80, "Size mismatch!");

} // namespace end def Mono::Btls
