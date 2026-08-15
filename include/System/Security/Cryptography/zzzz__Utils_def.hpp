#pragma once
// IWYU pragma private; include "System/Security/Cryptography/Utils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Utils;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::Utils*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::Utils*, "System.Security.Cryptography", "Utils");
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
// Declarations
/// @brief Field _rng, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__rng, put=setStaticF__rng)) ::System::Security::Cryptography::RNGCryptoServiceProvider*  _rng;

/// @brief Method ConvertByteArrayToInt, addr 0x18161d0b0, size 0x30, virtual false, abstract: false, final false
static inline int32_t ConvertByteArrayToInt(::ArrayW<uint8_t>  input) ;

/// @brief Method ConvertIntToByteArray, addr 0x18161d0e0, size 0xc0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ConvertIntToByteArray(int32_t  dwInput) ;

/// @brief Method DWORDFromBigEndian, addr 0x18161d1a0, size 0x50, virtual false, abstract: false, final false
static inline void DWORDFromBigEndian(uint32_t*  x, int32_t  digits, uint8_t*  block) ;

/// @brief Method DWORDFromLittleEndian, addr 0x18161d1f0, size 0x50, virtual false, abstract: false, final false
static inline void DWORDFromLittleEndian(uint32_t*  x, int32_t  digits, uint8_t*  block) ;

/// @brief Method DWORDToBigEndian, addr 0x18161d240, size 0x50, virtual false, abstract: false, final false
static inline void DWORDToBigEndian(::ArrayW<uint8_t>  block, ::ArrayW<uint32_t>  x, int32_t  digits) ;

/// @brief Method DWORDToLittleEndian, addr 0x18161d290, size 0x40, virtual false, abstract: false, final false
static inline void DWORDToLittleEndian(::ArrayW<uint8_t>  block, ::ArrayW<uint32_t>  x, int32_t  digits) ;

/// @brief Method DiscardWhiteSpaces, addr 0x18161d2d0, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW DiscardWhiteSpaces(::StringW  inputBuffer) ;

/// @brief Method DiscardWhiteSpaces, addr 0x18161d3c0, size 0x110, virtual false, abstract: false, final false
static inline ::StringW DiscardWhiteSpaces(::StringW  inputBuffer, int32_t  inputOffset, int32_t  inputCount) ;

/// @brief Method FixupKeyParity, addr 0x18161d4d0, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FixupKeyParity(::ArrayW<uint8_t>  key) ;

/// @brief Method GenerateRandom, addr 0x18161d570, size 0x50, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GenerateRandom(int32_t  keySize) ;

/// @brief Method HasAlgorithm, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
static inline bool HasAlgorithm(int32_t  dwCalg, int32_t  dwKeySize) ;

/// @brief Method QuadWordFromBigEndian, addr 0x18161d5c0, size 0x90, virtual false, abstract: false, final false
static inline void QuadWordFromBigEndian(uint64_t*  x, int32_t  digits, uint8_t*  block) ;

/// @brief Method QuadWordToBigEndian, addr 0x18161d650, size 0x70, virtual false, abstract: false, final false
static inline void QuadWordToBigEndian(::ArrayW<uint8_t>  block, ::ArrayW<uint64_t>  x, int32_t  digits) ;

/// @brief Method _ProduceLegacyHmacValues, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
static inline bool _ProduceLegacyHmacValues() ;

static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* getStaticF__rng() ;

/// @brief Method get_StaticRandomNumberGenerator, addr 0x18161d6c0, size 0x1e0, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* get_StaticRandomNumberGenerator() ;

static inline void setStaticF__rng(::System::Security::Cryptography::RNGCryptoServiceProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Utils(Utils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utils(Utils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{808};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::Utils) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Cryptography
