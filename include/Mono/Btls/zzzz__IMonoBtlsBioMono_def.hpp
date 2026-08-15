#pragma once
// IWYU pragma private; include "Mono/Btls/IMonoBtlsBioMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IMonoBtlsBioMono)
// Forward declare root types
namespace Mono::Btls {
class IMonoBtlsBioMono;
}
// Write type traits
MARK_REF_T(::Mono::Btls::IMonoBtlsBioMono*);
DEFINE_IL2CPP_CLASS(::Mono::Btls::IMonoBtlsBioMono*, "Mono.Btls", "IMonoBtlsBioMono");
// Dependencies 
namespace Mono::Btls {
// Is value type: false
// CS Name: Mono.Btls.IMonoBtlsBioMono
class CORDL_TYPE IMonoBtlsBioMono {
public:
// Declarations
/// @brief Method Close, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Flush, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method Read, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::by_ref<bool>  wantMore) ;

/// @brief Method Write, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size) ;

// Ctor Parameters [CppParam { name: "", ty: "IMonoBtlsBioMono", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMonoBtlsBioMono(IMonoBtlsBioMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11449};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Btls
