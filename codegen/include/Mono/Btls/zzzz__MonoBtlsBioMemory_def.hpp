#pragma once
// IWYU pragma private; include "Mono/Btls/MonoBtlsBioMemory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Btls/zzzz__MonoBtlsBio_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoBtlsBioMemory)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Mono::Btls {
class MonoBtlsBioMemory;
}
// Write type traits
MARK_REF_T(::Mono::Btls::MonoBtlsBioMemory*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::MonoBtlsBioMemory*, "Mono.Btls", "MonoBtlsBioMemory");
// Dependencies Mono.Btls.MonoBtlsBio
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.MonoBtlsBioMemory
class CORDL_TYPE MonoBtlsBioMemory : public ::Mono::Btls::MonoBtlsBio {
public:
// Declarations
/// @brief Method GetData, addr 0x181b42290, size 0x200, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetData() ;

static inline ::Mono::Btls::MonoBtlsBioMemory* New_ctor() ;

/// @brief Method .ctor, addr 0x181b42490, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method mono_btls_bio_mem_get_data, addr 0x181b42540, size 0x90, virtual false, abstract: false, final false
static inline int32_t mono_btls_bio_mem_get_data(::System::IntPtr  handle, ::by_ref<::System::IntPtr>  data) ;

/// @brief Method mono_btls_bio_mem_new, addr 0x181b425d0, size 0x70, virtual false, abstract: false, final false
static inline ::System::IntPtr mono_btls_bio_mem_new() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoBtlsBioMemory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsBioMemory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoBtlsBioMemory(MonoBtlsBioMemory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoBtlsBioMemory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoBtlsBioMemory(MonoBtlsBioMemory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11448};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Btls::MonoBtlsBioMemory) == 0x20, "Size mismatch!");

} // namespace end def Mono::Btls
