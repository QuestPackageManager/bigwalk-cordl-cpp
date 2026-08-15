#pragma once
// IWYU pragma private; include "Shipmate/Utils/Extensions/ByteArrayExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ByteArrayExtensions)
// Forward declare root types
namespace Shipmate::Utils::Extensions {
class ByteArrayExtensions;
}
// Write type traits
MARK_REF_T(::Shipmate::Utils::Extensions::ByteArrayExtensions*);
DEFINE_IL2CPP_CLASS(::Shipmate::Utils::Extensions::ByteArrayExtensions*, "Shipmate.Utils.Extensions", "ByteArrayExtensions");
// Dependencies System.Object
namespace Shipmate::Utils::Extensions {
// Is value type: false
// CS Name: Shipmate.Utils.Extensions.ByteArrayExtensions
class CORDL_TYPE ByteArrayExtensions : public ::System::Object {
public:
// Declarations
/// @brief Field EMPTY_BUFFER, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EMPTY_BUFFER, put=setStaticF_EMPTY_BUFFER)) ::ArrayW<uint8_t>  EMPTY_BUFFER;

/// @brief Method Append, addr 0x181aca700, size 0x80, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Append(::ArrayW<uint8_t>  aBytes, ::ArrayW<uint8_t>  aToAppend) ;

/// @brief Method Clear, addr 0x181aca780, size 0x60, virtual false, abstract: false, final false
static inline void Clear(::ArrayW<uint8_t>  aBytes) ;

/// @brief Method Copy, addr 0x181aca850, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Copy(::ArrayW<uint8_t>  aBytes, int32_t  aOffset) ;

/// @brief Method Copy, addr 0x181aca7e0, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Copy(::ArrayW<uint8_t>  aBytes, int32_t  aOffset, int32_t  aLength) ;

/// @brief Method Flip, addr 0x181aca8c0, size 0x60, virtual false, abstract: false, final false
static inline void Flip(::ArrayW<uint8_t>  aBytes) ;

/// @brief Method IsIdentical, addr 0x181aca920, size 0x60, virtual false, abstract: false, final false
static inline bool IsIdentical(::ArrayW<uint8_t>  aBytes1, ::ArrayW<uint8_t>  aBytes2) ;

/// @brief Method Pack, addr 0x181aca980, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Pack(::ArrayW<uint8_t>  aBytes, int32_t  aTotalBits) ;

/// @brief Method Prepend, addr 0x181aca9f0, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Prepend(::ArrayW<uint8_t>  aBytes, ::ArrayW<uint8_t>  aToPrepend) ;

/// @brief Method Subarray, addr 0x181aca7e0, size 0x70, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Subarray(::ArrayW<uint8_t>  aBytes, int32_t  aStart, int32_t  aLength) ;

/// @brief Method ToBase64, addr 0x181acaa90, size 0x10, virtual false, abstract: false, final false
static inline ::StringW ToBase64(::ArrayW<uint8_t>  aBytes) ;

/// @brief Method ToHexString, addr 0x181acaaa0, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW ToHexString(::ArrayW<uint8_t>  aBytes) ;

static inline ::ArrayW<uint8_t> getStaticF_EMPTY_BUFFER() ;

static inline void setStaticF_EMPTY_BUFFER(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ByteArrayExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ByteArrayExtensions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ByteArrayExtensions(ByteArrayExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ByteArrayExtensions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ByteArrayExtensions(ByteArrayExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21379};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Utils::Extensions::ByteArrayExtensions) == 0x10, "Size mismatch!");

} // namespace end def Shipmate::Utils::Extensions
